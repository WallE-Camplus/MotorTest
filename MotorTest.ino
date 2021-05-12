#include <Arduino.h>
#include "config.h"
#include "Motor.h"
#include "Movement.h"

Movement movement;

void setup() {
  Serial.begin(9600);
  movement.begin();
}

void loop() {
  for(int i = 0; i < 4; i++) {
    movement.go(FORWARD,MAX_SPEED,5);
    movement.turn(LEFT,MAX_SPEED,2);
  }
}
