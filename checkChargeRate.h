#pragma once
#include "constants.h" 
#include "batteryManagementSystem.h"
#include <bits/stdc++.h>

class CheckChargeRate : public BatteryManagementSystem {
    public:
    float _chargeRate;
    CheckChargeRate(float chargeRate) : _chargeRate(chargeRate) {}

    virtual bool checkBattery() override;
};

