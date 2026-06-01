
        
        Species source_species(const Species& species, const double& temperature) 
        {
            Species net_production_rates = {double(0)};
            double inv_universal_gas_constant_temperature  = inv_gen(universal_gas_constant() * temperature);
            double log_temperature = log_gen(temperature);
            Reactions gibbs_reactions = gibbs_reaction(log_temperature);
            double pressure_ = pressure(species, temperature);
            double mixture_concentration = pressure_ * inv_universal_gas_constant_temperature;
        double forward_reaction_0 = call_forward_reaction_0(temperature, log_temperature);
        double forward_reaction_1 = call_forward_reaction_1(temperature, log_temperature);
        double forward_reaction_2 = call_forward_reaction_2(temperature, log_temperature);
        double forward_reaction_3 = call_forward_reaction_3(temperature, log_temperature);
        double forward_reaction_4 = call_forward_reaction_4(temperature, log_temperature);
        double forward_reaction_5 = call_forward_reaction_5(temperature, log_temperature);
        double forward_reaction_6 = call_forward_reaction_6(temperature, log_temperature);
        double rate_of_progress_0 = multiply(species[8] * pow_gen2(species[4]), forward_reaction_0);
        double rate_of_progress_1 = multiply(species[8] * pow_gen4(species[6]), forward_reaction_1);
        double equilibrium_constant_2 = multiply(exp_gen(-gibbs_reactions[2]), double(1.0));
        double rate_of_progress_2 = multiply(species[5] * species[6], forward_reaction_2) - multiply(species[7] * species[0], divide(forward_reaction_2, equilibrium_constant_2));
        double rate_of_progress_3 = multiply(pow_gen2(species[0]) * species[4], forward_reaction_3);
        double rate_of_progress_4 = multiply(pow_gen2(species[6]), forward_reaction_4);
        double equilibrium_constant_5 = multiply(exp_gen(-gibbs_reactions[5]), pressure_atmosphere() * inv_universal_gas_constant_temperature);
        double rate_of_progress_5 = multiply(species[4], forward_reaction_5) - multiply(pow_gen2(species[3]), divide(forward_reaction_5, equilibrium_constant_5));
        double equilibrium_constant_6 = multiply(exp_gen(-gibbs_reactions[6]), pressure_atmosphere() * inv_universal_gas_constant_temperature);
        double rate_of_progress_6 = multiply(species[6], forward_reaction_6) - multiply(species[2] * species[1], divide(forward_reaction_6, equilibrium_constant_6));

        net_production_rates[0] = double(3.0) * rate_of_progress_0 + double(7.0) * rate_of_progress_1 + double(1.0) * rate_of_progress_2 + double(-2.0) * rate_of_progress_3 + double(2.0) * rate_of_progress_4;
        net_production_rates[1] = double(1.0) * rate_of_progress_6;
        net_production_rates[2] = double(1.0) * rate_of_progress_6;
        net_production_rates[3] = double(2.0) * rate_of_progress_5;
        net_production_rates[4] = double(-2.0) * rate_of_progress_0 + double(-1.0) * rate_of_progress_3 + double(1.0) * rate_of_progress_4 + double(-1.0) * rate_of_progress_5;
        net_production_rates[5] = double(4.0) * rate_of_progress_0 + double(4.0) * rate_of_progress_1 + double(-1.0) * rate_of_progress_2;
        net_production_rates[6] = double(-4.0) * rate_of_progress_1 + double(-1.0) * rate_of_progress_2 + double(2.0) * rate_of_progress_3 + double(-2.0) * rate_of_progress_4 + double(-1.0) * rate_of_progress_6;
        net_production_rates[7] = double(1.0) * rate_of_progress_2;
        net_production_rates[8] = double(-1.0) * rate_of_progress_0 + double(-1.0) * rate_of_progress_1;
        //source_9 has no production term

        return net_production_rates;
    }
            
            double source_energy(const Species& species, const double& temperature) 
            {
                return double(0);
            }
        
        ChemicalState source(const Species& species, const double& temperature) 
        {
            return set_chemical_state(source_energy(species, temperature), source_species(species, temperature));
        }

        void update_dsource_species_dtemperature_reaction_0(Species& dsource_species_dtemperature_,
                                                           const Species& species,
                                                           const double& temperature,
                                                           const double& log_temperature,
                                                           const double& mixture_concentration,
                                                           const double& pressure_,
                                                           const double& dlog_temperature_dtemperature)
{
                double forward_reaction_0 = call_forward_reaction_0(temperature, log_temperature);
        double dforward_reaction_0_dtemperature = dcall_forward_reaction_0_dtemperature(temperature,log_temperature);

        dforward_reaction_0_dtemperature += dcall_forward_reaction_0_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


        

        // Reaction 0: C4H6 + 2 O2 => 4 CO + 3 H2

        double drate_of_progress_0_dtemperature =  multiply(species[8] * pow_gen2(species[4]), dforward_reaction_0_dtemperature);
        dsource_species_dtemperature_[8] += -drate_of_progress_0_dtemperature;
        dsource_species_dtemperature_[4] += -2.0*drate_of_progress_0_dtemperature;
        dsource_species_dtemperature_[5] += 4.0*drate_of_progress_0_dtemperature;
        dsource_species_dtemperature_[0] += 3.0*drate_of_progress_0_dtemperature;
}

        void update_dsource_species_dtemperature_reaction_1(Species& dsource_species_dtemperature_,
                                                           const Species& species,
                                                           const double& temperature,
                                                           const double& log_temperature,
                                                           const double& mixture_concentration,
                                                           const double& pressure_,
                                                           const double& dlog_temperature_dtemperature)
{
                double forward_reaction_1 = call_forward_reaction_1(temperature, log_temperature);
        double dforward_reaction_1_dtemperature = dcall_forward_reaction_1_dtemperature(temperature,log_temperature);

        dforward_reaction_1_dtemperature += dcall_forward_reaction_1_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


        

        // Reaction 1: C4H6 + 4 H2O => 4 CO + 7 H2

        double drate_of_progress_1_dtemperature =  multiply(species[8] * pow_gen4(species[6]), dforward_reaction_1_dtemperature);
        dsource_species_dtemperature_[8] += -drate_of_progress_1_dtemperature;
        dsource_species_dtemperature_[6] += -4.0*drate_of_progress_1_dtemperature;
        dsource_species_dtemperature_[5] += 4.0*drate_of_progress_1_dtemperature;
        dsource_species_dtemperature_[0] += 7.0*drate_of_progress_1_dtemperature;
}

        void update_dsource_species_dtemperature_reaction_2(Species& dsource_species_dtemperature_,
                                                           const Species& species,
                                                           const double& temperature,
                                                           const double& log_temperature,
                                                           const double& mixture_concentration,
                                                           const double& pressure_,
                                                           const double& equilibrium_constant_2,
                                                           const double& dequilibrium_constant_2_dtemperature,
                                                           const double& dlog_temperature_dtemperature)
{
                double forward_reaction_2 = call_forward_reaction_2(temperature, log_temperature);
        double dforward_reaction_2_dtemperature = dcall_forward_reaction_2_dtemperature(temperature,log_temperature);

        dforward_reaction_2_dtemperature += dcall_forward_reaction_2_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


        

        // Reaction 2: CO + H2O <=> CO2 + H2

        double drate_of_progress_2_dtemperature =
        multiply(species[5] * species[6], dforward_reaction_2_dtemperature)
        -
        multiply(species[7] * species[0],
                 divide_chain(forward_reaction_2,
                              dforward_reaction_2_dtemperature,
                              equilibrium_constant_2,
                              dequilibrium_constant_2_dtemperature));

        dsource_species_dtemperature_[5] += -drate_of_progress_2_dtemperature;
        dsource_species_dtemperature_[6] += -drate_of_progress_2_dtemperature;
        dsource_species_dtemperature_[7] += drate_of_progress_2_dtemperature;
        dsource_species_dtemperature_[0] += drate_of_progress_2_dtemperature;
}

        void update_dsource_species_dtemperature_reaction_3(Species& dsource_species_dtemperature_,
                                                           const Species& species,
                                                           const double& temperature,
                                                           const double& log_temperature,
                                                           const double& mixture_concentration,
                                                           const double& pressure_,
                                                           const double& dlog_temperature_dtemperature)
{
                double forward_reaction_3 = call_forward_reaction_3(temperature, log_temperature);
        double dforward_reaction_3_dtemperature = dcall_forward_reaction_3_dtemperature(temperature,log_temperature);

        dforward_reaction_3_dtemperature += dcall_forward_reaction_3_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


        

        // Reaction 3: 2 H2 + O2 => 2 H2O

        double drate_of_progress_3_dtemperature =  multiply(pow_gen2(species[0]) * species[4], dforward_reaction_3_dtemperature);
        dsource_species_dtemperature_[0] += -2.0*drate_of_progress_3_dtemperature;
        dsource_species_dtemperature_[4] += -drate_of_progress_3_dtemperature;
        dsource_species_dtemperature_[6] += 2.0*drate_of_progress_3_dtemperature;
}

        void update_dsource_species_dtemperature_reaction_4(Species& dsource_species_dtemperature_,
                                                           const Species& species,
                                                           const double& temperature,
                                                           const double& log_temperature,
                                                           const double& mixture_concentration,
                                                           const double& pressure_,
                                                           const double& dlog_temperature_dtemperature)
{
                double forward_reaction_4 = call_forward_reaction_4(temperature, log_temperature);
        double dforward_reaction_4_dtemperature = dcall_forward_reaction_4_dtemperature(temperature,log_temperature);

        dforward_reaction_4_dtemperature += dcall_forward_reaction_4_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


        

        // Reaction 4: 2 H2O => 2 H2 + O2

        double drate_of_progress_4_dtemperature =  multiply(pow_gen2(species[6]), dforward_reaction_4_dtemperature);
        dsource_species_dtemperature_[6] += -2.0*drate_of_progress_4_dtemperature;
        dsource_species_dtemperature_[0] += 2.0*drate_of_progress_4_dtemperature;
        dsource_species_dtemperature_[4] += drate_of_progress_4_dtemperature;
}

        void update_dsource_species_dtemperature_reaction_5(Species& dsource_species_dtemperature_,
                                                           const Species& species,
                                                           const double& temperature,
                                                           const double& log_temperature,
                                                           const double& mixture_concentration,
                                                           const double& pressure_,
                                                           const double& equilibrium_constant_5,
                                                           const double& dequilibrium_constant_5_dtemperature,
                                                           const double& dlog_temperature_dtemperature)
{
                double forward_reaction_5 = call_forward_reaction_5(temperature, log_temperature);
        double dforward_reaction_5_dtemperature = dcall_forward_reaction_5_dtemperature(temperature,log_temperature);

        dforward_reaction_5_dtemperature += dcall_forward_reaction_5_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


        

        // Reaction 5: O2 <=> 2 O

        double drate_of_progress_5_dtemperature =
        multiply(species[4], dforward_reaction_5_dtemperature)
        -
        multiply(pow_gen2(species[3]),
                 divide_chain(forward_reaction_5,
                              dforward_reaction_5_dtemperature,
                              equilibrium_constant_5,
                              dequilibrium_constant_5_dtemperature));

        dsource_species_dtemperature_[4] += -drate_of_progress_5_dtemperature;
        dsource_species_dtemperature_[3] += 2.0*drate_of_progress_5_dtemperature;
}

        void update_dsource_species_dtemperature_reaction_6(Species& dsource_species_dtemperature_,
                                                           const Species& species,
                                                           const double& temperature,
                                                           const double& log_temperature,
                                                           const double& mixture_concentration,
                                                           const double& pressure_,
                                                           const double& equilibrium_constant_6,
                                                           const double& dequilibrium_constant_6_dtemperature,
                                                           const double& dlog_temperature_dtemperature)
{
                double forward_reaction_6 = call_forward_reaction_6(temperature, log_temperature);
        double dforward_reaction_6_dtemperature = dcall_forward_reaction_6_dtemperature(temperature,log_temperature);

        dforward_reaction_6_dtemperature += dcall_forward_reaction_6_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


        

        // Reaction 6: H2O <=> H + OH

        double drate_of_progress_6_dtemperature =
        multiply(species[6], dforward_reaction_6_dtemperature)
        -
        multiply(species[2] * species[1],
                 divide_chain(forward_reaction_6,
                              dforward_reaction_6_dtemperature,
                              equilibrium_constant_6,
                              dequilibrium_constant_6_dtemperature));

        dsource_species_dtemperature_[6] += -drate_of_progress_6_dtemperature;
        dsource_species_dtemperature_[2] += drate_of_progress_6_dtemperature;
        dsource_species_dtemperature_[1] += drate_of_progress_6_dtemperature;
}


void update_jacobian_reaction_0(SpeciesJacobian& jacobian_net_production_rates,
                                               const Species& species,
                                               const double& temperature,
                                               const double& log_temperature,
                                               const double& mixture_concentration,
                                               const double& pressure_,
                                               const Species& dtemperature_dspecies_,
                                               const double& dlog_temperature_dtemperature)
{
                double forward_reaction_0 = call_forward_reaction_0(temperature, log_temperature);
        double dforward_reaction_0_dtemperature = dcall_forward_reaction_0_dtemperature(temperature,log_temperature);

        dforward_reaction_0_dtemperature += dcall_forward_reaction_0_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


double drate_of_progress_dspecies  = double(0);
        double rate_of_progress_0 = multiply(species[8] * pow_gen2(species[4]), forward_reaction_0);
        


        //drate_of_progress_dspecies[0] = {double(0)};
        drate_of_progress_dspecies = multiply(dpow_gen2_da(species[4]) * species[8], forward_reaction_0);
        jacobian_net_production_rates[9][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][5] += -2.0*drate_of_progress_dspecies;
        jacobian_net_production_rates[6][5] += 4.0*drate_of_progress_dspecies;
        jacobian_net_production_rates[1][5] += 3.0*drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(pow_gen2(species[4]), forward_reaction_0);
        jacobian_net_production_rates[9][9] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[5][9] += -2.0*drate_of_progress_dspecies;
        jacobian_net_production_rates[6][9] += 4.0*drate_of_progress_dspecies;
        jacobian_net_production_rates[1][9] += 3.0*drate_of_progress_dspecies;
}


void update_jacobian_reaction_1(SpeciesJacobian& jacobian_net_production_rates,
                                               const Species& species,
                                               const double& temperature,
                                               const double& log_temperature,
                                               const double& mixture_concentration,
                                               const double& pressure_,
                                               const Species& dtemperature_dspecies_,
                                               const double& dlog_temperature_dtemperature)
{
                double forward_reaction_1 = call_forward_reaction_1(temperature, log_temperature);
        double dforward_reaction_1_dtemperature = dcall_forward_reaction_1_dtemperature(temperature,log_temperature);

        dforward_reaction_1_dtemperature += dcall_forward_reaction_1_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


double drate_of_progress_dspecies  = double(0);
        double rate_of_progress_1 = multiply(species[8] * pow_gen4(species[6]), forward_reaction_1);
        


        //drate_of_progress_dspecies[1] = {double(0)};
        drate_of_progress_dspecies = multiply(dpow_gen4_da(species[6]) * species[8], forward_reaction_1);
        jacobian_net_production_rates[9][7] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[7][7] += -4.0*drate_of_progress_dspecies;
        jacobian_net_production_rates[6][7] += 4.0*drate_of_progress_dspecies;
        jacobian_net_production_rates[1][7] += 7.0*drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(pow_gen4(species[6]), forward_reaction_1);
        jacobian_net_production_rates[9][9] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[7][9] += -4.0*drate_of_progress_dspecies;
        jacobian_net_production_rates[6][9] += 4.0*drate_of_progress_dspecies;
        jacobian_net_production_rates[1][9] += 7.0*drate_of_progress_dspecies;
}


void update_jacobian_reaction_2(SpeciesJacobian& jacobian_net_production_rates,
                                               const Species& species,
                                               const double& temperature,
                                               const double& log_temperature,
                                               const double& mixture_concentration,
                                               const double& pressure_,
                                               const Species& dtemperature_dspecies_,
                                               const double& equilibrium_constant_2,
                                               const double& dequilibrium_constant_2_dtemperature,
                                               const double& dlog_temperature_dtemperature)
{
                double forward_reaction_2 = call_forward_reaction_2(temperature, log_temperature);
        double dforward_reaction_2_dtemperature = dcall_forward_reaction_2_dtemperature(temperature,log_temperature);

        dforward_reaction_2_dtemperature += dcall_forward_reaction_2_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


double drate_of_progress_dspecies  = double(0);
        double rate_of_progress_2 = multiply(species[5] * species[6], forward_reaction_2) - multiply(species[7] * species[0], divide(forward_reaction_2, equilibrium_constant_2));
        

        //drate_of_progress_dspecies[2] = {double(0)};
        drate_of_progress_dspecies = multiply(species[6], forward_reaction_2); // [2][5] +
        jacobian_net_production_rates[6][6] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[7][6] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[8][6] += drate_of_progress_dspecies;
        jacobian_net_production_rates[1][6] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(species[5], forward_reaction_2); // [2][6] +
        jacobian_net_production_rates[6][7] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[7][7] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[8][7] += drate_of_progress_dspecies;
        jacobian_net_production_rates[1][7] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[7], divide(forward_reaction_2, equilibrium_constant_2));
        jacobian_net_production_rates[6][1] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[7][1] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[8][1] += drate_of_progress_dspecies;
        jacobian_net_production_rates[1][1] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[0], divide(forward_reaction_2, equilibrium_constant_2));
        jacobian_net_production_rates[6][8] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[7][8] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[8][8] += drate_of_progress_dspecies;
        jacobian_net_production_rates[1][8] += drate_of_progress_dspecies;
}


void update_jacobian_reaction_3(SpeciesJacobian& jacobian_net_production_rates,
                                               const Species& species,
                                               const double& temperature,
                                               const double& log_temperature,
                                               const double& mixture_concentration,
                                               const double& pressure_,
                                               const Species& dtemperature_dspecies_,
                                               const double& dlog_temperature_dtemperature)
{
                double forward_reaction_3 = call_forward_reaction_3(temperature, log_temperature);
        double dforward_reaction_3_dtemperature = dcall_forward_reaction_3_dtemperature(temperature,log_temperature);

        dforward_reaction_3_dtemperature += dcall_forward_reaction_3_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


double drate_of_progress_dspecies  = double(0);
        double rate_of_progress_3 = multiply(pow_gen2(species[0]) * species[4], forward_reaction_3);
        


        //drate_of_progress_dspecies[3] = {double(0)};
        drate_of_progress_dspecies = multiply(dpow_gen2_da(species[0]) * species[4], forward_reaction_3);
        jacobian_net_production_rates[1][1] += -2.0*drate_of_progress_dspecies;
        jacobian_net_production_rates[5][1] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[7][1] += 2.0*drate_of_progress_dspecies;
        drate_of_progress_dspecies = multiply(pow_gen2(species[0]), forward_reaction_3);
        jacobian_net_production_rates[1][5] += -2.0*drate_of_progress_dspecies;
        jacobian_net_production_rates[5][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[7][5] += 2.0*drate_of_progress_dspecies;
}


void update_jacobian_reaction_4(SpeciesJacobian& jacobian_net_production_rates,
                                               const Species& species,
                                               const double& temperature,
                                               const double& log_temperature,
                                               const double& mixture_concentration,
                                               const double& pressure_,
                                               const Species& dtemperature_dspecies_,
                                               const double& dlog_temperature_dtemperature)
{
                double forward_reaction_4 = call_forward_reaction_4(temperature, log_temperature);
        double dforward_reaction_4_dtemperature = dcall_forward_reaction_4_dtemperature(temperature,log_temperature);

        dforward_reaction_4_dtemperature += dcall_forward_reaction_4_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


double drate_of_progress_dspecies  = double(0);
        double rate_of_progress_4 = multiply(pow_gen2(species[6]), forward_reaction_4);
        


        //drate_of_progress_dspecies[4] = {double(0)};
        drate_of_progress_dspecies = multiply(dpow_gen2_da(species[6]), forward_reaction_4);
        jacobian_net_production_rates[7][7] += -2.0*drate_of_progress_dspecies;
        jacobian_net_production_rates[1][7] += 2.0*drate_of_progress_dspecies;
        jacobian_net_production_rates[5][7] += drate_of_progress_dspecies;
}


void update_jacobian_reaction_5(SpeciesJacobian& jacobian_net_production_rates,
                                               const Species& species,
                                               const double& temperature,
                                               const double& log_temperature,
                                               const double& mixture_concentration,
                                               const double& pressure_,
                                               const Species& dtemperature_dspecies_,
                                               const double& equilibrium_constant_5,
                                               const double& dequilibrium_constant_5_dtemperature,
                                               const double& dlog_temperature_dtemperature)
{
                double forward_reaction_5 = call_forward_reaction_5(temperature, log_temperature);
        double dforward_reaction_5_dtemperature = dcall_forward_reaction_5_dtemperature(temperature,log_temperature);

        dforward_reaction_5_dtemperature += dcall_forward_reaction_5_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


double drate_of_progress_dspecies  = double(0);
        double rate_of_progress_5 = multiply(species[4], forward_reaction_5) - multiply(pow_gen2(species[3]), divide(forward_reaction_5, equilibrium_constant_5));
        

        //drate_of_progress_dspecies[5] = {double(0)};
        drate_of_progress_dspecies = forward_reaction_5; // [5][4]
        jacobian_net_production_rates[5][5] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][5] += 2.0*drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(dpow_gen2_da(species[3]), divide(forward_reaction_5, equilibrium_constant_5));
        jacobian_net_production_rates[5][4] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[4][4] += 2.0*drate_of_progress_dspecies;
}


void update_jacobian_reaction_6(SpeciesJacobian& jacobian_net_production_rates,
                                               const Species& species,
                                               const double& temperature,
                                               const double& log_temperature,
                                               const double& mixture_concentration,
                                               const double& pressure_,
                                               const Species& dtemperature_dspecies_,
                                               const double& equilibrium_constant_6,
                                               const double& dequilibrium_constant_6_dtemperature,
                                               const double& dlog_temperature_dtemperature)
{
                double forward_reaction_6 = call_forward_reaction_6(temperature, log_temperature);
        double dforward_reaction_6_dtemperature = dcall_forward_reaction_6_dtemperature(temperature,log_temperature);

        dforward_reaction_6_dtemperature += dcall_forward_reaction_6_dlog_temperature(temperature,log_temperature) * dlog_temperature_dtemperature;


double drate_of_progress_dspecies  = double(0);
        double rate_of_progress_6 = multiply(species[6], forward_reaction_6) - multiply(species[2] * species[1], divide(forward_reaction_6, equilibrium_constant_6));
        

        //drate_of_progress_dspecies[6] = {double(0)};
        drate_of_progress_dspecies = forward_reaction_6; // [6][6]
        jacobian_net_production_rates[7][7] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[3][7] += drate_of_progress_dspecies;
        jacobian_net_production_rates[2][7] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[2], divide(forward_reaction_6, equilibrium_constant_6));
        jacobian_net_production_rates[7][2] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[3][2] += drate_of_progress_dspecies;
        jacobian_net_production_rates[2][2] += drate_of_progress_dspecies;
        drate_of_progress_dspecies = -multiply(species[1], divide(forward_reaction_6, equilibrium_constant_6));
        jacobian_net_production_rates[7][3] += -drate_of_progress_dspecies;
        jacobian_net_production_rates[3][3] += drate_of_progress_dspecies;
        jacobian_net_production_rates[2][3] += drate_of_progress_dspecies;
}

    
    SpeciesJacobian source_jacobian(const Species& species, const double& temperature)  
    {
        Species net_production_rates = {double(0)};
        SpeciesJacobian jacobian_net_production_rates = {double(0)};
        double drate_of_progress_dspecies  = double(0);
        double equilibrium_constant  = double(0);
        double dequilibrium_constant_dtemperature = double(0);
        Species drate_of_progress_dspecies_all_species  = {double(0)};

        double inv_universal_gas_constant_temperature  = inv_gen(universal_gas_constant() * temperature);
        double dinv_universal_gas_constant_temperature_dtemperature  = inv_chain(universal_gas_constant() * temperature, universal_gas_constant());
        
        double log_temperature = log_gen(temperature);
        double dlog_temperature_dtemperature = dlog_da(temperature);
        
        Reactions gibbs_reactions = gibbs_reaction(log_temperature);
        Reactions dgibbs_reactions_dlog_temperature = dgibbs_reaction_dlog_temperature(log_temperature);

        
        double pressure_ = pressure(species, temperature);
        double dpressure_dtemperature_ = dpressure_dtemperature(species, temperature); //unchecked
        Species dpressure_dspecies_ = dpressure_dspecies(species, temperature); //unchecked
        
        double mixture_concentration = 
        multiply(pressure_,
                 inv_universal_gas_constant_temperature);
        double dmixture_concentration_dtemperature = 
        multiply_chain(pressure_, 
                       dpressure_dtemperature_,
                       inv_universal_gas_constant_temperature,
                       dinv_universal_gas_constant_temperature_dtemperature);
        
        Species dmixture_concentration_dspecies = Species{1}; // optimized (1/(RT))*(RT,...,RT)

        Species dtemperature_dspecies_ = dtemperature_dspecies(species, temperature);
        
            

        double equilibrium_constant_2 = multiply(exp_gen(-gibbs_reactions[2]), double(1.0));
        double dequilibrium_constant_2_dtemperature = 
        multiply_chain(exp_gen(-gibbs_reactions[2]), 
                       exp_chain(-gibbs_reactions[2], 
                                 -dgibbs_reactions_dlog_temperature[2]) * dlog_temperature_dtemperature, 
                       double(1.0), 
                       double(0.0));


        double equilibrium_constant_5 = multiply(exp_gen(-gibbs_reactions[5]), pressure_atmosphere() * inv_universal_gas_constant_temperature);
        double dequilibrium_constant_5_dtemperature = 
        multiply_chain(exp_gen(-gibbs_reactions[5]), 
                       exp_chain(-gibbs_reactions[5], 
                                 -dgibbs_reactions_dlog_temperature[5]) * dlog_temperature_dtemperature, 
                       pressure_atmosphere() * inv_universal_gas_constant_temperature, 
                       pressure_atmosphere() * dinv_universal_gas_constant_temperature_dtemperature);


        double equilibrium_constant_6 = multiply(exp_gen(-gibbs_reactions[6]), pressure_atmosphere() * inv_universal_gas_constant_temperature);
        double dequilibrium_constant_6_dtemperature = 
        multiply_chain(exp_gen(-gibbs_reactions[6]), 
                       exp_chain(-gibbs_reactions[6], 
                                 -dgibbs_reactions_dlog_temperature[6]) * dlog_temperature_dtemperature, 
                       pressure_atmosphere() * inv_universal_gas_constant_temperature, 
                       pressure_atmosphere() * dinv_universal_gas_constant_temperature_dtemperature);

        update_jacobian_reaction_0(jacobian_net_production_rates, species, temperature, log_temperature, mixture_concentration, pressure_, dtemperature_dspecies_, dlog_temperature_dtemperature); 
        update_jacobian_reaction_1(jacobian_net_production_rates, species, temperature, log_temperature, mixture_concentration, pressure_, dtemperature_dspecies_, dlog_temperature_dtemperature); 
        update_jacobian_reaction_2(jacobian_net_production_rates, species, temperature, log_temperature, mixture_concentration, pressure_, dtemperature_dspecies_, equilibrium_constant_2, dequilibrium_constant_2_dtemperature,dlog_temperature_dtemperature); 
        update_jacobian_reaction_3(jacobian_net_production_rates, species, temperature, log_temperature, mixture_concentration, pressure_, dtemperature_dspecies_, dlog_temperature_dtemperature); 
        update_jacobian_reaction_4(jacobian_net_production_rates, species, temperature, log_temperature, mixture_concentration, pressure_, dtemperature_dspecies_, dlog_temperature_dtemperature); 
        update_jacobian_reaction_5(jacobian_net_production_rates, species, temperature, log_temperature, mixture_concentration, pressure_, dtemperature_dspecies_, equilibrium_constant_5, dequilibrium_constant_5_dtemperature,dlog_temperature_dtemperature); 
        update_jacobian_reaction_6(jacobian_net_production_rates, species, temperature, log_temperature, mixture_concentration, pressure_, dtemperature_dspecies_, equilibrium_constant_6, dequilibrium_constant_6_dtemperature,dlog_temperature_dtemperature); 

        Species dsource_species_dtemperature_ = {double(0)};
        update_dsource_species_dtemperature_reaction_0(dsource_species_dtemperature_, species, temperature, log_temperature, mixture_concentration, pressure_, dlog_temperature_dtemperature); 
        update_dsource_species_dtemperature_reaction_1(dsource_species_dtemperature_, species, temperature, log_temperature, mixture_concentration, pressure_, dlog_temperature_dtemperature); 
        update_dsource_species_dtemperature_reaction_2(dsource_species_dtemperature_, species, temperature, log_temperature, mixture_concentration, pressure_, equilibrium_constant_2, dequilibrium_constant_2_dtemperature,dlog_temperature_dtemperature); 
        update_dsource_species_dtemperature_reaction_3(dsource_species_dtemperature_, species, temperature, log_temperature, mixture_concentration, pressure_, dlog_temperature_dtemperature); 
        update_dsource_species_dtemperature_reaction_4(dsource_species_dtemperature_, species, temperature, log_temperature, mixture_concentration, pressure_, dlog_temperature_dtemperature); 
        update_dsource_species_dtemperature_reaction_5(dsource_species_dtemperature_, species, temperature, log_temperature, mixture_concentration, pressure_, equilibrium_constant_5, dequilibrium_constant_5_dtemperature,dlog_temperature_dtemperature); 
        update_dsource_species_dtemperature_reaction_6(dsource_species_dtemperature_, species, temperature, log_temperature, mixture_concentration, pressure_, equilibrium_constant_6, dequilibrium_constant_6_dtemperature,dlog_temperature_dtemperature); 

        for (int i = 0; i < n_species; i++)
        {
            for (int j = 0; j < n_species; j++)
            {
                // temperature dependence
                jacobian_net_production_rates[i+1][j+1] += scale_gen(dsource_species_dtemperature_[i], dtemperature_dspecies_[j]);
            }
        }

        return jacobian_net_production_rates;
    }