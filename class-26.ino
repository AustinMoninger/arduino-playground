/*
  Button
 
 Turns on and off a light emitting diode(LED) connected to digital  
 pin 13, when pressing a pushbutton attached to pin 7. 
 
 
 The circuit:
 * LED attached from pin 13 to ground 
 * pushbutton attached to pin 2 from +5V
 * 10K resistor attached to pin 2 from ground
 
 * Note: on most Arduinos there is already an LED on the board
 attached to pin 13.
 
 
 created 2005
 by DojoDave 
 modified 17 Jun 2009
 by Tom Igoe
 
  http://www.arduino.cc/en/Tutorial/Button
 */

int ledPin = 13; // choose the pin for the LED 
int inputPin1 = 3; // button 1 
int inputPin2 = 2; // button 2 
  
void setup() { 
  pinMode(ledPin, OUTPUT); // declare LED as output 
  pinMode(inputPin1, INPUT); // make button 1 an input 
  pinMode(inputPin2, INPUT); // make button 2 an input 
} 
  
void loop(){ 
  if (digitalRead(inputPin1) == LOW) { 
    digitalWrite(ledPin, LOW); // turn LED OFF 
  } else if (digitalRead(inputPin2) == LOW) { 
    digitalWrite(ledPin, HIGH); // turn LED ON 
  } 
} 
