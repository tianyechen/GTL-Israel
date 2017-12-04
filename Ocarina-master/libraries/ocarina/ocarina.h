#ifndef OCARINA_h
#define OCARINA_h

#include "Arduino.h" 
#include <Wire.h>
#include <pitches.h>

class ocarina {
  public:
  	int getButtonInput(int pin);
  	int getJoystickXInput(int xPin);
  	int getJoystickYInput(int yPin);
  	void outputToSpeaker(int pin, int frequency); 
  	void stopSpeaker(int pin);
  	void outputToLED(int pin);
  	void stopLED(int pin);
  	/*
  	void outputToLEDRGB(int pin);
  	void stopLEDRGB(int pin);
  	*/
};
#endif