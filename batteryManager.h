#pragma once

#include "checkTemperature.h"
#include "checkStateOfCharge.h"
#include "checkChargeRate.h"

#include "constants.h" 
#include "batteryManagementSystem.h"
#include <bits/stdc++.h>

class BatteryManager {
    public:
    BatteryManagementSystem *_bmsObj;
    BatteryManager() = default;

    bool batteryIsOk(vector<BatteryManagementSystem*> inpputBmsManagerVector);
};



