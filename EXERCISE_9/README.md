# Exercise 9 — `clearNumberOnClock()` Function

## Objective
Implement a function to **turn off a specific LED** on the clock face based on position (0–11).

## Function Signature
```c
void clearNumberOnClock(int num);  // num: 0–11
```

## Mapping
| Input | GPIO Pin | Action |
|-------|----------|--------|
| 0 | PA4 | Turn OFF 12 o'clock LED |
| 1 | PA5 | Turn OFF 1 o'clock LED |
| ... | ... | ... |
| 11 | PA15 | Turn OFF 11 o'clock LED |

> **Note:** This is a building-block function used in Exercise 10 for the full clock implementation.

## Files
| File | Description |
|------|-------------|
| `EXERCISE_9.c` | Source code with `clearNumberOnClock()` |
