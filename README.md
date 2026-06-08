# Bluetooth Controlled Robot Using Arduino

## Project Image

(Project image will be added soon.)

## Project Overview

This project demonstrates how a robot can be controlled wirelessly using Bluetooth communication.

The robot receives commands from a smartphone through a Bluetooth module and performs movements such as forward, backward, left, and right.

## Learning Objectives

- Understand Bluetooth communication.
- Learn wireless robot control.
- Explore Arduino motor control.
- Build a smartphone-controlled robot.

## Components Required

| Component | Quantity |
|------------|----------|
| Arduino UNO | 1 |
| HC-05 Bluetooth Module | 1 |
| L293D Motor Driver | 1 |
| DC Motors | 2 |
| Wheels | 2 |
| Robot Chassis | 1 |
| Battery Pack | 1 |
| Jumper Wires | As Required |

## Working Principle

1. The smartphone sends commands through Bluetooth.
2. The HC-05 module receives the commands.
3. Arduino processes the received data.
4. Motors move according to the selected direction.
5. The robot responds in real time.

## Circuit Connections

- HC-05 TX → Arduino RX
- HC-05 RX → Arduino TX
- Motor Driver IN1 → Pin 5
- Motor Driver IN2 → Pin 6
- Motor Driver IN3 → Pin 7
- Motor Driver IN4 → Pin 8

## Arduino Code

```cpp
char command;

void setup() {
  Serial.begin(9600);
}

void loop() {

  if (Serial.available()) {

    command = Serial.read();

    if(command == 'F') {
      // Forward
    }

    if(command == 'B') {
      // Backward
    }

    if(command == 'L') {
      // Left
    }

    if(command == 'R') {
      // Right
    }

    if(command == 'S') {
      // Stop
    }
  }
}
```

## Applications

- Mobile-controlled robots
- Educational robotics
- Remote navigation systems
- Wireless automation

## Future Improvements

- Voice control
- IoT integration
- GPS navigation
- Camera streaming

## Author

AnanyaLabs
