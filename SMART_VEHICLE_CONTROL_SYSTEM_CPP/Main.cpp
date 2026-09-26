#include <iostream>
#include "Vehicle.h"
#include "AlertSystem.h"
#include <limits>

using namespace std;

 bool isValidPositiveNumber(double value)
    {
        if (cin.fail() || value <= 0)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input! Enter positive number.\n";
            return false;
        }
        return true;
    }

int main()
{
    Vehicle myCar;
    AlertSystem alert;

    int choice;
    double value;


    while (true)
    {
        cout << "\n===== SMART VEHICLE SYSTEM =====\n";
        cout << "1. Start Engine\n";
        cout << "2. Stop Engine\n";
        cout << "3. Accelerate\n";
        cout << "4. Brake\n";
        cout << "5. Refuel\n";
        cout << "6. Show Status\n";
        cout << "7. Exit\n";

   cout << "Enter your choice: ";

    while (!(cin >> choice))
    {
        cout << "Invalid input! Enter a number (1-7): ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

        switch (choice)
        {
        case 1:
            myCar.startEngine();
            break;

        case 2:
            myCar.stopEngine();
            break;

        case 3:
            if (!myCar.isEngineOn())
            {
                cout << "Cannot accelerate. Engine is off." << endl;
                break;
            }

            cout << "Enter speed increment: ";
            cin >> value;

            if (!isValidPositiveNumber(value))
                continue;

            myCar.accelerate(value);
            break;

        case 4:
            myCar.brake();
            break;

        case 5:
            cout << "Enter fuel amount: ";
            cin >> value;
            if (!isValidPositiveNumber(value))
                continue;

            myCar.refuel(value);
            break;

        case 6:
            myCar.displayStatus();
            break;

        case 7:
            cout << "Exiting system...\n";
            return 0;

        default:
            cout << "Invalid choice\n";
        }

        //  ALERT SYSTEM
       alert.checkAllAlerts(myCar);
    }
    return 0;
}