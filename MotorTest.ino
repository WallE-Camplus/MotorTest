#include <Arduino.h>
#include "config.h"
#include "Motor.h"

Motor m1(M1_PWM, M1_IN1, M1_IN2);
Motor m2(M2_PWM, M2_IN1, M2_IN2);
Motor m3(M3_PWM, M3_IN1, M3_IN2);
Motor m4(M4_PWM, M4_IN1, M4_IN2);

void setup() {
  Serial.begin(9600);
  m1.begin();
  m2.begin();
  m3.begin();
  m4.begin();
}

void loop() {
  m1.go(255, false);
  m2.go(255, false);
  m3.go(255, false);
  m4.go(255, false);
  delay(3000);
  m1.stop();
  m2.stop();
  m3.stop();
  m4.stop();
  delay(3000);
  m1.go(255, true);
  m2.go(255, true);
  m3.go(255, true);
  m4.go(255, true);
  delay(3000);
  m1.stop();
  m2.stop();
  m3.stop();
  m4.stop();
  delay(3000);
}
