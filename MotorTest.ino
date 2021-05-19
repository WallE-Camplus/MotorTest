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
  int a, b, c;

  while (!Serial.available());

  a = Serial.parseInt(); 
  b = Serial.parseInt();
  c = Serial.parseInt();

  switch(a) {
    case 1:
     movement.go(b, MAX_SPEED, c);
     break;
    case 2:
     movement.turn(b, MAX_SPEED, c);
  }
}
