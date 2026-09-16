

Species 
species_specific_heat_constant_pressure_mass_specific(const TemperatureMonomial& temperature_monomial_sequence)  
{
        return
        Species{
        contract(temperature_monomial_sequence, TemperatureMonomial{double(794.9943626577154), double(0.49830932383783494), double(-0.00030437875539766803), double(1.1763451247599667e-07), double(-2.6817280987245726e-11), double(3.548428762309022e-15), double(-2.523019565600858e-19), double(7.391941640845434e-24)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(97.20646377702023), double(5.242697545823468), double(-0.0033364855500590414), double(1.274767391901459e-06), double(-3.017009597692488e-10), double(4.279846635125656e-14), double(-3.2862169066929194e-18), double(1.0310572062228559e-22)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(983.8440000320144), double(0.13804480560714769), double(0.00015218164668039964), double(-1.347143669041276e-07), double(4.3655268545980094e-11), double(-7.040180469138593e-15), double(5.690165744582213e-19), double(-1.858921481909105e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(499.781061316052), double(1.4509698170607812), double(-0.0010719236358760814), double(4.5192920116656015e-07), double(-1.1291461918781008e-10), double(1.6424097823599713e-14), double(-1.2720906002854234e-18), double(4.0198410557132395e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(1791.0096390265771), double(-0.0011416578621539777), double(0.0009403928864220677), double(-5.741870707526749e-07), double(1.6067943093158596e-10), double(-2.3996473245214992e-14), double(1.8567010154983594e-18), double(-5.862323218477792e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(995.5283662558359), double(0.06350090472762729), double(0.0002323982983318167), double(-1.7633616219479127e-07), double(5.5345452894988724e-11), double(-8.806211490002139e-15), double(7.024530839347296e-19), double(-2.2715664192068222e-23)})};

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
        contract(temperature_monomial_sequence, TemperatureMonomial{double(535.151165640613), double(0.49830932383783494), double(-0.00030437875539766803), double(1.1763451247599667e-07), double(-2.6817280987245726e-11), double(3.548428762309022e-15), double(-2.523019565600858e-19), double(7.391941640845434e-24)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(-56.50319048152521), double(5.242697545823468), double(-0.0033364855500590414), double(1.274767391901459e-06), double(-3.017009597692488e-10), double(4.279846635125656e-14), double(-3.2862169066929194e-18), double(1.0310572062228559e-22)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(687.0049204835232), double(0.13804480560714769), double(0.00015218164668039964), double(-1.347143669041276e-07), double(4.3655268545980094e-11), double(-7.040180469138593e-15), double(5.690165744582213e-19), double(-1.858921481909105e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(310.854645852096), double(1.4509698170607812), double(-0.0010719236358760814), double(4.5192920116656015e-07), double(-1.1291461918781008e-10), double(1.6424097823599713e-14), double(-1.2720906002854234e-18), double(4.0198410557132395e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(1329.4796574471577), double(-0.0011416578621539777), double(0.0009403928864220677), double(-5.741870707526749e-07), double(1.6067943093158596e-10), double(-2.3996473245214992e-14), double(1.8567010154983594e-18), double(-5.862323218477792e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(698.7316710979419), double(0.06350090472762729), double(0.0002323982983318167), double(-1.7633616219479127e-07), double(5.5345452894988724e-11), double(-8.806211490002139e-15), double(7.024530839347296e-19), double(-2.2715664192068222e-23)})};

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
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-256706.70514570712), double(794.9943626577154), double(0.24915466191891747), double(-0.00010145958513255601), double(2.940862811899917e-08), double(-5.363456197449145e-12), double(5.914047937181704e-16), double(-3.604313665144083e-20), double(9.239927051056793e-25)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(1814077.7851878651), double(97.20646377702023), double(2.621348772911734), double(-0.0011121618500196805), double(3.1869184797536477e-07), double(-6.034019195384976e-11), double(7.133077725209426e-15), double(-4.694595580989885e-19), double(1.2888215077785698e-23)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-4246635.755496562), double(983.8440000320144), double(0.06902240280357384), double(5.072721556013322e-05), double(-3.36785917260319e-08), double(8.731053709196018e-12), double(-1.1733634115230989e-15), double(8.128808206546019e-20), double(-2.323651852386381e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-9146400.682877215), double(499.781061316052), double(0.7254849085303906), double(-0.00035730787862536047), double(1.1298230029164004e-07), double(-2.2582923837562015e-11), double(2.737349637266619e-15), double(-1.8172722861220335e-19), double(5.0248013196415494e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-13964700.873892613), double(1791.0096390265771), double(-0.0005708289310769888), double(0.00031346429547402253), double(-1.4354676768816873e-07), double(3.2135886186317194e-11), double(-3.999412207535832e-15), double(2.6524300221405137e-19), double(-7.32790402309724e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-301319.0206809853), double(995.5283662558359), double(0.031750452363813644), double(7.74660994439389e-05), double(-4.408404054869782e-08), double(1.1069090578997744e-11), double(-1.4677019150003566e-15), double(1.0035044056210422e-19), double(-2.8394580240085278e-24)})};

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
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-256706.70514570712), double(535.151165640613), double(0.24915466191891747), double(-0.00010145958513255601), double(2.940862811899917e-08), double(-5.363456197449145e-12), double(5.914047937181704e-16), double(-3.604313665144083e-20), double(9.239927051056793e-25)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(1814077.7851878651), double(-56.50319048152521), double(2.621348772911734), double(-0.0011121618500196805), double(3.1869184797536477e-07), double(-6.034019195384976e-11), double(7.133077725209426e-15), double(-4.694595580989885e-19), double(1.2888215077785698e-23)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-4246635.755496562), double(687.0049204835232), double(0.06902240280357384), double(5.072721556013322e-05), double(-3.36785917260319e-08), double(8.731053709196018e-12), double(-1.1733634115230989e-15), double(8.128808206546019e-20), double(-2.323651852386381e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-9146400.682877215), double(310.854645852096), double(0.7254849085303906), double(-0.00035730787862536047), double(1.1298230029164004e-07), double(-2.2582923837562015e-11), double(2.737349637266619e-15), double(-1.8172722861220335e-19), double(5.0248013196415494e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-13964700.873892613), double(1329.4796574471577), double(-0.0005708289310769888), double(0.00031346429547402253), double(-1.4354676768816873e-07), double(3.2135886186317194e-11), double(-3.999412207535832e-15), double(2.6524300221405137e-19), double(-7.32790402309724e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-301319.0206809853), double(698.7316710979419), double(0.031750452363813644), double(7.74660994439389e-05), double(-4.408404054869782e-08), double(1.1069090578997744e-11), double(-1.4677019150003566e-15), double(1.0035044056210422e-19), double(-2.8394580240085278e-24)})};

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
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(1745.698195624901), double(0.49830932383783494), double(-0.00015218937769883402), double(3.921150415866556e-08), double(-6.7043202468114316e-12), double(7.096857524618044e-16), double(-4.205032609334763e-20), double(1.0559916629779193e-24), double(794.9943626577154)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(3443.4395587799886), double(5.242697545823468), double(-0.0016682427750295207), double(4.2492246396715303e-07), double(-7.54252399423122e-11), double(8.559693270251312e-15), double(-5.477028177821533e-19), double(1.4729388660326514e-23), double(97.20646377702023)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(1404.2702314608714), double(0.13804480560714769), double(7.609082334019982e-05), double(-4.490478896804253e-08), double(1.0913817136495024e-11), double(-1.4080360938277186e-15), double(9.483609574303689e-20), double(-2.655602117013007e-24), double(983.8440000320144)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(1621.4940109367972), double(1.4509698170607812), double(-0.0005359618179380407), double(1.5064306705552006e-07), double(-2.822865479695252e-11), double(3.2848195647199426e-15), double(-2.1201510004757057e-19), double(5.742630079590342e-24), double(499.781061316052)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(240.5684927723778), double(-0.0011416578621539777), double(0.00047019644321103383), double(-1.9139569025089162e-07), double(4.016985773289649e-11), double(-4.799294649042998e-15), double(3.0945016924972657e-19), double(-8.374747454968273e-24), double(1791.0096390265771)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(1136.3725624264462), double(0.06350090472762729), double(0.00011619914916590835), double(-5.877872073159709e-08), double(1.3836363223747181e-11), double(-1.7612422980004279e-15), double(1.170755139891216e-19), double(-3.2450948845811747e-24), double(995.5283662558359)})};

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
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(-8214101.151252337), double(-30420.621247284005), double(-7.972450872081521), double(0.0016232519025357638), double(-3.136724275172451e-07), double(4.290496785149443e-11), double(-3.784754117878805e-15), double(1.9221804776213394e-19), double(0.0), double(-25438.22961632158)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(98127095.556382), double(-181004.44057490054), double(-141.79399782434152), double(0.030079529395632285), double(-5.746226480227809e-06), double(8.159804157919101e-10), double(-7.716848806240571e-14), double(4.232334402781747e-18), double(0.0), double(-5258.092038626578)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(-118948267.51145871), double(-11776.138742322284), double(-1.9333175025281033), double(-0.0007104346539196656), double(3.1444578474871775e-07), double(-6.11392035986451e-11), double(6.573181831352403e-15), double(-3.7947986310892328e-19), double(0.0), double(-27557.47044089672)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(-402523947.65274334), double(-49365.46519985937), double(-31.92786533951396), double(0.007862381215211746), double(-1.657412684511595e-06), double(2.484629737918166e-10), double(-2.4093604037293342e-14), double(1.3329389339990761e-18), double(0.0), double(-21994.86472745813)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(-251574086.24317542), double(27931.1972497694), double(0.010283483193351954), double(-0.0028235296414822583), double(8.619983399674531e-07), double(-1.44731997411626e-10), double(1.4409882183751612e-14), double(-7.963921141476891e-19), double(0.0), double(-32265.03864706379)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(-8441151.045357121), double(-3945.609311523477), double(-0.8894571725198754), double(-0.0010850676549112523), double(4.116567706437401e-07), double(-7.752237587001068e-11), double(8.223240289364002e-15), double(-4.685362069844645e-19), double(0.0), double(-27888.731652290986)})};

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
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-83268.92118218726), double(59260.23840016769), double(-18498.805324651454), double(3259.5580194971917), double(-348.05790222881853), double(22.402309506318353), double(-0.8005832194980452), double(0.012187643563373552)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-18889.820643078954), double(13821.72768919594), double(-4474.35775253281), double(825.7291132582253), double(-93.27536327204987), double(6.416979034233415), double(-0.24789691017572826), double(0.0041339027844261335)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(18889.82064307788), double(-13821.72768919481), double(4474.357752532329), double(-825.729113258114), double(93.27536327203454), double(-6.416979034232151), double(0.2478969101756704), double(-0.004133902784425013)})};

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
    