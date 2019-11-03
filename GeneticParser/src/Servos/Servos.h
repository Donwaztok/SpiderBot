#ifndef Servos_h
#define Servos_h

#include "..\ServoDriver\Adafruit_PWMServoDriver.h"
#include <Wire.h>

#define SERVOMIN  262 // this is the 'minimum' pulse length count (out of 4096)
#define SERVOMAX  488 // this is the 'maximum' pulse length count (out of 4096)

class Servos{
    public:
        Servos(int qtdServos);
        void Set(int Serv, int newPos);
    protected:
        void Update();
        Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();
        int qtdServo;
        int servoPos[];
};

#endif