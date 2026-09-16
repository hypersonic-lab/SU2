    
double call_forward_reaction_0(const double& temperature, const double& log_temperature)  { return arrhenius(double(117669922.29608056), double(0.0), double(125520000.0), temperature, log_temperature);}
    
double call_forward_reaction_1(const double& temperature, const double& log_temperature)  { return arrhenius(double(2240000000.0000005), double(0.0), double(50208000.0), temperature, log_temperature);}
    
double call_forward_reaction_2(const double& temperature, const double& log_temperature)  { return arrhenius(double(500000000.0), double(0.0), double(323004800.0), temperature, log_temperature);}
    
double dcall_forward_reaction_0_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(117669922.29608056), double(0.0), double(125520000.0), temperature, log_temperature);}
    
double dcall_forward_reaction_0_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(117669922.29608056), double(0.0), double(125520000.0), temperature, log_temperature);}
    
double dcall_forward_reaction_1_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(2240000000.0000005), double(0.0), double(50208000.0), temperature, log_temperature);}
    
double dcall_forward_reaction_1_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(2240000000.0000005), double(0.0), double(50208000.0), temperature, log_temperature);}
    
double dcall_forward_reaction_2_dtemperature(const double& temperature, const double& log_temperature)  { return darrhenius_dtemperature(double(500000000.0), double(0.0), double(323004800.0), temperature, log_temperature);}
    
double dcall_forward_reaction_2_dlog_temperature(const double& temperature, const double& log_temperature)  { return darrhenius_dlog_temperature(double(500000000.0), double(0.0), double(323004800.0), temperature, log_temperature);}
