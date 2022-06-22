#include "constants.h"
#include "batteryManagementSystem.h"

float BatteryManagementSystem::fetch_warning_tolerance(const float upper_limit)
{
    float warning_tolerance = (upper_limit * 5) / (100);

    cout << "warning_tolerance: " << warning_tolerance << endl;

    return warning_tolerance;
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

