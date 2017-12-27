#include <Wire.h>

// assign variables to pin numbers
const int buttonPin = 1;
const int LEDPin = 9;

// state variable
int buttonState = 0;

void setup() {
  // put your setup code here, to run once:
  // tell arduino what kind of pins they are
  pinMode(buttonPin, INPUT);
  pinMode(LEDPin, OUTPUT);

  // set up for debugging 
  Wire.begin();
  // set baud rate for serial communication
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  // check value of buttonPin
  buttonState =  digitalRead(buttonPin);

  // debugging statement
  Serial.print(buttonState);
  
  // logic to turn on and off the LED
  if (buttonState == HIGH){
    digitalWrite(LEDPin, HIGH);
  }
  else{
    digitalWrite(LEDPin, LOW);
  }
 
}
