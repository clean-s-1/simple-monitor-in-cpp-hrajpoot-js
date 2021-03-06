#include "constants.h"
#include "batteryManagementSystem.h"

void BatteryManagementSystem::display_warning(const float number, const float lowerLimit, const float upperLimit)
{
    if (number >= lowerLimit && number <= upperLimit)
          cout << warning_message[{lowerLimit, upperLimit}] << endl;    
}

void BatteryManagementSystem::validate_boundry_conditions(const float number)
{
    for (auto &a : boundry_conditions)
    {
        display_warning(number, a.first.first, a.first.second);
    }
}

void BatteryManagementSystem::info_logger(const string message)
{
    cout << message << ". ";
}

bool BatteryManagementSystem::check_lower_limit(const float allowed_lower_limit, const float input_limit)
{
    bool returnValue = false;
    if(input_limit < allowed_lower_limit)
    {
        info_logger(LOWER_ABNORMAL_MESSAGE);
        returnValue = true;
    }

    return returnValue;
}

bool BatteryManagementSystem::check_higher_limit(const float allowed_higher_limit, const float input_limit)
{
    bool returnValue = false;
    if(input_limit > allowed_higher_limit)
    {
        info_logger(HIGHER_ABNORMAL_MESSAGE);
        returnValue = true;
    }
    return returnValue;
}

void BatteryManagementSystem::raise_alert(const string message)
{
   cout << message << endl;
}
