    
double call_forward_reaction_0(const double& temperature, const double& log_temperature)  { return arrhenius(double(1320000000000.0), double(0.0), double(125520000.0), temperature, log_temperature);}
    
double call_forward_reaction_1(const double& temperature, const double& log_temperature)  { return arrhenius(double(800000000.0), double(0.0), double(125520000.0), temperature, log_temperature);}
    
double call_forward_reaction_2(const double& temperature, const double& log_temperature)  { return arrhenius(double(1500000000.0), double(0.0), double(83680000.0), temperature, log_temperature);}
    
double call_forward_reaction_3(const double& temperature, const double& log_temperature)  { return arrhenius(double(2640000000000000.0), double(-1.0), double(167360000.0), temperature, log_temperature);}
    
double call_forward_reaction_4(const double& temperature, const double& log_temperature)  { return arrhenius(double(4.84e+16), double(-0.877), double(409613600.0), temperature, log_temperature);}
    
double call_forward_reaction_5(const double& temperature, const double& log_temperature)  { return arrhenius(double(15000000000.0), double(0.0), double(472792000.0), temperature, log_temperature);}
    
double call_forward_reaction_6(const double& temperature, const double& log_temperature)  { return arrhenius(double(2.3e+23), double(-3.0), double(502080000.0), temperature, log_temperature);}
    
double dcall_forward_reaction_0_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(1320000000000.0), double(0.0), double(125520000.0), temperature, log_temperature);}
    
double dcall_forward_reaction_0_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(1320000000000.0), double(0.0), double(125520000.0), temperature, log_temperature);}
    
double dcall_forward_reaction_1_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(800000000.0), double(0.0), double(125520000.0), temperature, log_temperature);}
    
double dcall_forward_reaction_1_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(800000000.0), double(0.0), double(125520000.0), temperature, log_temperature);}
    
double dcall_forward_reaction_2_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(1500000000.0), double(0.0), double(83680000.0), temperature, log_temperature);}
    
double dcall_forward_reaction_2_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(1500000000.0), double(0.0), double(83680000.0), temperature, log_temperature);}
    
double dcall_forward_reaction_3_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(2640000000000000.0), double(-1.0), double(167360000.0), temperature, log_temperature);}
    
double dcall_forward_reaction_3_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(2640000000000000.0), double(-1.0), double(167360000.0), temperature, log_temperature);}
    
double dcall_forward_reaction_4_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(4.84e+16), double(-0.877), double(409613600.0), temperature, log_temperature);}
    
double dcall_forward_reaction_4_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(4.84e+16), double(-0.877), double(409613600.0), temperature, log_temperature);}
    
double dcall_forward_reaction_5_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(15000000000.0), double(0.0), double(472792000.0), temperature, log_temperature);}
    
double dcall_forward_reaction_5_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(15000000000.0), double(0.0), double(472792000.0), temperature, log_temperature);}
    
double dcall_forward_reaction_6_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(2.3e+23), double(-3.0), double(502080000.0), temperature, log_temperature);}
    
double dcall_forward_reaction_6_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(2.3e+23), double(-3.0), double(502080000.0), temperature, log_temperature);}
