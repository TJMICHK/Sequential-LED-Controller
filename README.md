# Sequential LED Controller
Arduino sketch that steps multiple LEDs in sequence with adjustable timing.

## Demo
(Short GIF or video link)

## Hardware
- Arduino UNO R3 (edit if different)
- N× LEDs + N× 220 Ω resistors
- Breadboard + jumper wires

## How to Run
1. Open `src/sketch.ino` in the Arduino IDE.
2. Select your board and COM port.
3. Click **Upload**.

## Features
- Non-blocking timing with `millis()`
- Simple pin mapping for easy rewiring

## What I Learned
- State machine timing with `millis()`
- Organizing code for multiple outputs

## Next Steps
- [ ] Reverse/bounce mode
- [ ] Button to change speed
- [ ] Brightness ramping
