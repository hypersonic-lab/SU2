#include <cmath>
#include <algorithm>
#include <array>
#include <iostream>  // For printing the result to the console
#include "types_inl.h"
#include "multiply_divide.h"
#include "pow_gen.h"
#include "exp_gen.h"
#include "array_handling.h"
#include "constants.h"
#include "thermally_perfect.h"
#include "arrhenius.h"
#include "third_body.h"
#include "falloff_troe.h"
#include "falloff_lindemann.h"
#include "falloff_sri.h"
#include "pressure_dependent_arrhenius.h"
#include "reactions.h"
#include "source.h"
#include "chemical_state_functions.h"
#include "rk4.h"


// Overload << operator for std::array
template <typename T, std::size_t N>
std::ostream& operator<<(std::ostream& os, const std::array<T, N>& arr) {
    for (const auto& value : arr) 
    {
        os << value << " ";
    }
    return os;
}

int
main()
{
    
    //Species species  = {double(0.0),double(0.0),double(0.0),double(0.0),double(0.015211045638582214),double(0.0),double(0.0),double(0.0),double(0.002765644661150383),double(0.057193531601971166)};
    //double temperature_ =  800.0;
    //double int_energy = internal_energy_volume_specific(species, temperature_);
    //ChemicalState y = set_chemical_state(int_energy, species);
    //double dt = 1e-8;
    //double t = 0;
    //
    ////std::cout << y << std::endl;
    ////std::cout <<t<<" "<<temperature(y) <<" "<< get_species(y) << std::endl;
    //for(int i = 0; i < 40000; i++)
    //{
    //    y = rk4(y, dt);
    //    t = t + dt;
    //    std::cout <<t<<" "<<temperature(y) <<" "<< get_species(y) << std::endl;
    //}


    // testing stuff here all over again -- this would be what presumably happens for each cell in a CFD code
    unsigned short nSpecies = n_species; // from types_inl.h
    unsigned iSpecies;
    const double Pr = 0.7;
    Species conc_s = {double(0.0),double(0.0),double(0.0),double(0.0),double(0.015211045638582214),double(0.0),double(0.0),double(0.0),double(0.002765644661150383),double(0.057193531601971166)};
    double T = 800.0;
    double P = 101325;
    double int_energy = internal_energy_volume_specific(conc_s, T);
    ChemicalState chemstate = set_chemical_state(int_energy, conc_s); // chemical state in chemgen
    std::cout << chemstate << std::endl;
    std::cout <<temperature(chemstate) <<" "<< get_species(chemstate) << std::endl;


    double Ru = universal_gas_constant();
    std::cout << Ru << std::endl;

    /*--- Testing how to obtain quantities needed in SU2 from ChemGen ---*/

    /*--- Molar Mass ---*/
    Species MolarMass = molecular_weights();
    std::cout << MolarMass << std::endl;

    // Necessary Calcs for Later
    /*---------------------------------------------*/
    std::vector<double> rhos, MassFrac;
    rhos.resize(nSpecies, 0.0);
    MassFrac.resize(nSpecies, 0.0);

    double Density = 0.0;
    for (iSpecies = 0; iSpecies < nSpecies; iSpecies++){
        rhos[iSpecies] = conc_s[iSpecies] * MolarMass[iSpecies];
        Density += conc_s[iSpecies] * MolarMass[iSpecies]; // in SU2 Density is a protected class in CFluidModel and accessible in its children classes
    }
    for (iSpecies = 0; iSpecies < nSpecies; iSpecies++)
        MassFrac[iSpecies] = rhos[iSpecies]/Density;
    /*---------------------------------------------*/


    /*--- Cv Tra Rot ---*/
    Species Cvtrs;
    Cvtrs = species_specific_heat_constant_volume_mass_specific(T);
    std::cout << Cvtrs << std::endl;

    /*--- Mixture Energies ---*/
    std::vector<double> energies;
    energies.resize(2,0);
    double rhoEmix = internal_energy_volume_specific(conc_s, T);

    energies[0] = rhoEmix/Density; // need to find the total density somehow
    energies[1] = 0;

    std::cout << energies[0] <<" "<< energies[1] << std::endl;

    /*--- Species Eve ---*/

    // not needed, 1T chemistry for now

    /*--- Net Production Rates ---*/
    std::vector<double> ws;
    ws.resize(nSpecies, 0.0);
    ChemicalState ws1 = source(conc_s, T);
    std::cout << ws1 << std::endl;
    for (iSpecies = 0; iSpecies < nSpecies; iSpecies++){
        ws[iSpecies] = ws1[iSpecies+1];
        std::cout << ws1[iSpecies+1] << " ";
    }
    //std::cout << ws << std::endl;

    /*--- Chemistry Jacobian ---*/
    // will need to work out the math here to turn the source jacobian into one for the multidimensional flow
    // SpeciesJacobian source_jacobian = source_jacobian(chemstate, T)
    // Figure it out

    /*--- Compute Eve Source Term ---*/
    // not needed for 1T chemistry

    /*--- Compute Eve Source Term Jacobian ---*/
    // not needed for 1T chemistry


    /*--- Compute Species Enthalpies ---*/
    Species hs = species_enthalpy_mass_specific(T);
    std::cout << hs << std::endl;

    /*--- Get Diffusion Coefficient ---*/
    // With Unity Lewis number Le = alpha/D = k / (rho D Cp) = 1
    // We get D = alpha = k/(rho Cp)
    // Not too sure what to do here

    /*--- Get Viscosity ---*/
    // Using Sutherland's model for air
    const double T_ref_suth = 273.15;
    const double Sm_ref = 110.4;
    const double mu_ref = 1.716E-5;
    double T_nd = T / T_ref_suth;
    double Mu;
    Mu = mu_ref * T_nd * sqrt(T_nd) * ((T_ref_suth + Sm_ref) / (T + Sm_ref));
    std::cout << Mu << std::endl;

    /*--- Get Thermal Conductivities ---*/
    double Cp, k;
    Species Cptrs;
    Cptrs = species_specific_heat_constant_pressure_mass_specific(T);
    for (iSpecies = 0; iSpecies < nSpecies; iSpecies++)
        Cp += Cptrs[iSpecies]*MassFrac[iSpecies];
    std::cout << Cp << std::endl;

    std::vector<double> ThermalConductivities;
    ThermalConductivities.resize(2,0);

    k = Cp*Mu/Pr;
    ThermalConductivities[0] = k;
    ThermalConductivities[1] = 0;

    std::cout << ThermalConductivities[0]<< " " << ThermalConductivities[1] << std::endl;

    /*--- Compute Temperatures ---*/
    double Temp;
    Temp = temperature(rhoEmix, conc_s, 10);
    std::cout << Temp << std::endl;


    return 0;
}
            