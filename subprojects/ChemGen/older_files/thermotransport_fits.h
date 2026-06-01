

Species 
species_specific_heat_constant_pressure_mass_specific(const TemperatureMonomial& temperature_monomial_sequence)  
{
        return
        Species{
        contract(temperature_monomial_sequence, TemperatureMonomial{double(14635.340834351855), double(-1.9732794421553979), double(0.00377657145727694), double(-1.737087610065859e-06), double(4.114076721974724e-10), double(-5.481979459268914e-14), double(3.937219017607257e-18), double(-1.1647709433189622e-22)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(1739.8054708796758), double(-0.22692757623996493), double(0.0004874059437719156), double(-2.41944746302041e-07), double(5.822893159929111e-11), double(-7.614972783109896e-15), double(5.233494303508976e-19), double(-1.4884432560152052e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(20629.80027136728), double(5.348062264854816e-14), double(-8.714589176603537e-17), double(5.3173199099475614e-20), double(-1.5441600555780487e-23), double(2.335944281700379e-27), double(-1.780245920177685e-31), double(5.3737170183039264e-36)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(1444.791426017578), double(-0.3491244833043721), double(0.00033525525852436957), double(-1.6541531262767439e-07), double(4.544293130106448e-11), double(-6.911088408582504e-15), double(5.45466142281122e-19), double(-1.749864465264436e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(779.0304831543975), double(0.5509523744106402), double(-0.00036162497877898213), double(1.4649616222620263e-07), double(-3.4675289856541464e-11), double(4.7280380477665705e-15), double(-3.445202323346814e-19), double(1.0329669164629494e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(971.684808082986), double(0.17258405140558772), double(0.000124797406597439), double(-1.264579074824161e-07), double(4.272043926407799e-11), double(-7.0068717166862256e-15), double(5.667379494057352e-19), double(-1.8521234262188544e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(1748.2073161094193), double(0.13461228201073996), double(0.0008012656373722138), double(-5.166154765186871e-07), double(1.472751800993028e-10), double(-2.2107790094978964e-14), double(1.7065817037763017e-18), double(-5.376954442081435e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(501.1096972079367), double(1.4421661783926418), double(-0.0010483547605326384), double(4.309658334962469e-07), double(-1.0501307992001254e-10), double(1.506092074336611e-14), double(-1.1672821669420349e-18), double(3.690422801066984e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(51.22288804012207), double(5.949506768171121), double(-0.004194436542778909), double(1.7179863219892794e-06), double(-4.209261453727184e-10), double(6.027574303494048e-14), double(-4.615081007803263e-18), double(1.4456133473547392e-22)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(995.5283662558573), double(0.06350090472765743), double(0.000232398298331746), double(-1.7633616219474159e-07), double(5.5345452894972716e-11), double(-8.806211489999523e-15), double(7.024530839345182e-19), double(-2.271566419206147e-23)})};

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
        contract(temperature_monomial_sequence, TemperatureMonomial{double(10511.103424553621), double(-1.9732794421553979), double(0.00377657145727694), double(-1.737087610065859e-06), double(4.114076721974724e-10), double(-5.481979459268914e-14), double(3.937219017607257e-18), double(-1.1647709433189622e-22)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(1250.9207399951435), double(-0.22692757623996493), double(0.0004874059437719156), double(-2.41944746302041e-07), double(5.822893159929111e-11), double(-7.614972783109896e-15), double(5.233494303508976e-19), double(-1.4884432560152052e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(12381.32545177081), double(5.348062264854816e-14), double(-8.714589176603537e-17), double(5.3173199099475614e-20), double(-1.5441600555780487e-23), double(2.335944281700379e-27), double(-1.780245920177685e-31), double(5.3737170183039264e-36)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(925.1050319833734), double(-0.3491244833043721), double(0.00033525525852436957), double(-1.6541531262767439e-07), double(4.544293130106448e-11), double(-6.911088408582504e-15), double(5.45466142281122e-19), double(-1.749864465264436e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(519.1872861372951), double(0.5509523744106402), double(-0.00036162497877898213), double(1.4649616222620263e-07), double(-3.4675289856541464e-11), double(4.7280380477665705e-15), double(-3.445202323346814e-19), double(1.0329669164629494e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(674.8457285344948), double(0.17258405140558772), double(0.000124797406597439), double(-1.264579074824161e-07), double(4.272043926407799e-11), double(-7.0068717166862256e-15), double(5.667379494057352e-19), double(-1.8521234262188544e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(1286.6773345299998), double(0.13461228201073996), double(0.0008012656373722138), double(-5.166154765186871e-07), double(1.472751800993028e-10), double(-2.2107790094978964e-14), double(1.7065817037763017e-18), double(-5.376954442081435e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(312.1832817439807), double(1.4421661783926418), double(-0.0010483547605326384), double(4.309658334962469e-07), double(-1.0501307992001254e-10), double(1.506092074336611e-14), double(-1.1672821669420349e-18), double(3.690422801066984e-23)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(-102.48676621842337), double(5.949506768171121), double(-0.004194436542778909), double(1.7179863219892794e-06), double(-4.209261453727184e-10), double(6.027574303494048e-14), double(-4.615081007803263e-18), double(1.4456133473547392e-22)}),
        contract(temperature_monomial_sequence, TemperatureMonomial{double(698.7316710979635), double(0.06350090472765743), double(0.000232398298331746), double(-1.7633616219474159e-07), double(5.5345452894972716e-11), double(-8.806211489999523e-15), double(7.024530839345182e-19), double(-2.271566419206147e-23)})};

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
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-4304724.2096035285), double(14635.340834351855), double(-0.9866397210776989), double(0.0012588571524256467), double(-4.3427190251646474e-07), double(8.228153443949448e-11), double(-9.136632432114857e-15), double(5.624598596581795e-19), double(-1.4559636791487028e-23)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(1822444.0901617866), double(1739.8054708796758), double(-0.11346378811998246), double(0.00016246864792397186), double(-6.048618657551025e-08), double(1.1645786319858222e-11), double(-1.269162130518316e-15), double(7.476420433584251e-20), double(-1.8605540700190065e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(210127805.86570075), double(20629.80027136728), double(2.674031132427408e-14), double(-2.904863058867846e-17), double(1.3293299774868904e-20), double(-3.0883201111560975e-24), double(3.8932404695006316e-28), double(-2.543208457396693e-32), double(6.717146272879908e-37)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(15157987.941591928), double(1444.791426017578), double(-0.17456224165218606), double(0.00011175175284145653), double(-4.1353828156918596e-08), double(9.088586260212896e-12), double(-1.151848068097084e-15), double(7.792373461158886e-20), double(-2.187330581580545e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-253861.4891096744), double(779.0304831543975), double(0.2754761872053201), double(-0.00012054165959299404), double(3.662404055655066e-08), double(-6.935057971308293e-12), double(7.880063412944284e-16), double(-4.9217176047811633e-20), double(1.2912086455786868e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-4244748.475598825), double(971.684808082986), double(0.08629202570279386), double(4.159913553247966e-05), double(-3.161447687060402e-08), double(8.544087852815598e-12), double(-1.1678119527810376e-15), double(8.096256420081932e-20), double(-2.315154282773568e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-13958057.198277492), double(1748.2073161094193), double(0.06730614100536998), double(0.0002670885457907379), double(-1.2915386912967177e-07), double(2.945503601986056e-11), double(-3.684631682496494e-15), double(2.437973862537574e-19), double(-6.721193052601794e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-9147504.826568889), double(501.1096972079367), double(0.7210830891963209), double(-0.0003494515868442128), double(1.0774145837406172e-07), double(-2.1002615984002508e-11), double(2.510153457227685e-15), double(-1.6675459527743356e-19), double(4.61302850133373e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(1771635.0422584151), double(51.22288804012207), double(2.9747533840855604), double(-0.0013981455142596363), double(4.2949658049731984e-07), double(-8.418522907454368e-11), double(1.004595717249008e-14), double(-6.592972868290376e-19), double(1.807016684193424e-23)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-301319.02068099246), double(995.5283662558573), double(0.031750452363828716), double(7.746609944391534e-05), double(-4.4084040548685397e-08), double(1.1069090578994544e-11), double(-1.4677019149999205e-15), double(1.0035044056207403e-19), double(-2.8394580240076836e-24)})};

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
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-4304724.2096035285), double(10511.103424553621), double(-0.9866397210776989), double(0.0012588571524256467), double(-4.3427190251646474e-07), double(8.228153443949448e-11), double(-9.136632432114857e-15), double(5.624598596581795e-19), double(-1.4559636791487028e-23)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(1822444.0901617866), double(1250.9207399951435), double(-0.11346378811998246), double(0.00016246864792397186), double(-6.048618657551025e-08), double(1.1645786319858222e-11), double(-1.269162130518316e-15), double(7.476420433584251e-20), double(-1.8605540700190065e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(210127805.86570075), double(12381.32545177081), double(2.674031132427408e-14), double(-2.904863058867846e-17), double(1.3293299774868904e-20), double(-3.0883201111560975e-24), double(3.8932404695006316e-28), double(-2.543208457396693e-32), double(6.717146272879908e-37)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(15157987.941591928), double(925.1050319833734), double(-0.17456224165218606), double(0.00011175175284145653), double(-4.1353828156918596e-08), double(9.088586260212896e-12), double(-1.151848068097084e-15), double(7.792373461158886e-20), double(-2.187330581580545e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-253861.4891096744), double(519.1872861372951), double(0.2754761872053201), double(-0.00012054165959299404), double(3.662404055655066e-08), double(-6.935057971308293e-12), double(7.880063412944284e-16), double(-4.9217176047811633e-20), double(1.2912086455786868e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-4244748.475598825), double(674.8457285344948), double(0.08629202570279386), double(4.159913553247966e-05), double(-3.161447687060402e-08), double(8.544087852815598e-12), double(-1.1678119527810376e-15), double(8.096256420081932e-20), double(-2.315154282773568e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-13958057.198277492), double(1286.6773345299998), double(0.06730614100536998), double(0.0002670885457907379), double(-1.2915386912967177e-07), double(2.945503601986056e-11), double(-3.684631682496494e-15), double(2.437973862537574e-19), double(-6.721193052601794e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-9147504.826568889), double(312.1832817439807), double(0.7210830891963209), double(-0.0003494515868442128), double(1.0774145837406172e-07), double(-2.1002615984002508e-11), double(2.510153457227685e-15), double(-1.6675459527743356e-19), double(4.61302850133373e-24)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(1771635.0422584151), double(-102.48676621842337), double(2.9747533840855604), double(-0.0013981455142596363), double(4.2949658049731984e-07), double(-8.418522907454368e-11), double(1.004595717249008e-14), double(-6.592972868290376e-19), double(1.807016684193424e-23)}),
        contract(temperature_energy_monomial_sequence, TemperatureEnergyMonomial{double(-301319.02068099246), double(698.7316710979635), double(0.031750452363828716), double(7.746609944391534e-05), double(-4.4084040548685397e-08), double(1.1069090578994544e-11), double(-1.4677019149999205e-15), double(1.0035044056207403e-19), double(-2.8394580240076836e-24)})};

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
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(-18171.702437742686), double(-1.9732794421553979), double(0.00188828572863847), double(-5.790292033552863e-07), double(1.028519180493681e-10), double(-1.0963958918537828e-14), double(6.562031696012094e-19), double(-1.6639584904556604e-23), double(14635.340834351855)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(931.6191684264613), double(-0.22692757623996493), double(0.0002437029718859578), double(-8.064824876734701e-08), double(1.4557232899822778e-11), double(-1.5229945566219792e-15), double(8.722490505848293e-20), double(-2.1263475085931504e-24), double(1739.8054708796758)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(-3838.356135792317), double(5.348062264854816e-14), double(-4.3572945883017683e-17), double(1.7724399699825204e-20), double(-3.860400138945122e-24), double(4.671888563400758e-28), double(-2.967076533629475e-32), double(7.676738597577038e-37), double(20629.80027136728)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(1918.4793166337222), double(-0.3491244833043721), double(0.00016762762926218478), double(-5.513843754255813e-08), double(1.136073282526612e-11), double(-1.3822176817165008e-15), double(9.091102371352033e-20), double(-2.4998063789491942e-24), double(1444.791426017578)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(1820.0221805785332), double(0.5509523744106402), double(-0.00018081248938949107), double(4.8832054075400875e-08), double(-8.668822464135366e-12), double(9.45607609553314e-16), double(-5.74200387224469e-20), double(1.4756670235184992e-24), double(779.0304831543975)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(1460.5725472442064), double(0.17258405140558772), double(6.23987032987195e-05), double(-4.215263582747203e-08), double(1.0680109816019497e-11), double(-1.401374343337245e-15), double(9.445632490095587e-20), double(-2.6458906088840777e-24), double(971.684808082986)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(443.4462305378074), double(0.13461228201073996), double(0.0004006328186861069), double(-1.7220515883956234e-07), double(3.68187950248257e-11), double(-4.421558018995793e-15), double(2.8443028396271696e-19), double(-7.681363488687764e-24), double(1748.2073161094193)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(1614.5719250115444), double(1.4421661783926418), double(-0.0005241773802663192), double(1.4365527783208228e-07), double(-2.6253269980003135e-11), double(3.012184148673222e-15), double(-1.945470278236725e-19), double(5.2720325729528346e-24), double(501.1096972079367)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(3258.38923411297), double(5.949506768171121), double(-0.0020972182713894544), double(5.726621073297598e-07), double(-1.052315363431796e-10), double(1.2055148606988096e-14), double(-7.691801679672105e-19), double(2.0651619247924847e-23), double(51.22288804012207)}),
        contract(temperature_entropy_monomial_sequence, TemperatureEnergyMonomial{double(1136.372562426318), double(0.06350090472765743), double(0.000116199149165873), double(-5.8778720731580527e-08), double(1.3836363223743179e-11), double(-1.7612422979999047e-15), double(1.1707551398908636e-19), double(-3.2450948845802097e-24), double(995.5283662558573)})};

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
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(-8678324.006560713), double(66138.99923654259), double(1.989065677692641), double(-0.001268928009645052), double(2.918307184910642e-07), double(-4.146989335750521e-11), double(3.683890196628712e-15), double(-1.8898651284514833e-19), double(0.0), double(-29504.84712205334)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(30994306.64138151), double(13744.82444582182), double(1.929678644556542), double(-0.001381552147621495), double(3.4289619169656753e-07), double(-4.951497198545719e-11), double(4.316928070745003e-15), double(-2.119191371899456e-19), double(0.0), double(-29588.871643250648)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(211808828.31262636), double(24663.901658416875), double(-2.6954233814868273e-14), double(1.464050981669394e-17), double(-4.466548724355951e-21), double(7.782566680113364e-25), double(-7.848772786513279e-29), double(4.272590208426444e-33), double(0.0), double(-20794.83867353822)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(242512649.07752925), double(-7578.5325619676905), double(2.7928213041933247), double(-0.0008939581468552317), double(2.2053996556084685e-07), double(-3.635207289428653e-11), double(3.685683448297052e-15), double(-2.0778363834180168e-19), double(0.0), double(-23115.218024855232)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(-8123059.928531362), double(-33309.65233417749), double(-8.814687038195832), double(0.001928546011828312), double(-3.906320165761693e-07), double(5.547699624148068e-11), double(-5.042925381747827e-15), double(2.624751998629794e-19), double(0.0), double(-24927.417399974413)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(-118895404.80152309), double(-13693.74557390578), double(-2.417039639935256), double(-0.0005825958931323777), double(2.951738323818728e-07), double(-5.982997518934121e-11), double(6.542082559479376e-15), double(-3.779602372108248e-19), double(0.0), double(-27216.891474404438)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(-251454400.42696902), double(23505.27095657259), double(-1.2125201302117403), double(-0.0024058000762100726), double(7.755689841236789e-07), double(-1.3265811847444696e-10), double(1.3275727952034877e-14), double(-7.320016522269065e-19), double(0.0), double(-31493.954799711188)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(-402572539.9124702), double(-49002.35918340897), double(-31.73414567244089), double(0.007689507442713481), double(-1.5805312805280271e-06), double(2.3107603170999156e-10), double(-2.209386869982665e-14), double(1.223117163927429e-18), double(0.0), double(-22053.336664424085)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(95831282.70584218), double(-173482.04199177248), double(-160.91036005195613), double(0.037814243578666126), double(-7.74410967742034e-06), double(1.138436852775054e-09), double(-1.0868118307486675e-13), double(5.943784806526049e-18), double(0.0), double(-2770.748459866283)}),
        contract(temperature_gibbs_monomial_sequence, TemperatureGibbsMonomial{double(-8441151.045357322), double(-3945.6093115192825), double(-0.8894571725202977), double(-0.0010850676549109223), double(4.1165677064362413e-07), double(-7.752237586998826e-11), double(8.22324028936156e-15), double(-4.685362069843237e-19), double(0.0), double(-27888.731652291586)})};

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
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-38143.96910973097), double(27398.47554477433), double(-8654.963377345473), double(1548.3659633473299), double(-168.78350224458796), double(11.177407937727487), double(-0.41530937332745693), double(0.006663529815833412)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(32136.94617608559), double(-25333.92579307519), double(8891.205369225148), double(-1786.141667663724), double(219.91022624780277), double(-16.493027964927265), double(0.6949314236727974), double(-0.012659614873558383)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-4153.461877532352), double(3524.890793204311), double(-1341.6656886525034), double(293.2746866425467), double(-39.30193671723495), double(3.1999868277268577), double(-0.14564042822227202), double(0.0028460533507218264)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(-35140.457642906986), double(26366.20066892341), double(-8773.084373284759), double(1667.2538155054003), double(-194.346864246178), double(13.835217951325957), double(-0.5551203985000634), double(0.00966157234469465)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(35140.4576429072), double(-26366.20066892377), double(8773.084373284913), double(-1667.2538155054363), double(194.34686424618292), double(-13.835217951326355), double(0.5551203985000813), double(-0.009661572344695009)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(35867.59651454953), double(-26911.343731039), double(8967.142868582123), double(-1709.4346498966627), double(200.19980457080172), double(-14.335886110372986), double(0.578943232073357), double(-0.010140190614524352)}),
        contract(log_temperature_monomial_sequence, TemperatureMonomial{double(35822.766110051794), double(-26779.121154567034), double(8876.607689907985), double(-1680.5760351476752), double(195.15607612554209), double(-13.836324343614551), double(0.5525408816956793), double(-0.00955995139720243)})};

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
    