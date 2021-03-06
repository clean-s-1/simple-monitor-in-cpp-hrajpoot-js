#pragma once

#include <bits/stdc++.h>
using namespace std;

class BatteryManagementSystem {
    public:
    virtual bool checkBattery() = 0;
    void raise_alert(const string message);
   
    bool check_lower_limit(const float allowed_lower_limit, const float input_limit);
    bool check_higher_limit(const float allowed_higher_limit, const float input_limit);
    void info_logger(const string message);
    void display_warning(const float number, const float lowerLimit, const float upperLimit);
    
    void validate_boundry_conditions(const float number);

    //data-structure with a series of numbers representing the boundary of each condition
    map<pair<float, float>, string> boundry_conditions = {
        { { 0, 20 }, "LOW_SOC_BREACH"},
        { { 21, 24 }, "LOW_SOC_WARNING"},
        { { 25, 75 }, "NORMAL" },
        { { 76, 80 }, "HIGH_SOC_WARNING" },
        { { 81, 100 }, "HIGH_SOC_WARNING" }
    };

   map<string, string> warning_message = {
       {"LOW_SOC_WARNING", "Warning: Approaching discharge"},
       {"HIGH_SOC_WARNING", "Warning: Approaching charge-peak"}
   };

};

