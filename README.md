# 🔬 Microprocessors & Microcontrollers — Lab 1

> **STM32F103C6 GPIO Programming & Proteus Simulation**

| | |
|---|---|
| **Student** | Dang Thai Khang — 2352464 |
| **Course** | C03010 — CC02 |
| **Institution** | Ho Chi Minh University of Technology (HCMUT) |
| **Lecturer** | Phan Van Sy |
| **Semester** | 2025 |

---

## 📌 Overview

This lab covers the fundamentals of **GPIO output control** on the **STM32F103C6** microcontroller using the **HAL library**, with all circuits simulated in **Proteus Design Suite**. The exercises progressively build from basic LED blinking to a fully functional **analog clock simulation** using 12 LEDs.

### Tech Stack

- **MCU:** STM32F103C6 (ARM Cortex-M3)
- **IDE:** STM32CubeIDE (HAL Library)
- **Simulation:** Proteus 8
- **Language:** C

---

## 📂 Repository Structure

```
VXL_VDK_Lab_1_2352464/
├── EXERCISE_1/          # LED Blinking (2 LEDs alternating)
│   ├── EXERCISE_1.c     # Source code
│   ├── EXERCISE_1.hex   # Compiled firmware
│   └── EXERCISE_1.pdsprj # Proteus project
├── EXERCISE_2/          # Single Traffic Light (RED → YELLOW → GREEN)
├── EXERCISE_3/          # 4-Way Traffic Light (12 LEDs)
├── EXERCISE_4/          # 7-Segment Display Driver
├── EXERCISE_5/          # 4-Way Traffic Light + 7SEG Countdown
├── EXERCISE_6/          # Analog Clock LED Layout + Sequential Test
├── EXERCISE_7/          # Helper: clearAllClock()
├── EXERCISE_8/          # Helper: setNumberOnClock()
├── EXERCISE_9/          # Helper: clearNumberOnClock()
└── EXERCISE_10/         # Full Analog Clock (Hours + Minutes + Seconds)
```

Each folder contains:
| File | Description |
|------|-------------|
| `*.c` | Main source code (C, HAL library) |
| `*.hex` | Pre-compiled firmware for Proteus simulation |
| `*.pdsprj` | Proteus schematic & simulation project |

---

## 🧪 Exercise Breakdown

### Part 1 — LED & Traffic Light Control

| # | Exercise | Description | GPIO Pins | Key Concepts |
|---|----------|-------------|-----------|--------------|
| 1 | **LED Blinking** | Alternate 2 LEDs (RED & YELLOW) every 2s | PA5, PA6 | `HAL_GPIO_WritePin`, `HAL_Delay` |
| 2 | **Traffic Light** | Simulate single traffic light cycle: RED (5s) → YELLOW (2s) → GREEN (3s) | PA5–PA7 | Sequential GPIO control |
| 3 | **4-Way Traffic Light** | 12 LEDs arranged in 4 directions (N/S/E/W), synchronized phases | PA0–PA11 | Multi-pin coordination |

### Part 2 — 7-Segment Display Integration

| # | Exercise | Description | GPIO Pins | Key Concepts |
|---|----------|-------------|-----------|--------------|
| 4 | **7SEG Driver** | Implement `display7SEG()` function for common-anode 7-segment | PB0–PB6 | Segment encoding, bitmask |
| 5 | **Traffic Light + Countdown** | Combine 4-way traffic light with 7SEG countdown timer | PA + PB | System integration |

### Part 3 — Analog Clock Simulation

| # | Exercise | Description | GPIO Pins | Key Concepts |
|---|----------|-------------|-----------|--------------|
| 6 | **Clock Layout Test** | 12 LEDs in clock arrangement, sequential test program | PA4–PA15 | Loop-based GPIO, bit shifting |
| 7 | **`clearAllClock()`** | Turn off all 12 clock LEDs | PA4–PA15 | Function abstraction |
| 8 | **`setNumberOnClock()`** | Turn on LED at position 0–11 | PA4–PA15 | Switch-case pattern |
| 9 | **`clearNumberOnClock()`** | Turn off LED at position 0–11 | PA4–PA15 | Switch-case pattern |
| 10 | **Full Analog Clock** | Display hour/minute/second hands using 3 LEDs simultaneously | PA4–PA15 | Time tracking, modular design |

---

## ⚙️ How to Run

### Option 1: Proteus Simulation (Recommended)

1. Open the `.pdsprj` file in **Proteus 8+**
2. Double-click the STM32 component → load the corresponding `.hex` file
3. Click **Run** to start the simulation

### Option 2: Flash to Hardware

1. Open `.c` file in **STM32CubeIDE**
2. Create a new STM32F103C6 project and replace `main.c`
3. Configure GPIO pins as shown in the schematics
4. Build and flash via ST-Link

---

## 📝 Key Implementation Details

### 7-Segment Encoding (Common Anode)

The `display7SEG()` function uses a lookup table with active-low logic:

```
Digit:  0    1    2    3    4    5    6    7    8    9
Code: 0x40 0x79 0x24 0x30 0x19 0x12 0x02 0x78 0x00 0x10
```

### Analog Clock Logic (Exercise 10)

The clock maps time to 12 LED positions:
- **Second hand:** `(seconds / 5) % 12` — updates every 5 seconds
- **Minute hand:** `(minutes / 5) % 12` — updates every 5 minutes
- **Hour hand:** `hours % 12` — updates every hour

---

## 📄 Report

The full lab report (PDF) with schematics, source code, and explanations is available in the course submission.

---

## 📜 License

This project is developed for educational purposes as part of the Microprocessors & Microcontrollers course at HCMUT.
