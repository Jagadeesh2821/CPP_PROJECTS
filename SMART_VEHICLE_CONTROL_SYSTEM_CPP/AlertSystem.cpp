#include "AlertSystem.h"
#include "Vehicle.h"
#include <iostream>

using namespace std;

void AlertSystem::checkSpeed(const Vehicle& v)
{
    if (v.getSpeed() > 120)
    {
        cout << "⚠️ Overspeed Warning! Reduce speed." << endl;
    }
}

void AlertSystem::checkFuel(const Vehicle& v)
{
    if (v.getFuel() < 10)
    {
        cout << "⛽ Low Fuel Warning! Please refuel." << endl;
    }
}

void AlertSystem::checkEngine(const Vehicle& v)
{
    if (!v.isEngineOn() && v.getSpeed() > 0)
    {
        cout << "⚠️ Engine OFF while moving!" << endl;
    }
}

void AlertSystem::checkAllAlerts(const Vehicle& v)
{
    checkSpeed(v);
    checkFuel(v);
    checkEngine(v);
}