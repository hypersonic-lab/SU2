

Species 
species_specific_heat_constant_pressure_mass_specific(const TemperatureMonomial& temperature_monomial_sequence)  
{
        return
        Species{
        contract(temperature_monomial_sequence, TemperatureMonomial{double(20621.187048991174), double(2.162841973857103e-14), double(-4.5905495916990825e-17), double(3.098423755694961e-20), double(-9.576156330068824e-24), double(1.5236281061213e-27), double(-1.2301626090581573e-31), double(4.0179888171316725e-36)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(14347.174807166437), double(-1.0913992460266553), double(0.0028959961639177774), double(-1.3331659868597241e-06), double(3.104312691669423e-10), double(-3.991981056345563e-14), double(2.698823868171687e-18), double(-7.517813940388676e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(1453.3409760254708), double(-0.3764015218878312), double(0.00036637706517090023), double(-1.8236479633037383e-07), double(5.0356764443301374e-11), double(-7.68770531583965e-15), double(6.085529577830671e-19), double(-1.956773167037553e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(794.9943626577176), double(0.49830932383782117), double(-0.0003043787553976344), double(1.1763451247597357e-07), double(-2.6817280987238343e-11), double(3.5484287623078238e-15), double(-2.5230195655998945e-19), double(7.391941640842388e-24)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(1873.037748742477), double(-0.6469511081797361), double(0.0009701393828009751), double(-5.064305446503828e-07), double(1.368672570694268e-10), double(-2.028450712472825e-14), double(1.5642569220466308e-18), double(-4.925284399870539e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(1791.0096390266037), double(-0.0011416578620821567), double(0.0009403928864218681), double(-5.741870707525334e-07), double(1.6067943093154012e-10), double(-2.3996473245207444e-14), double(1.8567010154977454e-18), double(-5.862323218475807e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(792.6557571451546), double(1.0853746095603438), double(-0.0006449134517275425), double(2.6304365190082183e-07), double(-6.639675592413857e-11), double(9.623326364514214e-15), double(-7.333646382161057e-19), double(2.286307413430693e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(825.6262960656475), double(1.7088049577478555), double(-0.0009893879871766635), double(3.6601133674327004e-07), double(-8.589421542335287e-11), double(1.2201767948677202e-14), double(-9.403190170360297e-19), double(2.9590264851566164e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(1004.5620761483477), double(0.038900369300911966), double(0.0002495435053136499), double(-1.7956537214538217e-07), double(5.494811529964254e-11), double(-8.641085321239804e-15), double(6.890583381060022e-19), double(-2.2280133527009792e-23)})};

}


Species 
species_specific_heat_constant_pressure_mass_specific(const double& temperature)  
{
    return species_specific_heat_constant_pressure_mass_specific(temperature_monomial(temperature));
}


Species 
dspecies_specific_heat_constant_pressure_mass_specific_dtemperature(const double& temperature)  
{
    return species_specific_heat_constant_pressure_mass_specific(dtemperature_monomial_dtemperature(temperature));
}
    

Species 
species_specific_heat_constant_volume_mass_specific(const TemperatureMonomial& temperature_monomial_sequence)  
{
        return
        Species{
        contract(temperature_monomial_sequence, TemperatureMonomial{double(12372.712229394705), double(2.162841973857103e-14), double(-4.5905495916990825e-17), double(3.098423755694961e-20), double(-9.576156330068824e-24), double(1.5236281061213e-27), double(-1.2301626090581573e-31), double(4.0179888171316725e-36)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(10222.937397368201), double(-1.0913992460266553), double(0.0028959961639177774), double(-1.3331659868597241e-06), double(3.104312691669423e-10), double(-3.991981056345563e-14), double(2.698823868171687e-18), double(-7.517813940388676e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(933.6545819912661), double(-0.3764015218878312), double(0.00036637706517090023), double(-1.8236479633037383e-07), double(5.0356764443301374e-11), double(-7.68770531583965e-15), double(6.085529577830671e-19), double(-1.956773167037553e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(535.1511656406153), double(0.49830932383782117), double(-0.0003043787553976344), double(1.1763451247597357e-07), double(-2.6817280987238343e-11), double(3.5484287623078238e-15), double(-2.5230195655998945e-19), double(7.391941640842388e-24)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(1384.1530178579449), double(-0.6469511081797361), double(0.0009701393828009751), double(-5.064305446503828e-07), double(1.368672570694268e-10), double(-2.028450712472825e-14), double(1.5642569220466308e-18), double(-4.925284399870539e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(1329.4796574471843), double(-0.0011416578620821567), double(0.0009403928864218681), double(-5.741870707525334e-07), double(1.6067943093154012e-10), double(-2.3996473245207444e-14), double(1.8567010154977454e-18), double(-5.862323218475807e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(540.7481458577147), double(1.0853746095603438), double(-0.0006449134517275425), double(2.6304365190082183e-07), double(-6.639675592413857e-11), double(9.623326364514214e-15), double(-7.333646382161057e-19), double(2.286307413430693e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(581.1839306233813), double(1.7088049577478555), double(-0.0009893879871766635), double(3.6601133674327004e-07), double(-8.589421542335287e-11), double(1.2201767948677202e-14), double(-9.403190170360297e-19), double(2.9590264851566164e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(707.7653809904539), double(0.038900369300911966), double(0.0002495435053136499), double(-1.7956537214538217e-07), double(5.494811529964254e-11), double(-8.641085321239804e-15), double(6.890583381060022e-19), double(-2.2280133527009792e-23)})};

}


Species 
species_specific_heat_constant_volume_mass_specific(const double& temperature)  
{
    return species_specific_heat_constant_volume_mass_specific(temperature_monomial(temperature));
}


Species 
dspecies_specific_heat_constant_volume_mass_specific_dtemperature(const double& temperature)  
{
    return species_specific_heat_constant_volume_mass_specific(dtemperature_monomial_dtemperature(temperature));
}
    

Species 
species_enthalpy_mass_specific(const TemperatureEnergyMonomial& temperature_energy_monomial_sequence)  
{
        return
        Species{
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(210118843.07296178), double(20621.187048991174), double(1.0814209869285516e-14), double(-1.5301831972330275e-17), double(7.746059389237402e-21), double(-1.9152312660137647e-24), double(2.5393801768688334e-28), double(-1.7573751557973675e-32), double(5.022486021414591e-37)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-4252202.375795737), double(14347.174807166437), double(-0.5456996230133276), double(0.0009653320546392591), double(-3.3329149671493103e-07), double(6.208625383338846e-11), double(-6.653301760575939e-15), double(3.855462668816696e-19), double(-9.397267425485845e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(15154842.869501987), double(1453.3409760254708), double(-0.1882007609439156), double(0.00012212568839030009), double(-4.5591199082593456e-08), double(1.0071352888660274e-11), double(-1.2812842193066082e-15), double(8.693613682615245e-20), double(-2.445966458796941e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-256706.70514570744), double(794.9943626577176), double(0.24915466191891059), double(-0.00010145958513254481), double(2.940862811899339e-08), double(-5.3634561974476685e-12), double(5.914047937179706e-16), double(-3.6043136651427064e-20), double(9.239927051052985e-25)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(1655887.811952215), double(1873.037748742477), double(-0.32347555408986806), double(0.0003233797942669917), double(-1.266076361625957e-07), double(2.7373451413885358e-11), double(-3.380751187454708e-15), double(2.234652745780901e-19), double(-6.156605499838174e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-13964700.873892622), double(1791.0096390266037), double(-0.0005708289310410783), double(0.000313464295473956), double(-1.4354676768813336e-07), double(3.2135886186308024e-11), double(-3.999412207534574e-15), double(2.6524300221396364e-19), double(-7.32790402309476e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(93173.82821724843), double(792.6557571451546), double(0.5426873047801719), double(-0.0002149711505758475), double(6.576091297520546e-08), double(-1.3279351184827713e-11), double(1.6038877274190356e-15), double(-1.047663768880151e-19), double(2.857884266788366e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-4308855.968859037), double(825.6262960656475), double(0.8544024788739277), double(-0.0003297959957255545), double(9.150283418581751e-08), double(-1.7178843084670573e-11), double(2.0336279914462004e-15), double(-1.3433128814800424e-19), double(3.6987831064457704e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-303114.7877333955), double(1004.5620761483477), double(0.019450184650455983), double(8.31811684378833e-05), double(-4.4891343036345543e-08), double(1.0989623059928508e-11), double(-1.4401808868733006e-15), double(9.84369054437146e-20), double(-2.785016690876224e-24)})};

}


Species 
species_enthalpy_mass_specific(const double& temperature)  
{
    return species_enthalpy_mass_specific(temperature_energy_monomial(temperature));
}


Species 
dspecies_enthalpy_mass_specific_dtemperature(const double& temperature)  
{
    return species_enthalpy_mass_specific(dtemperature_energy_monomial_dtemperature(temperature));
}
    

Species 
species_internal_energy_mass_specific(const TemperatureEnergyMonomial& temperature_energy_monomial_sequence)  
{
        return
        Species{
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(210118843.07296178), double(12372.712229394705), double(1.0814209869285516e-14), double(-1.5301831972330275e-17), double(7.746059389237402e-21), double(-1.9152312660137647e-24), double(2.5393801768688334e-28), double(-1.7573751557973675e-32), double(5.022486021414591e-37)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-4252202.375795737), double(10222.937397368201), double(-0.5456996230133276), double(0.0009653320546392591), double(-3.3329149671493103e-07), double(6.208625383338846e-11), double(-6.653301760575939e-15), double(3.855462668816696e-19), double(-9.397267425485845e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(15154842.869501987), double(933.6545819912661), double(-0.1882007609439156), double(0.00012212568839030009), double(-4.5591199082593456e-08), double(1.0071352888660274e-11), double(-1.2812842193066082e-15), double(8.693613682615245e-20), double(-2.445966458796941e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-256706.70514570744), double(535.1511656406153), double(0.24915466191891059), double(-0.00010145958513254481), double(2.940862811899339e-08), double(-5.3634561974476685e-12), double(5.914047937179706e-16), double(-3.6043136651427064e-20), double(9.239927051052985e-25)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(1655887.811952215), double(1384.1530178579449), double(-0.32347555408986806), double(0.0003233797942669917), double(-1.266076361625957e-07), double(2.7373451413885358e-11), double(-3.380751187454708e-15), double(2.234652745780901e-19), double(-6.156605499838174e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-13964700.873892622), double(1329.4796574471843), double(-0.0005708289310410783), double(0.000313464295473956), double(-1.4354676768813336e-07), double(3.2135886186308024e-11), double(-3.999412207534574e-15), double(2.6524300221396364e-19), double(-7.32790402309476e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(93173.82821724843), double(540.7481458577147), double(0.5426873047801719), double(-0.0002149711505758475), double(6.576091297520546e-08), double(-1.3279351184827713e-11), double(1.6038877274190356e-15), double(-1.047663768880151e-19), double(2.857884266788366e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-4308855.968859037), double(581.1839306233813), double(0.8544024788739277), double(-0.0003297959957255545), double(9.150283418581751e-08), double(-1.7178843084670573e-11), double(2.0336279914462004e-15), double(-1.3433128814800424e-19), double(3.6987831064457704e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-303114.7877333955), double(707.7653809904539), double(0.019450184650455983), double(8.31811684378833e-05), double(-4.4891343036345543e-08), double(1.0989623059928508e-11), double(-1.4401808868733006e-15), double(9.84369054437146e-20), double(-2.785016690876224e-24)})};

}


Species 
species_internal_energy_mass_specific(const double& temperature)  
{
    return species_internal_energy_mass_specific(temperature_energy_monomial(temperature));
}


Species 
dspecies_internal_energy_mass_specific_dtemperature(const double& temperature)  
{
    return species_internal_energy_mass_specific(dtemperature_energy_monomial_dtemperature(temperature));
}
    

Species 
species_entropy_mass_specific(const TemperatureEnergyMonomial& temperature_entropy_monomial_sequence)  
{
        return
        Species{
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(-3684.452240570594), double(2.162841973857103e-14), double(-2.2952747958495412e-17), double(1.032807918564987e-20), double(-2.394039082517206e-24), double(3.0472562122426e-28), double(-2.050271015096929e-32), double(5.739984024473818e-37), double(20621.187048991174)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(-16715.016125283946), double(-1.0913992460266553), double(0.0014479980819588887), double(-4.443886622865747e-07), double(7.760781729173558e-11), double(-7.983962112691126e-15), double(4.498039780286145e-19), double(-1.073973420055525e-23), double(14347.174807166437)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(1883.7545081976614), double(-0.3764015218878312), double(0.00018318853258545012), double(-6.078826544345794e-08), double(1.2589191110825344e-11), double(-1.53754106316793e-15), double(1.0142549296384452e-19), double(-2.7953902386250757e-24), double(1453.3409760254708)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(1745.698195624892), double(0.49830932383782117), double(-0.0001521893776988172), double(3.9211504158657855e-08), double(-6.704320246809586e-12), double(7.096857524615648e-16), double(-4.2050326093331574e-20), double(1.055991662977484e-24), double(794.9943626577176)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(285.7647400408314), double(-0.6469511081797361), double(0.00048506969140048756), double(-1.688101815501276e-07), double(3.42168142673567e-11), double(-4.05690142494565e-15), double(2.607094870077718e-19), double(-7.036120571243627e-24), double(1873.037748742477)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(240.56849277221409), double(-0.0011416578620821567), double(0.00047019644321093403), double(-1.9139569025084448e-07), double(4.016985773288503e-11), double(-4.799294649041489e-15), double(3.0945016924962426e-19), double(-8.374747454965439e-24), double(1791.0096390266037)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(2127.9294050388853), double(1.0853746095603438), double(-0.00032245672586377126), double(8.768121730027394e-08), double(-1.6599188981034642e-11), double(1.9246652729028427e-15), double(-1.2222743970268427e-19), double(3.2661534477581327e-24), double(792.6557571451546)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(1722.759825501179), double(1.7088049577478555), double(-0.0004946939935883318), double(1.2200377891442334e-07), double(-2.1473553855838217e-11), double(2.44035358973544e-15), double(-1.567198361726716e-19), double(4.227180693080881e-24), double(825.6262960656475)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(1094.9449700511032), double(0.038900369300911966), double(0.00012477175265682494), double(-5.985512404846073e-08), double(1.3737028824910634e-11), double(-1.7282170642479608e-15), double(1.1484305635100036e-19), double(-3.182876218144256e-24), double(1004.5620761483477)})};

}


Species 
species_entropy_mass_specific(const double& temperature)  
{
    return species_entropy_mass_specific(temperature_entropy_monomial(temperature));
}


Species 
dspecies_entropy_mass_specific_dtemperature(const double& temperature)  
{
    return species_entropy_mass_specific(dtemperature_entropy_monomial_dtemperature(temperature));
}
    

Species 
species_gibbs_energy_mole_specific(const TemperatureGibbsMonomial& temperature_gibbs_monomial_sequence)  
{
        return
        Species{
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(211799793.81754547), double(24500.084403878263), double(-1.0900723548239799e-14), double(7.71212331405446e-18), double(-2.6026759547837667e-21), double(4.8263827903546865e-25), double(-5.119390436567571e-29), double(2.9523902617395775e-33), double(0.0), double(-20786.156545383103)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(-8572439.989604205), double(62621.37691981997), double(1.1001304399948686), double(-0.0009730547110763733), double(2.239718857924336e-07), double(-3.129147193202778e-11), double(2.68261126986422e-15), double(-1.2954354567224097e-19), double(0.0), double(-28923.90441124754)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(242462331.0691623), double(-6886.186101222877), double(3.0110239743417058), double(-0.0009769444442782056), double(2.4313786470747085e-07), double(-4.028289371641893e-11), double(4.099853244937288e-15), double(-2.3181520884693547e-19), double(0.0), double(-23252.002275431507)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(-8214101.151252347), double(-30420.621247283645), double(-7.972450872081301), double(0.0016232519025355845), double(-3.136724275171835e-07), double(4.2904967851482617e-11), double(-3.784754117877527e-15), double(1.9221804776206054e-19), double(0.0), double(-25438.22961632165)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(28161684.01787132), double(26994.75205898889), double(5.501348748406387), double(-0.0027498600805493647), double(7.177386894057549e-07), double(-1.1638507204898707e-10), double(1.1499287089008451e-14), double(-6.334123207915965e-19), double(0.0), double(-31854.752992863312)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(-251574086.2431756), double(27931.19724977283), double(0.010283483192705027), double(-0.0028235296414816594), double(8.619983399672407e-07), double(-1.4473199741158474e-10), double(1.440988218374708e-14), double(-7.963921141474258e-19), double(0.0), double(-32265.038647064266)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(3075295.374138502), double(-44072.04202238048), double(-17.911937181574356), double(0.0035476688979532117), double(-7.235015645532103e-07), double(1.0957456630160586e-10), double(-1.0587583666238544e-14), double(5.763198392609711e-19), double(0.0), double(-26162.395920332972)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(-146561426.9247713), double(-30515.099870220172), double(-29.06164591641778), double(0.005608840499304507), double(-1.0374591339987987e-06), double(1.460802921704962e-10), double(-1.3834364500210221e-14), double(7.615240725110361e-19), double(0.0), double(-28082.852834376936)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(-8491457.663563343), double(-2531.9863897917903), double(-0.5448774727978739), double(-0.0011651186263094313), double(4.191953612733946e-07), double(-7.696582510020928e-11), double(8.069045472973733e-15), double(-4.596019115167035e-19), double(0.0), double(-28141.802001219814)})};

}


Species 
species_gibbs_energy_mole_specific(const double& temperature)  
{
    return species_gibbs_energy_mole_specific(temperature_gibbs_monomial(temperature));
}


Species 
dspecies_gibbs_energy_mole_specific_dtemperature(const double& temperature)  
{
    return species_gibbs_energy_mole_specific(temperature_gibbs_monomial(temperature));
}
    

Reactions 
gibbs_reaction(const TemperatureMonomial& log_temperature_monomial_sequence)  
{
        return
        Reactions{
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(5777.507448953275), double(-4596.608141012188), double(1634.0404086991848), double(-333.40399592179796), double(41.80953768444545), double(-3.199795910600521), double(0.13763292555118858), double(-0.002556263183945969)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(161.08482305456928), double(-61.892081778817214), double(0.2963548842645861), double(3.735834809938518), double(-0.8583872274039199), double(0.08961534315701247), double(-0.004690391254165945), double(0.00010050027156145433)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(161.08482305456928), double(-61.892081778817214), double(0.2963548842645861), double(3.735834809938518), double(-0.8583872274039199), double(0.08961534315701247), double(-0.004690391254165945), double(0.00010050027156145433)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-3821.3594930207637), double(2705.0792762397286), double(-835.4196916055836), double(144.28759101078438), double(-14.863543232778596), double(0.8997847117516429), double(-0.02903492508755668), double(0.00037172443301587124)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-3982.4443160759242), double(2766.9713580191124), double(-835.716046490082), double(140.55175620089935), double(-14.00515600538198), double(0.810169368595226), double(-0.024344533833417645), double(0.0002712241614549339)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(30126.33921662335), double(-22250.060853098967), double(7278.588299851171), double(-1359.1663040298172), double(155.65415544627896), double(-10.886116412761693), double(0.42904719101477706), double(-0.007330823543034861)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-35742.76184252687), double(26784.77691233698), double(-8912.33235366802), double(1696.3061347619982), double(-198.32208035818948), double(14.175527666524244), double(-0.5713705078203589), double(0.009987586998546698)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-29965.254393569187), double(22188.16877132043), double(-7278.291944967017), double(1362.9021388397814), double(-156.5125426736865), double(10.975731755919012), double(-0.4337375822689569), double(0.007431323814596602)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(33947.69870964657), double(-24955.14012934109), double(8114.007991457761), double(-1503.453895040835), double(170.5176986790899), double(-11.785901124516009), double(0.45808211610245547), double(-0.007702547976053117)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(33947.69870964657), double(-24955.14012934109), double(8114.007991457761), double(-1503.453895040835), double(170.5176986790899), double(-11.785901124516009), double(0.45808211610245547), double(-0.007702547976053117)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-12953.783976333238), double(9307.914192282213), double(-2948.82991593582), double(531.06592640653), double(-58.42253632447716), double(3.9115881530591405), double(-0.14723074551803245), double(0.0024001856304351164)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-17172.555240291716), double(12942.146660818325), double(-4329.758383916002), double(828.1003776234365), double(-97.23161912182239), double(6.974528259704238), double(-0.28181644549682056), double(0.004930637912601227)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-11233.962968282245), double(8283.646438025735), double(-2695.4216203319043), double(498.4322165114303), double(-56.280468664760946), double(3.8643476922591184), double(-0.14887391119972607), double(0.002474875000215336)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-15216.407284359018), double(11050.617796045639), double(-3531.1376668223115), double(638.9839727124044), double(-70.28562467015311), double(4.6745170608551785), double(-0.17321844503318162), double(0.0027460991616709966)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-17011.47041723379), double(12880.254579036227), double(-4329.462029030377), double(831.8362124330642), double(-98.09000634918384), double(7.064143602857783), double(-0.2865068367508298), double(0.005031138184159662)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-20993.914733312115), double(15647.225937057632), double(-5165.17807552142), double(972.3879686341858), double(-112.09516235459644), double(7.874312971455537), double(-0.3108513705843631), double(0.005302362345616841)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-20993.914733312115), double(15647.225937057632), double(-5165.17807552142), double(972.3879686341858), double(-112.09516235459644), double(7.874312971455537), double(-0.3108513705843631), double(0.005302362345616841)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-13622.630443334352), double(10659.529168990242), double(-3706.066580399078), double(735.9764226868543), double(-89.5002116470389), double(6.624478569997425), double(-0.274977375597266), double(0.004918954362876149)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-13622.630443334352), double(10659.529168990242), double(-3706.066580399078), double(735.9764226868543), double(-89.5002116470389), double(6.624478569997425), double(-0.274977375597266), double(0.004918954362876149)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(15342.451451383324), double(-11683.796923244732), double(3959.4748760021716), double(-768.6101325817663), double(91.6422793067295), double(-6.671719030795359), double(0.2733342099154779), double(-0.0048442649930941165)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-18605.247258262178), double(13271.343206095204), double(-4154.533115455096), double(734.8437624589548), double(-78.8754193723447), double(5.114182093719355), double(-0.1847479061869186), double(0.0028582829829578524)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-3549.924796957653), double(2282.617491828351), double(-623.691803517045), double(92.123954936612), double(-7.731407474787769), double(0.3500496897071818), double(-0.006839069899572465), double(1.1683549725432352e-05)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-3388.839973901693), double(2220.725410048175), double(-623.3954486322142), double(95.8597897464201), double(-8.58979470217375), double(0.4396650328627207), double(-0.011529461153671467), double(0.00011218382128558955)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-7371.284289977319), double(4987.696768067002), double(-1459.1114951221805), double(236.41154594729363), double(-22.594950707552304), double(1.249834401457674), double(-0.03587399498707704), double(0.00038340798274029734)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-7371.284289977319), double(4987.696768067002), double(-1459.1114951221805), double(236.41154594729363), double(-22.594950707552304), double(1.249834401457674), double(-0.03587399498707704), double(0.00038340798274029734)})};

}


Reactions 
gibbs_reaction(const double& log_temperature)  
{
    return gibbs_reaction(temperature_monomial(log_temperature));
}


Reactions 
dgibbs_reaction_dlog_temperature(const double& log_temperature)  
{
    return gibbs_reaction(dtemperature_monomial_dtemperature(log_temperature)); //functionality is the same
}
    