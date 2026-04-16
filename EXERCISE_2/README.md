# Exercise 2 — Single Traffic Light

## Objective
Simulate a traffic light cycle with 3 LEDs: **RED** (5s) → **YELLOW** (2s) → **GREEN** (3s).

## Circuit
- **LED-RED** → PA5
- **LED-YELLOW** → PA6
- **LED-GREEN** → PA7
- All controlled via negative pin (active-low)

## Timing Diagram
```
RED:    ████████████████░░░░░░░░░░░░░░░░░░
YELLOW: ░░░░░░░░░░░░░░░░████░░░░░░░░░░░░░░
GREEN:  ░░░░░░░░░░░░░░░░░░░░██████████████
        |---- 5s ----|--2s--|---- 3s ----|
```

## Files
| File | Description |
|------|-------------|
| `EXERCISE_2.c` | Source code |
| `EXERCISE_2.hex` | Compiled firmware |
| `EXERCISE_2.pdsprj` | Proteus project |
