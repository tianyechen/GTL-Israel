#include <pitches.h>
#include <Wire.h>
#include <ocarina.h>

const int out = 3;
const int button = 1;
const int LEDpin = 9;

void setup() {
  // set up pins
  pinMode(out, OUTPUT);
  pinMode(button, INPUT);
  pinMode(LEDpin, OUTPUT);

  // set up print for debugging
  Wire.begin();
  Serial.begin(115200);
}

void loop() {
  ocarina().outputToLED(LEDpin);
  delay(1000);
  ocarina().stopLED(LEDpin);
  delay(1000);
}
