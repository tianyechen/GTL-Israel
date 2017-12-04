#include <ocarina.h>

///// INPUT FUNCTIONS /////

//button input
int ocarina::getButtonInput(int pin) {
	int stateButton;
	stateButton = digitalRead(pin);
	return stateButton;
}

//joystick input
int ocarina::getJoystickXInput(int xPin) {
	int x_value = analogRead(xPin);
	return x_value;
}

int ocarina::getJoystickYInput(int yPin) {
	int y_value = analogRead(yPin);
	return y_value;
}

///// OUTPUT FUNCTIONS /////

//speaker output
void ocarina::outputToSpeaker(int pin, int frequency) {
  tone(pin, frequency);
}

void ocarina::stopSpeaker(int pin) {
  noTone(pin);
}

//LED output
void ocarina::outputToLED(int pin)  {
  digitalWrite(pin, HIGH);
}

void ocarina::stopLED(int pin) {
  digitalWrite(pin, LOW);
}