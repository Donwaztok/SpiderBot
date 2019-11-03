#include "Servos.h"

Servos::Servos(int qtdServos){
	qtdServo = qtdServos;
	for(int i=0; i < qtdServo; i++){
		servoPos[i]=45;
	}
	Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();
}

void Servos::Set(int Serv, int newPos){
	servoPos[Serv] = newPos;
	Update(Serv);
}

void Servos::Update(int Serv){
	pwm.setPWM(Serv, 0, map(servoPos[Serv], 0, 90, SERVOMIN, SERVOMAX));
}