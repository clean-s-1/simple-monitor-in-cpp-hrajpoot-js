#pragma once
#include "constants.h" 
#include "batteryManagementSystem.h"
#include <bits/stdc++.h>

class CheckStateOfCharge : public BatteryManagementSystem {
    public:
    float _socLimit;
    CheckStateOfCharge(float socLimit) : _socLimit(socLimit) {}
    virtual bool checkBattery() override;
};

