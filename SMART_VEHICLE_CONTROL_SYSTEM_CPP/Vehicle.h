#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle {
private:
    double speed;
    double fuel;
    bool engineOn;
   
     static const double maxFuel;
     
public:
    Vehicle();

    void startEngine();
    void stopEngine();
    void accelerate(double increment);
    void brake();
    void refuel(double amount);
    void displayStatus();

    // getters for AlertSystem
    double getSpeed() const;
    double getFuel() const;
    bool isEngineOn() const;
};

#endif