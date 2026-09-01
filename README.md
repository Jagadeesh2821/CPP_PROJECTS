# Smart Vehicle Control System (C++)

A menu-driven console application for simulating vehicle behavior, fuel usage, and safety alerts.

Features

- Start/stop engine
- Accelerate and brake
- Refuel vehicle
- View vehicle status
- Alert for overspeed and low fuel

Files

- `Vehicle.h` / `Vehicle.cpp` — vehicle state and actions
- `AlertSystem.h` / `AlertSystem.cpp` — alert checking logic
- `Main.cpp` — menu-driven console entry point

Build

```bash
g++ -Wall -Wextra -g Vehicle.cpp AlertSystem.cpp Main.cpp -o output/Hello.exe
```

Run

```bash
output\Hello.exe
```

This project is a C++ object-oriented vehicle monitoring system that works through a command-line menu interface.