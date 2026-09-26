#include "Vehicle.h"
#include <iostream>
using namespace std;


const double Vehicle::maxFuel = 100;

Vehicle::Vehicle()
{
    speed = 0;
    fuel = 20;   
    engineOn = false;
}

double Vehicle::getSpeed() const
{
    return speed;
}

double Vehicle::getFuel() const
{
    return fuel;
}

bool Vehicle::isEngineOn() const
{
    return engineOn;
}

void Vehicle::startEngine()
{
    if (!engineOn)
    {
        engineOn = true;
        cout << "Engine Started" << endl;
    }
    else
    {
        cout << "Engine is already on" << endl;
    }
}

void Vehicle::stopEngine()
{
    if (speed > 0)
    {
        cout << "Cannot stop engine while moving. Please brake first." << endl;
        return;
    }

    if (engineOn)
    {
        engineOn = false;
        cout << "Engine Stopped" << endl;
    }
    else
    {
        cout << "Engine is already off" << endl;
    }
}

void Vehicle::accelerate(double increment)
{
    //  validation
    if (increment <= 0)
    {
        cout << "Invalid speed increment!" << endl;
        return;
    }
    // 1. Engine check
    if (!engineOn)
    {
        cout << "Cannot accelerate. Engine is off." << endl;
        return;
    }

    // 2. Fuel check
    if (fuel <= 0)
    {
        cout << "Cannot accelerate. No fuel." << endl;
        engineOn = false;
        speed = 0;
        return;
    }

    // 3. Apply acceleration
    speed += increment;

    // 4. Fuel consumption
    fuel -= increment * 0.1;

    if (fuel < 0)
        fuel = 0;

    cout << "Accelerating. Current speed: " << speed
         << " km/h | Fuel: " << fuel << " L" << endl;
}

void Vehicle::brake()
{
    if (speed <= 0)
    {
        cout << "Vehicle is already stopped." << endl;
        return;
    }

    speed -= 20;
    if (speed < 0)
        speed = 0;

    cout << "Braking. Current speed: " << speed << " km/h" << endl;

    if (speed == 0)
        cout << "Vehicle stopped." << endl;
}

void Vehicle::refuel(double amount)
{
    if (amount <= 0)
    {
        cout << "Invalid fuel amount" << endl;
        return;
    }

    fuel += amount;

    if (fuel > maxFuel)
    {
        fuel = maxFuel;
        cout << "Tank full. Extra fuel ignored." << endl;
    }

    cout << "Current fuel: " << fuel << " liters" << endl;
}

void Vehicle::displayStatus()
{
    cout << "\n--- Vehicle Status ---\n";   
    cout << "Speed: " << speed << " km/h" << endl;
    cout << "Fuel: " << fuel << " liters" << endl;
    cout << "Engine State: " << (engineOn ? "On" : "Off") << endl;
}
