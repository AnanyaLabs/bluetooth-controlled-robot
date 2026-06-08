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
