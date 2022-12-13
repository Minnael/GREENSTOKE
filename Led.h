#ifndef LED_H
#define LED_H

#include "Pinagem.h"

class Led {
	private:
	    const int pinoLed;

	public:
	    Led(const int pin):pinoLed(pin){}

	    void ligar()const{
			pinMode(pinoLed, OUTPUT);
			digitalWrite(pinoLed, HIGH);
		}

	    void desligar()const{
			pinMode(pinoLed, OUTPUT);
			digitalWrite(pinoLed, LOW);
		}
};

#endif