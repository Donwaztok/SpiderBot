#include <Arduino.h>

#include <Narcoleptic.h>
#include "Servos/Servos.h"

Servos servos = Servos(1);

void setup(){
	Serial.begin(9600);

	//pwm.begin();
	//pwm.setPWMFreq(60);  // Analog servos run at ~60 Hz updates

	delay(100);	
}

void loop(){

	int newPos = 90;

	//servoPos[0] = newPos;
	uint16_t pulselen = map(newPos, 0, 90, SERVOMIN, SERVOMAX);
	//pwm.setPWM(0, 0, pulselen);
	Narcoleptic.delay(500);

	newPos = 0;
	//servoPos[0] = newPos;
	pulselen = map(newPos, 0, 90, SERVOMIN, SERVOMAX);
	//pwm.setPWM(0, 0, pulselen);
	
	Narcoleptic.delay(2000);
}