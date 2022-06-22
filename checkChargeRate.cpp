#include "checkChargeRate.h"

bool CheckChargeRate::checkBattery()
{
    bool returnValue = true;
    if(_chargeRate > CHARGE_RATE) {
        raise_alert(CHARGE_RATE_OUT_OF_RANGE_ENG);
        returnValue = false;
    }

    return returnValue;
}

