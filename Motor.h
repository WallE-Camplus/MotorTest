#ifndef MOTOR_H
#define MOTOR_H

#include <Arduino.h>

class Motor {
  public:
    Motor(byte pwm, byte in1, byte in2);
    void go(int speed, bool invert);
    void stop();
    void begin();
  private:
    byte pwm, in1, in2;
};

#endif
