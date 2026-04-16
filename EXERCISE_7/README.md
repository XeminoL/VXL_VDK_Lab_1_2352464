# Exercise 7 — `clearAllClock()` Function

## Objective
Implement a helper function to **turn off all 12 clock LEDs** at once.

## Function Signature
```c
void clearAllClock(void);
```

## Implementation
Sets all GPIO pins PA4–PA15 to `GPIO_PIN_RESET`, turning off every LED in the clock display.

> **Note:** This is a building-block function used in Exercise 10 for the full clock implementation.

## Files
| File | Description |
|------|-------------|
| `EXERCISE_7.c` | Source code with `clearAllClock()` |
