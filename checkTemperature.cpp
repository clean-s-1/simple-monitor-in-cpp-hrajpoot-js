#include "checkTemperature.h"

bool CheckTemperature::checkBattery()
{
    bool returnValue = true;

    if(check_lower_limit(LOW_TEMPERATURE, _temperaturLimit) || check_higher_limit(HIGH_TEMPERATURE, _temperaturLimit)) {
        raise_alert(TEMP_OUT_OF_RANGE_ENG);
        returnValue = false;
    }

    return returnValue;
}

