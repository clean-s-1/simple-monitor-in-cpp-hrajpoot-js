#include "batteryManager.h"

bool BatteryManager::batteryIsOk(vector<BatteryManagementSystem*> inpputBmsManagerVector)
{
    bool returnValue = true;
    for (auto a : inpputBmsManagerVector)
    {
        if(not a->checkBattery())
        {
            returnValue = false;
            break;
        }
    }

    return returnValue;
}

int main()
{
    BatteryManager *bmsManager = new BatteryManager();
    vector<BatteryManagementSystem*> bmsManagerVector;

    //case 1
    BatteryManagementSystem *bmaObj1 = new CheckTemperature(25);
    BatteryManagementSystem *bmaObj2 = new CheckStateOfCharge(70);
    BatteryManagementSystem *bmaObj3 = new CheckChargeRate(0.7);

    bmsManagerVector.push_back(bmaObj1);
    bmsManagerVector.push_back(bmaObj2);
    bmsManagerVector.push_back(bmaObj3);

    assert(bmsManager->batteryIsOk(bmsManagerVector) == true);


    bmsManagerVector.clear();

    //case 2
    bmaObj1 = new CheckTemperature(50);
    bmaObj2 = new CheckStateOfCharge(85);
    bmaObj3 = new CheckChargeRate(0);
    
    bmsManagerVector.push_back(bmaObj1);
    bmsManagerVector.push_back(bmaObj2);
    bmsManagerVector.push_back(bmaObj3);

    assert(bmsManager->batteryIsOk(bmsManagerVector) == false);


    bmsManagerVector.clear();

    //case 3
    bmaObj1 = new CheckTemperature(1);
    bmaObj2 = new CheckStateOfCharge(15);
    bmaObj3 = new CheckChargeRate(0.1);

    bmsManagerVector.push_back(bmaObj1);
    bmsManagerVector.push_back(bmaObj2);
    bmsManagerVector.push_back(bmaObj3);

    assert(bmsManager->batteryIsOk(bmsManagerVector) == false);


    bmsManagerVector.clear();

    //case 4
    bmaObj1 = new CheckTemperature(44);
    bmaObj2 = new CheckStateOfCharge(79);
    bmaObj3 = new CheckChargeRate(0.9);

    bmsManagerVector.push_back(bmaObj1);
    bmsManagerVector.push_back(bmaObj2);
    bmsManagerVector.push_back(bmaObj3);

    assert(bmsManager->batteryIsOk(bmsManagerVector) == false);


    return 0;
}
