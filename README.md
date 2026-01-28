# Solar Panel Cleaning Robot Prototype (Part-2) 

Portfolio project showcasing an Arduino-based system for **monitoring** and **supporting automation** in a solar panel cleaning robot setup.

This repository includes:

- **Firmware** (Arduino sketch)
- **Wiring / schematics** (Fritzing + exported diagrams + PDF)
- **Documentation** (BOM + pin map + upload steps)

## Demo

- YouTube demo: `https://www.youtube.com/watch?v=_W2VIY11E64`

## Key features

- Live **temperature** + **humidity** (DHT11)
- Live **current** sensing (ACS712, analog)
- Live **voltage** sensing (analog voltage sensor/divider)
- **16x4 LCD** display of all readings

## Schematics / wiring

- Fritzing source: [`Fritzing/Solar Panel Cleaner Schematic.fzz`](./Fritzing/Solar%20Panel%20Cleaner%20Schematic.fzz)
- Wiring diagram (PNG): [`media/Solar-Schematic2.png`](./media/Solar-Schematic2.png)

## Project overview

Solar panels lose efficiency when dust, dirt, or residue builds up. This project demonstrates a prototype system that can be integrated into a cleaning robot to:

- Monitor environmental conditions (temperature/humidity)
- Monitor electrical conditions (voltage/current)
- Present the data locally on an LCD for quick debugging and demonstrations

> Note: The included sketch focuses on **sensing + display**. The wiring diagrams also show motors/pump/driver modules used in the overall prototype setup.

## Hardware (from diagrams + code)

- **Arduino Mega 2560** (pins used include 28–34, A0, A1)
- **DHT11** temperature/humidity sensor (digital pin `34`)
- **ACS712** current sensor (analog `A0`)
- **Voltage sensor** / divider module (analog `A1`)
- **16x4 LCD** wired in parallel mode  
  `rs=28, en=29, d4=30, d5=31, d6=32, d7=33`
- Power system shown in the schematic images:
  - Solar panel → PWM charge controller → 12V battery
  - Loads (motors/pump/light) powered from controller/battery via drivers/relays

## Firmware

The Arduino sketch is currently located here:

- [`Final_Coding/Final_Coding.ino`](./Final_Coding/Final_Coding.ino)

### Libraries

- `LiquidCrystal` (Arduino built-in)
- `dht` library (commonly installed as “DHT sensor library” / `dht.h`)

### Build / Upload

1. Open `Final_Coding/Final_Coding.ino` in the Arduino IDE.
2. Select **Board → Arduino Mega 2560**.
3. Select the correct **Port**.
4. Install the required `dht` library if missing.
5. Upload.

## Documentation

- Bill of Materials: [`docs/BOM.md`](./docs/BOM.md)
- Wiring / pin map: [`docs/WIRING.md`](./docs/WIRING.md)

## Folder structure

- `Final_Coding/` — Arduino firmware (sketch)
- `docs/` — project documentation (BOM, wiring notes, pin map)
- `Fritzing/` — Fritzing schematic/source files
- `media/` — images for this project page

## License

MIT — see [`LICENSE`](./LICENSE).

## Repo layout

## Credits

If this work is based on a tutorial/paper/course, add it here so others can trace the source.


