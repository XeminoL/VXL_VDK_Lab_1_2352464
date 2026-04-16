# Exercise 3 — 4-Way Traffic Light

## Objective
Extend to a full **4-direction intersection** traffic light using **12 LEDs** (3 per direction: RED, YELLOW, GREEN).

## Circuit
12 LEDs connected to PA0–PA11, arranged in 4 groups:
- **North:** RED_N, YEL_N, GRN_N
- **South:** RED_S, YEL_S, GRN_S
- **East:** RED_E, YEL_E, GRN_E
- **West:** RED_W, YEL_W, GRN_W

## Traffic Phases
| Phase | N/S | E/W | Duration |
|-------|-----|-----|----------|
| 1 | 🔴 RED | 🟢 GREEN | 3s |
| 2 | 🔴 RED | 🟡 YELLOW | 2s |
| 3 | 🟢 GREEN | 🔴 RED | 3s |
| 4 | 🟡 YELLOW | 🔴 RED | 3s |

## Files
| File | Description |
|------|-------------|
| `EXERCISE_3.c` | Source code |
| `EXERCISE_3.hex` | Compiled firmware |
| `EXERCISE_3.pdsbak` | Proteus project backup |
