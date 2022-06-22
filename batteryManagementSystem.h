#pragma once

#include <bits/stdc++.h>
using namespace std;

class BatteryManagementSystem {
    public:
    virtual bool checkBattery() = 0;
    void raise_alert(const string message);
    float fetch_warning_tolerance(const float upper_limit);
   
    bool check_lower_limit(const float allowed_lower_limit, const float input_limit);
    bool check_higher_limit(const float allowed_higher_limit, const float input_limit);
    void lower_abnormal(const string message);
    void higher_abnormal(const string message);
};

