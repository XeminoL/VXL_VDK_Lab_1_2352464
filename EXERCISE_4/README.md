# Exercise 4 — 7-Segment Display Driver

## Objective
Implement a `display7SEG(int num)` function to drive a **common-anode 7-segment display** connected to PB0–PB6.

## Circuit
- **7SEG-COM-ANODE** component
- Common pin → VCC (3.3V)
- Segments A–G → PB0–PB6
- Active-low: logic 0 turns ON a segment

## Segment Encoding Table
| Digit | Binary (gfedcba) | Hex |
|-------|-------------------|-----|
| 0 | `0b1000000` | 0x40 |
| 1 | `0b1111001` | 0x79 |
| 2 | `0b0100100` | 0x24 |
| 3 | `0b0110000` | 0x30 |
| 4 | `0b0011001` | 0x19 |
| 5 | `0b0010010` | 0x12 |
| 6 | `0b0000010` | 0x02 |
| 7 | `0b1111000` | 0x78 |
| 8 | `0b0000000` | 0x00 |
| 9 | `0b0010000` | 0x10 |

## Files
| File | Description |
|------|-------------|
| `EXERCISE_4.c` | Source code with `display7SEG()` |
| `EXERCISE_4.hex` | Compiled firmware |
| `EXERCISE_4.pdsprj` | Proteus project |
