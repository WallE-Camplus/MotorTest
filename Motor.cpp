#include "Motor.h"

Motor::Motor(byte pwm, byte in1, byte in2) {
  this->pwm = pwm;
  this->in1 = in1;
  this->in2 = in2;
}

void Motor::begin() {
  pinMode(pwm, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
}

void Motor::go(int speed, bool invert) {
  analogWrite(pwm, speed);
  digitalWrite(in1, invert);
  digitalWrite(in2, !invert);
}

void Motor::stop() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
}
