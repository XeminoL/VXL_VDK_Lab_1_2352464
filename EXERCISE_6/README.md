# Exercise 6 — Analog Clock LED Layout

## Objective
Design a new Proteus schematic with **12 LEDs arranged in a clock shape** (positions 12, 1, 2, ..., 11) and implement a **sequential test program** to verify all connections.

## Circuit
- 12 LEDs connected to **PA4–PA15**
- PA4 → position 12 (top), PA5 → position 1, ..., PA15 → position 11

## Test Program Logic
```c
// Turn on each LED one by one in sequence
for (i = 4; i <= 15; i++) {
    // Turn off all LEDs
    for (j = 4; j <= 15; j++)
        HAL_GPIO_WritePin(GPIOA, (1U << j), GPIO_PIN_RESET);
    // Turn on current LED
    HAL_GPIO_WritePin(GPIOA, (1U << i), GPIO_PIN_SET);
    HAL_Delay(500);
}
```

## Files
| File | Description |
|------|-------------|
| `EXERCISE_6.c` | Source code with sequential LED test |
| `EXERCISE_6.hex` | Compiled firmware |
| `EXERCISE_6.pdsprj` | Proteus project with clock layout |
