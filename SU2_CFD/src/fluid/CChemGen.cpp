/*!
 * \file CChemGen.cpp
 * \brief Source of the ChemGen chemistry model.
 * \author Alexandre Boueri -- Adapted from CMutationTCLib.cpp
 * \version 8.3.0 "Harrier"
 *
 * SU2 Project Website: https://su2code.github.io
 *
 * The SU2 Project is maintained by the SU2 Foundation
 * (http://su2foundation.org)
 *
 * Copyright 2012-2025, SU2 Contributors (cf. AUTHORS.md)
 *
 * SU2 is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * SU2 is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with SU2. If not, see <http://www.gnu.org/licenses/>.
 */

#if defined(HAVE_CHEMGEN) //&& !defined(CODI_REVERSE_TYPE) && !defined(CODI_FORWARD_TYPE)

#include "../../include/fluid/CChemGen.hpp"
#include "../../../subprojects/ChemGen/chemgen.h"

CChemGen::CChemGen(const CConfig* config, unsigned short val_nDim): CNEMOGas(config, val_nDim){

  
  string transport_model;
  NoneqStateModel = config->GetNoneqStateModel();

  /* Allocating memory*/
  Cv_ks.resize(nEnergyEq*nSpecies,0.0);
  es.resize(nEnergyEq*nSpecies,0.0);
  omega_vec.resize(1,0.0);
  CatRecombTable.resize(nSpecies,2) = 0;
  JacRho.resize(nSpecies*nSpecies,0.0);
  JacT.resize(nSpecies,0.0);
  JacTv.resize(nSpecies,0.0);
  omegaJRho.resize(nSpecies,0.0);
  omegaJTTv.resize(nEnergyEq,0.0);


  /* Initialize mixture object */
  //chemgen_mix.reset(new ChemGen::Mixture()); // I don't think it will need a transport model

  for(iSpecies = 0; iSpecies < nSpecies; iSpecies++){
    MolarMass[iSpecies] = molecular_weights()[iSpecies];
  }

  nHeavy = nSpecies; nEl = 0;

  if (config->GetCatalytic()) {
    SU2_MPI::Error("Catalytic wall recombination not implemented for ChemGen", CURRENT_FUNCTION);
  }

}

CChemGen::~CChemGen(){}

void CChemGen::SetTDStateRhosTTv(vector<su2double>& val_rhos, su2double val_temperature, su2double val_temperature_ve){

  rhos = val_rhos;
  T   = val_temperature;
  Tve = val_temperature_ve; // this won't be needed for 1T combustion but keep it around

  Density = 0.0;
  for (iSpecies = 0; iSpecies < nSpecies; iSpecies++)
    Density += rhos[iSpecies];

  Pressure = ComputePressure(); // Called in CNemoGas

  //mix->setState(rhos.data(), temperatures.data(), 1, NEWTON_ROBUST);
  MolarMass = GetSpeciesMolarMass();
  //std::array<double, n_species> conc_s; // note that n_species is from ChemGen -- it's not SU2's species count nSpecies (but it should be equal)
  for(iSpecies = 0; iSpecies < nSpecies; iSpecies++) MassFrac[iSpecies] = rhos[iSpecies]/Density; // getting mass fractions
        
  //ChemicalState chemstate = set_chemical_state(T, conc_s); // chemical state in chemgen

}

vector<su2double>& CChemGen::GetSpeciesMolarMass(){

   for (iSpecies = 0; iSpecies < n_species; iSpecies++) MolarMass[iSpecies] = molecular_weights()[iSpecies]; // the molecular weights hardcoded in the library

   return MolarMass;
}

/*// TODO: Create or pull in a constant for elementary charge
vector<su2double>& CChemGen::GetSpeciesCharge(){

   for(iSpecies = 0; iSpecies < nSpecies; iSpecies++) ChargeSpecies[iSpecies] = mix->speciesCharge(iSpecies)/1.602176565E-19; // Charge divided by elementary charge so neutrals = 0, ions = +1, and electrons = -1

   return ChargeSpecies;
}
*/

vector<su2double>& CChemGen::GetSpeciesCvTraRot(){

   //mix->getCvsMass(Cv_ks.data());

   for (iSpecies = 0; iSpecies < n_species; iSpecies++) Cvtrs[iSpecies] = species_specific_heat_constant_volume_mass_specific(T)[iSpecies];
   //for(iSpecies = 0; iSpecies < nSpecies; iSpecies++) Cvtrs[iSpecies] = Cv_ks[iSpecies];
   
   return Cvtrs;
}


vector<su2double>& CChemGen::ComputeSpeciesCvVibEle(su2double val_T){

   // Set Cv,ve = 0 for all species at the moment for chemgen
   for(iSpecies = 0; iSpecies < nSpecies; iSpecies++) Cvves[iSpecies] = 0;

   return Cvves;
}


vector<su2double>& CChemGen::ComputeMixtureEnergies(){

  SetTDStateRhosTTv(rhos, T, Tve);

  std::array<double, n_species> conc_s; // note that n_species is from ChemGen -- it's not SU2's species count nSpecies (but it should be equal)
  for (iSpecies = 0; iSpecies < nSpecies; iSpecies++) conc_s[iSpecies] = rhos[iSpecies]/MolarMass[iSpecies]; // getting concentrations from densities

  double rhoEmix = internal_energy_volume_specific(conc_s, T);

  energies[0] = rhoEmix/Density;
  energies[1] = 0;

  return energies;
}

vector<su2double>& CChemGen::ComputeSpeciesEve(su2double val_T, bool vibe_only){

  // SetTDStateRhosTTv(rhos, T, val_T);
  // mix->getEnergiesMass(es.data());
  for(iSpecies = 0; iSpecies < nSpecies; iSpecies++) eves[iSpecies] = 0;

  return eves;
}

// Species Production
// void chemgen::SpeciesSource(ws){
//  Species netProductionRates = source(species_conc, val_T) // source or source_species? both are present
//  for (iSpecies = 0; iSpecies < nSpecies; iSpecies++){
//    ws[iSpecies] = ws1[iSpecies+1];
//  }
// }

vector<su2double>& CChemGen::ComputeNetProductionRates(bool implicit, const su2double *V, const su2double* eve,
                                               const su2double* cvve, const su2double* dTdU, const su2double* dTvedU,
                                               su2double **val_jacobian){

  // mix->netProductionRates(ws.data());
  std::array<double, n_species+1> ws1;
  std::array<double, n_species> conc_s; // note that n_species is from ChemGen -- it's not SU2's species count nSpecies (but it should be equal)
  for (iSpecies = 0; iSpecies < nSpecies; iSpecies++) conc_s[iSpecies] = rhos[iSpecies]/MolarMass[iSpecies];
  ws1 = source(conc_s, T);
  // std::cout << ws1[8] << std::endl;
  for (iSpecies = 0; iSpecies < nSpecies; iSpecies++) ws[iSpecies] = ws1[iSpecies+1] * MolarMass[iSpecies]; // convert from molar to mass production rates

  //if(implicit) ChemistryJacobian(0, V, eve, cvve, dTdU, dTvedU, val_jacobian);
  return ws;
}

void CChemGen::ChemistryJacobian(unsigned short iReaction, const su2double *V, const su2double* eve, const su2double *cvve,
                                  const su2double* dTdU, const su2double* dTvedU, su2double **val_jacobian){

  unsigned short iVar, jVar, iSpecies;
  unsigned short nVar = nSpecies+nDim+2;

  /* TEMPORARY: RUNNING ONLY EXPLICIT AS A FIRST STEP
  mix->jacobianRho(JacRho.data());
  mix->jacobianT(JacT.data());

  for(iSpecies = 0; iSpecies < nSpecies; iSpecies++){
      for(jSpecies = 0; jSpecies < nSpecies; jSpecies++){ 
          val_jacobian[iSpecies][jSpecies] = JacRho[iSpecies*nSpecies+jSpecies];}
      for(iVar = 0; iVar < nVar; iVar++){
          val_jacobian[iSpecies][iVar] += JacT[iSpecies]*dTdU[iVar];}
  }
  */

  // For ChemGen, for the moment only doing 1T
  /* 
  if (NoneqStateModel == "2T") {  
  	mix->jacobianTv(JacTv.data());
  	for(iSpecies = 0; iSpecies < nSpecies; iSpecies++){
      		for(iVar = 0; iVar < nVar; iVar++){
          		val_jacobian[iSpecies][iVar] += JacTv[iSpecies]*dTvedU[iVar];}
        }
  }
  */  
    
}

su2double CChemGen::ComputeEveSourceTerm(){

  // mix->energyTransferSource(omega_vec.data());

  omega = 0;

  return omega;
}

void CChemGen::GetEveSourceTermJacobian(const su2double *V, const su2double *eve, const su2double *cvve, const su2double *dTdU, 
                                  const su2double* dTvedU, su2double **val_jacobian){

   if ((NoneqStateModel == "1T") or (NoneqStateModel == "EQUILIBRIUM")) return;

   /*
   unsigned short iVar, jVar, iSpecies;
   unsigned short nEve = nSpecies+nDim+1;
   unsigned short nVar = nSpecies+nDim+2;

   mix->energyTransferJacobiansRho(omegaJRho.data());
   mix->energyTransferJacobiansTTv(omegaJTTv.data());

   for(iSpecies = 0; iSpecies < nSpecies; iSpecies++)
      val_jacobian[nEve][iSpecies] = omegaJRho[iSpecies];

   for(iVar = 0; iVar < nVar; iVar++){
      val_jacobian[nEve][iVar] += omegaJTTv[0]*dTdU[iVar];
      val_jacobian[nEve][iVar] += omegaJTTv[1]*dTvedU[iVar];
   }
   */

}

vector<su2double>& CChemGen::ComputeSpeciesEnthalpy(su2double val_T, su2double val_Tve, su2double *val_eves){

  for (iSpecies = 0; iSpecies < nSpecies; iSpecies++) hs[iSpecies] = species_enthalpy_mass_specific(T)[iSpecies];

  return hs;
}

vector<su2double>& CChemGen::GetDiffusionCoeff(){

  // mix->averageDiffusionCoeffs(DiffusionCoeff.data());
  std::array<double, n_species> Cptrs; // note n_species is from chemgen and is set at compile time
  double Cptr; // locally used translational rotational specific heat at constant pressure
  Cptrs = species_specific_heat_constant_pressure_mass_specific(T);
  for (iSpecies = 0; iSpecies < n_species; iSpecies++) Cptr += Cptrs[iSpecies]*MassFrac[iSpecies];

  // TEMPORARY
  // Using Sutherland's model for air (conductivity)
  const double T_ref_suth = 273.15;
  const double Sk_ref = 194.0;
  const double k_ref  = 0.0241;
  double T_nd = T / T_ref_suth;
  k = k_ref * T_nd * sqrt(T_nd) * ((T_ref_suth + Sk_ref) / (T + Sk_ref));

  for (iSpecies = 0; iSpecies < n_species; iSpecies++) DiffusionCoeff[iSpecies] = k/(Density*Cptr);


  return DiffusionCoeff;
	
}

su2double CChemGen::GetViscosity(){

  // TEMPORARY
  // Using Sutherland's model for air (viscosity)
  const double T_ref_suth = 273.15;
  const double Sm_ref = 110.4; // or 111.0 ?
  const double mu_ref = 1.716E-5;
  double T_nd = T / T_ref_suth;
  // double Mu;
  Mu = mu_ref * T_nd * sqrt(T_nd) * ((T_ref_suth + Sm_ref) / (T + Sm_ref));

  return Mu;
}

vector<su2double>& CChemGen::GetThermalConductivities(){

  // TEMPORARY
  // Using Sutherland's model for air (conductivity)
  const double T_ref_suth = 273.15;
  const double Sk_ref = 194.0;
  const double k_ref  = 0.0241;
  double T_nd = T / T_ref_suth;
  k = k_ref * T_nd * sqrt(T_nd) * ((T_ref_suth + Sk_ref) / (T + Sk_ref));

  ThermalConductivities[0] = k;
  ThermalConductivities[1] = 0;

  return ThermalConductivities;
}

vector<su2double>& CChemGen::ComputeTemperatures(vector<su2double>& val_rhos, su2double rhoE, su2double rhoEve, su2double rhoEvel, su2double Tve_old, su2double T_old){

  rhos = val_rhos;

  //energies[0] = rhoE - rhoEvel;
  //energies[1] = rhoEve;
  
  std::array<double, n_species> conc_s; // note that n_species is from ChemGen -- it's not SU2's species count nSpecies (but it should be equal)
  for (iSpecies = 0; iSpecies < nSpecies; iSpecies++) conc_s[iSpecies] = rhos[iSpecies]/MolarMass[iSpecies]; // getting concentrations from densities

  //mix->setState(rhos.data(), energies.data(), 0, NEWTON_ROBUST);
  //mix->getTemperatures(temperatures.data());

  T   = temperature(rhoE, conc_s, 10);
  Tve = 288.15; // temperatures[1]; // 288.15

  temperatures[0] = T;
  temperatures[1] = Tve;

  return temperatures;
}

/*
vector<su2double>& CChemGen::GetRefTemperature() {

  // enthalpies of formation zeroed out in SU2TCLib
  Tref = mix->standardStateT();

  for (iSpecies = 0; iSpecies < nSpecies; iSpecies++) Ref_Temperature[iSpecies] = Tref;

  return Ref_Temperature;
}

vector<su2double>& CChemGen::GetSpeciesFormationEnthalpy() {

   vector<su2double> hf_RT; hf_RT.resize(nSpecies,0.0);
   // why is this not present in SU2TCLib but present here? They seem to be used in the same way

   Tref = mix->standardStateT();

   mix->speciesHOverRT(Tref, Tref, Tref, Tref, Tref, NULL, NULL, NULL, NULL, NULL, hf_RT.data());

   for (iSpecies = 0; iSpecies < nSpecies; iSpecies++) Enthalpy_Formation[iSpecies] = hf_RT[iSpecies]*(RuSI*Tref*1000.0)/MolarMass[iSpecies];

   return Enthalpy_Formation;
}
*/ 
#endif
