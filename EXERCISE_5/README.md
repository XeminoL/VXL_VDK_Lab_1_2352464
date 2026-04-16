# Exercise 5 — 4-Way Traffic Light + 7SEG Countdown

## Objective
Integrate the **7-segment display** from Exercise 4 into the **4-way traffic light** from Exercise 3, showing a **countdown timer** for each phase.

## Behavior
| Phase | N/S | E/W | 7SEG Display | Duration |
|-------|-----|-----|-------------|----------|
| 1 | 🔴 RED | 🟢 GREEN | 3 → 2 → 1 | 3s |
| 2 | 🔴 RED | 🟡 YELLOW | 2 → 1 | 2s |
| 3 | 🟢 GREEN | 🔴 RED | 3 → 2 → 1 | 3s |
| 4 | 🟡 YELLOW | 🔴 RED | 2 → 1 | 2s |

## Key Implementation
- Reuses `display7SEG()` from Exercise 4
- Countdown loop: `while(countdown > 0) { display7SEG(countdown--); HAL_Delay(1000); }`

## Files
| File | Description |
|------|-------------|
| `EXERCISE_5.c` | Source code |
| `EXERCISE_5.hex` | Compiled firmware |
| `EXERCISE_5.pdsprj` | Proteus project |
