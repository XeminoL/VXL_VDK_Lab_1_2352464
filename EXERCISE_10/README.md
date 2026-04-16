# Exercise 10 — Full Analog Clock

## Objective
Integrate all helper functions from Exercises 7–9 to build a complete **analog clock simulation** using 12 LEDs. At any given time, **3 LEDs** are lit representing the hour, minute, and second hands.

## How It Works

### Time → LED Position Mapping
```
Second hand:  secPos  = (seconds / 5) % 12
Minute hand:  minPos  = (minutes / 5) % 12
Hour hand:    hourPos = hours % 12
```

### Main Loop
```
1. Calculate positions for hour, minute, second
2. clearAllClock()          → turn off all LEDs
3. setNumberOnClock(hour)   → light hour hand
4. setNumberOnClock(minute) → light minute hand
5. setNumberOnClock(second) → light second hand
6. HAL_Delay(100)           → wait
7. Increment seconds → minutes → hours
```

### Clock Face Layout
```
        [12]
     11      1
   10          2
   9            3
     8        4
       7    5
        [6]
```

## Functions Used
| Function | Source | Purpose |
|----------|--------|---------|
| `clearAllClock()` | Ex. 7 | Reset all LEDs |
| `setNumberOnClock()` | Ex. 8 | Light specific LED |
| `clearNumberOnClock()` | Ex. 9 | Turn off specific LED |

## Files
| File | Description |
|------|-------------|
| `EXERCISE_10.c` | Full source code |
| `EXERCISE_10.hex` | Compiled firmware |
| `EXERCISE_10.pdsprj` | Proteus simulation project |
