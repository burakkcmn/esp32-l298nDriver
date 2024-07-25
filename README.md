# ESP32 DC Motor Control with L298N Motor Driver

This project demonstrates how to control a DC motor using an ESP32 and an L298N motor driver. The code is modularized to enhance readability and maintainability. 

## Project Structure

The project is divided into the following files:

- **main.cpp**: Contains the main program logic.
- **MotorControl.h**: Header file for motor control functions.
- **MotorControl.cpp**: Implementation of motor control functions.
- **PWMSetup.h**: Header file for PWM setup functions.
- **PWMSetup.cpp**: Implementation of PWM setup functions.

## Getting Started

### Prerequisites

To run this project, you will need the following:

- ESP32 development board
- L298N motor driver
- DC motor
- Jumper wires
- Arduino IDE or PlatformIO

### Installation

1. Clone this repository to your local machine:

   ```bash
   git clone https://github.com/yourusername/esp32-dc-motor-control.git
   cd esp32-dc-motor-control

2. Open the project in your preferred IDE (Arduino IDE or PlatformIO).

3. Ensure you have the necessary libraries installed. If using the Arduino IDE, make sure you have the ESP32 board manager installed.

### Wiring
Connect the components as follows:

- Motor A Pins on L298N:
    - IN1 -> GPIO 27
    - IN2 -> GPIO 26
    - ENA -> GPIO 14
- Power and Ground:
    - L298N VCC -> 5V (or 12V if your motor requires it)
    - L298N GND -> GND on ESP32
    - Motor Power Supply GND -> GND on ESP32

### Usage
Upload the code to your ESP32 and open the Serial Monitor to see the motor control in action. The motor will move forward, stop, move backward, stop, and then increase speed forward.

## Code Overview
### main.cpp
This file contains the main setup and loop functions. It initializes the motor setup and controls the motor by calling functions from MotorControl.

### MotorControl.h and MotorControl.cpp
These files define and implement functions to control the motor:

- setupMotor(): Initializes motor pins and configures PWM.
- moveForward(): Moves the motor forward.
- stopMotor(): Stops the motor.
- moveBackward(): Moves the motor backward.
- increaseSpeed(): Increases the motor speed gradually.

### PWMSetup.h and PWMSetup.cpp
These files define and implement functions to configure PWM:

- configurePWM(int pin): Configures PWM settings for a given pin.
- setPWMDutyCycle(int pin, int dutyCycle): Sets the PWM duty cycle for a given pin.

## License
This project is licensed under the MIT License - see the LICENSE file for details.