# Sequential LED Controller
Arduino sketch that steps multiple LEDs in sequence with adjustable timing.

## Demo
- Find in .media file

## Hardware
- Arduino UNO R3
- 5 LEDs + 5 220 Ω resistors
- Breadboard + jumper wires

## How to Run
1. Open `src/project1_sequential_lights/project1_sequential_lights.ino` in the Arduino IDE.
2. Select your board and COM port.
3. Click **Upload**.

## Features
- Remapping of joystick VRx to light up to 5 total LEDs, or little as 0 LEDs.
- Simple pin mapping for easy rewiring

## What I Learned
- State machine timing with `delay()`
- Organizing code for multiple outputs
- Using different functions related to different hardware

## Next Steps
- [ ] Slower/Delayed input of VRx in order to create smoother lighting effect.
- [ ] Use of VRx to light specific LEDs
- [ ] Creating a button to switch between lighting specific or multiple LEDs with VRx
