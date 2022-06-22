#include "checkStateOfCharge.h"

bool CheckStateOfCharge::checkBattery()
{
    bool returnValue = true;

    if(check_lower_limit(LOW_SOC, _socLimit) || check_higher_limit(HIGH_SOC, _socLimit)) {
        raise_alert(STATE_OF_CHARGE_OUT_OF_RANGE_ENG);
        returnValue = false;
    }

    return returnValue;
}

