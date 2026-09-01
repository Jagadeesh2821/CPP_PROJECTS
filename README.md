# CPP Projects

Smart Vehicle Control System (C++)

This project implements a modular simulator that models a vehicle's core behaviour (engine, acceleration, braking, refuelling) and monitors speed and fuel in real time. The system raises alerts for overspeed and low-fuel conditions and is designed for easy extension using object-oriented principles.

Key features

- Real-time monitoring of speed and fuel levels.
- Alerts for overspeed and low fuel conditions.
- Clean separation of vehicle state (`Vehicle`) and monitoring logic (`AlertSystem`) for easy extension.

Main files

- Vehicle.cpp / Vehicle.h — vehicle state and operations (accelerate, brake, refuel).
- AlertSystem.cpp / AlertSystem.h — checks thresholds and emits alerts.
- Main.cpp — program entry point; drives the simulation using `input.txt` as an example input stream.
- input.txt — sample input to simulate signals.

Build and run

1. Build:

```bash
g++ -Wall -Wextra -g Vehicle.cpp AlertSystem.cpp Main.cpp -o output/Hello.exe
```

2. Run:

```bash
output\Hello.exe
```

Quick example

The program reads signals from `input.txt` (or standard input), updates the `Vehicle`, and the `AlertSystem` prints alerts when thresholds are crossed. To change thresholds or behavior, edit `AlertSystem` or add new watchers.

Contributing

Open a PR or create an issue to suggest improvements. The design favors small, focused changes: add new sensors or alert rules by extending `AlertSystem` or adding methods to `Vehicle`.

License

Add a license file if you want to publish this project publicly.