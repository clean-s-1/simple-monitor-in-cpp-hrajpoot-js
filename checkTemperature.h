#pragma once

#include "constants.h" 
#include "batteryManagementSystem.h"
#include <bits/stdc++.h>

class CheckTemperature : public BatteryManagementSystem {
    public:
    float _temperaturLimit;
    CheckTemperature(float temperatureLimit) : _temperaturLimit(temperatureLimit) {}

    virtual bool checkBattery() override;
};

