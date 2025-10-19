# Sequential LED Controller w/ LED Level Detector
Arduino sketch that steps multiple LEDs in sequence with adjustable timing, and responds if LED Levels are above or below a set value.

## Demo
- Find in .media file

## Hardware
- Arduino UNO R3 (edit if different)
- 7 LEDs + 8 220 Ω resistors
- Piezo Passive Buzzer
- KY-023 Analog Joystick Module
- Breadboard + jumper wires

## How to Run
1. Open `src/project1_sequential_lights.ino` in the Arduino IDE.
2. Select your board and COM port.
3. Click **Upload**.

## Features
- Remapping of joystick VRx to light up to 5 total LEDs, or little as 0 LEDs.
- Simple pin mapping for easy rewiring
- Piezo Passive Buzzer + 2 LEDs to alarm when LED levels cross a specific threshold.
