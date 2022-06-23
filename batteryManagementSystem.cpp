#include "constants.h"
#include "batteryManagementSystem.h"

void BatteryManagementSystem::validate_boundry_conditions(const float number)
{
    for (auto &a : boundry_conditions)
    {
        if (number >= a.first.first && number <= a.first.second)
        {
            cout << warning_message[a.second] << endl;
            break;
        }
    }
}

void BatteryManagementSystem::lower_abnormal_msg(const string message)
{
    cout << message << ". ";
}

void BatteryManagementSystem::higher_abnormal_msg(const string message)
{
    cout << message << ". ";
}

bool BatteryManagementSystem::check_lower_limit(const float allowed_lower_limit, const float input_limit)
{
    bool returnValue = false;
    if(input_limit < allowed_lower_limit)
    {
        lower_abnormal_msg(LOWER_ABNORMAL_MESSAGE);
        returnValue = true;
    }

    return returnValue;
}

bool BatteryManagementSystem::check_higher_limit(const float allowed_higher_limit, const float input_limit)
{
    bool returnValue = false;
    if(input_limit > allowed_higher_limit)
    {
        higher_abnormal_msg(HIGHER_ABNORMAL_MESSAGE);
        returnValue = true;
    }
    return returnValue;
}

void BatteryManagementSystem::raise_alert(const string message)
{
   cout << message << endl;
}

