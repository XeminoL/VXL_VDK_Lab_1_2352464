# Exercise 8 — `setNumberOnClock()` Function

## Objective
Implement a function to **turn on a specific LED** on the clock face based on position (0–11).

## Function Signature
```c
void setNumberOnClock(int num);  // num: 0–11
```

## Mapping
| Input | GPIO Pin | Clock Position |
|-------|----------|----------------|
| 0 | PA4 | 12 o'clock |
| 1 | PA5 | 1 o'clock |
| 2 | PA6 | 2 o'clock |
| ... | ... | ... |
| 11 | PA15 | 11 o'clock |

> **Note:** This is a building-block function used in Exercise 10 for the full clock implementation.

## Files
| File | Description |
|------|-------------|
| `EXERCISE_8.c` | Source code with `setNumberOnClock()` |
