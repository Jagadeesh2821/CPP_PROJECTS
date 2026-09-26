#ifndef ALERTSYSTEM_H
#define ALERTSYSTEM_H

class Vehicle;  // forward declaration

class AlertSystem
{
public:
    void checkAllAlerts(const Vehicle& v);

private:
    void checkSpeed(const Vehicle& v);
    void checkFuel(const Vehicle& v);
    void checkEngine(const Vehicle& v);
};

#endif