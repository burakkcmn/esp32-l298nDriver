#include <Arduino.h>
#include "MotorControl.h"

void setup() {
  Serial.begin(115200);
  Serial.print("Testing DC Motor...");

  setupMotor();
}

void loop() {
  moveForward();
  delay(2000);

  stopMotor();
  delay(1000);

  moveBackward();
  delay(2000);

  stopMotor();
  delay(1000);

  increaseSpeed();
}
