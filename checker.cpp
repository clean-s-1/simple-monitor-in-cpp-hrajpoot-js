#include "checker.h"

using namespace std;

void BatteryManagementSystem::check_abnormal_measure(const float input, const float low_limit, const float high_limit){
    if(input < low_limit)
    {
        cout << "The input value " << input << " is lower than the accepted limit " << low_limit << endl; 
    }
    else if(input > high_limit)
    {
        cout << "The input value " << input << " is higher than the accepted limit " << high_limit << endl;
    }
}

bool BatteryManagementSystem::checkTemperature(){
    bool returnValue = true;

    if(_temperature < LOW_TEMPERATURE || _temperature > HIGH_TEMPERATURE) {
        cout << "Temperature out of range. ";
        check_abnormal_measure(_temperature, LOW_TEMPERATURE, HIGH_TEMPERATURE);
        returnValue = false;
    }

    return returnValue;
}

bool BatteryManagementSystem::checkStateOfCharge(){
    bool returnValue = true;

    if(_stateOfCharge < LOW_SOC || _stateOfCharge > HIGH_SOC) {
        cout << "State of Charge out of range. ";
        check_abnormal_measure(_stateOfCharge, LOW_SOC, HIGH_SOC);
        returnValue = false;
    }

    return returnValue;
}

bool BatteryManagementSystem::checkChargeRate(){
    bool returnValue = true;
    if(_chargeRate > CHARGE_RATE) {
        cout << "Charge Rate out of range!\n";
        returnValue = false;
    }

    return returnValue;
}

bool BatteryManagementSystem::batteryIsOk() {
    return (checkTemperature() && checkStateOfCharge() && checkChargeRate());
}

int main() {

  BatteryManagementSystem *bmsObj1 = new BatteryManagementSystem(25, 70, 0.7);
  BatteryManagementSystem *bmsObj2 = new BatteryManagementSystem(50, 85, 0);
  BatteryManagementSystem *bmsObj3 = new BatteryManagementSystem(1, 15, 0.1);
  BatteryManagementSystem *bmsObj4 = new BatteryManagementSystem(44, 79, 0.9);

  assert(bmsObj1->batteryIsOk() == true);
  assert(bmsObj2->batteryIsOk() == false);
  assert(bmsObj3->batteryIsOk() == false);
  assert(bmsObj4->batteryIsOk() == false);
}
