# Smart Vehicle Control System (C++)

A simple C++ project for simulating vehicle behavior, fuel usage, and safety alerts.

Features

- Start/stop engine
- Accelerate and brake
- Refuel vehicle
- Show current vehicle status
- Warn for overspeed and low fuel

Files

- `Vehicle.h` / `Vehicle.cpp` — vehicle state and actions
- `AlertSystem.h` / `AlertSystem.cpp` — alert checking logic
- `Main.cpp` — menu-driven program entry point

Build

```bash
g++ -Wall -Wextra -g Vehicle.cpp AlertSystem.cpp Main.cpp -o output/Hello.exe
```

Run

```bash
output\Hello.exe
```

This project is a small vehicle monitoring and alert system built using C++ and object-oriented programming.