# Wiring / Pin map

This project is wired around an **Arduino Mega 2560** (the firmware uses pins 28–34, which are Mega-only).

## Pin map (from `Final_Coding/Final_Coding.ino`)

### LCD (16x4, parallel)

- `rs = 28`
- `en = 29`
- `d4 = 30`
- `d5 = 31`
- `d6 = 32`
- `d7 = 33`

### DHT11

- Signal: `D34`
- Power: `5V`
- GND: `GND`

### Current sensor (ACS712)

- Output: `A0`
- Power: `5V`
- GND: `GND`

### Voltage sensor (divider / module)

- Output: `A1`
- Power/GND per your module design

## Reference diagrams

- Fritzing source: [`../Fritzing/Solar Panel Cleaner Schematic.fzz`](../Fritzing/Solar%20Panel%20Cleaner%20Schematic.fzz)
- Wiring diagram (PNG): [`../media/Solar-Schematic2.png`](../media/Solar-Schematic2.png)

