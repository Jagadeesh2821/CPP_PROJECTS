# Smart Vehicle Control System (C++)

A small, modular simulator that models basic vehicle behavior (engine on/off, acceleration, braking, refuelling) and monitors speed and fuel. The system prints real-time alerts for overspeed and low fuel and is organized for easy extension.

Summary

- Language: C++
- Purpose: Simulate vehicle state and demonstrate real-time monitoring and alerts
- Structure: Object-oriented `Vehicle` for state and `AlertSystem` for monitoring

Key features

- Monitor speed and fuel level in real time
- Alert on overspeed and low fuel conditions
- Clear separation of concerns to make adding new checks easy

Files

- `Vehicle.h` / `Vehicle.cpp`: Vehicle state and actions (start/stop engine, accelerate, brake, refuel)
- `AlertSystem.h` / `AlertSystem.cpp`: Alert rules and checks
- `Main.cpp`: Program entry that accepts interactive input and drives the simulation

Build

Compile with:

```bash
g++ -Wall -Wextra -g Vehicle.cpp AlertSystem.cpp Main.cpp -o output/Hello.exe
```

Run

Interactive run (recommended):

```bash
output\Hello.exe
```

Notes

- The program reads user choices from stdin (interactive menu). An `input.txt` file was removed — if you want automated runs, create a file with menu choices and run `output\Hello.exe < input.txt`.
- To extend the project, add new alert checks in `AlertSystem` or new vehicle behavior in `Vehicle`.

Contributing

- Open issues or pull requests. Small, focused changes are easiest to review.

License

- Add a `LICENSE` file to publish under your chosen license.