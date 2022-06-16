
#include<bits/stdc++.h>

#define LOW_TEMPERATURE 0
#define HIGH_TEMPERATURE 45
#define LOW_SOC 20
#define HIGH_SOC 80
#define CHARGE_RATE 0.8


class BatteryManagementSystem
{
    public:
    float _temperature;
    float _stateOfCharge;
    float _chargeRate;

    BatteryManagementSystem(float temperature, float stateOfCharge, float chargeRate) : 
        _temperature(temperature), _stateOfCharge(stateOfCharge), _chargeRate(chargeRate) {}
   
    //BMS Member functions
    bool batteryIsOk();
    bool checkTemperature();
    bool checkStateOfCharge();
    bool checkChargeRate();
    void check_abnormal_measure(const float input, const float low_limit, const float high_limit);
};
