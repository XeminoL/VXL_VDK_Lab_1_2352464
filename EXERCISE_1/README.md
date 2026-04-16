# Exercise 1 — LED Blinking

## Objective
Connect an additional LED (YELLOW) to pin **PA6** and alternate it with the existing RED LED every **2 seconds**.

## Circuit
- **LED-RED** → PA5 (negative pin)
- **LED-YELLOW** → PA6 (negative pin)
- Both LEDs are active-low (GPIO_PIN_RESET = ON)

## Behavior
| Time (s) | RED | YELLOW |
|----------|-----|--------|
| 0–2 | ON | OFF |
| 2–4 | OFF | ON |
| 4–6 | ON | OFF |
| ... | ... | ... |

## Files
| File | Description |
|------|-------------|
| `EXERCISE_1.c` | Source code with HAL GPIO control |
| `EXERCISE_1.hex` | Compiled firmware |
| `EXERCISE_1.pdsprj` | Proteus simulation project |
