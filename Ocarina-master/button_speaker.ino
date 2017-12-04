#include <pitches.h>
#include <Wire.h>
#include <ocarina.h>

const int out = 3;
const int button = 1;

void setup() {
  // set up pins
  pinMode(out, OUTPUT);
  pinMode(button, INPUT);

  // set up print for debugging
  Wire.begin();
  Serial.begin(115200);
}

void loop() {
  int buttonOutput;
  buttonOutput = ocarina().getButtonInput(button);
  if (buttonOutput == LOW) {
    ocarina().outputToSpeaker(out, NOTE_D6);
  }
  else {
    ocarina().stopSpeaker(out);
  }
}
