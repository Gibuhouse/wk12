/*
  DigitalReadSerial

  Reads a digital input on pin 2, prints the result to the Serial Monitor

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/DigitalReadSerial
*/

// digital pin 2 has a pushbutton attached to it. Give it a name:
const int buttonpin = 2;
const int ledpin = 13;
int buttonState = 0;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
 
  pinMode(ledpin, OUTPUT);
  pinMode(buttonpin, INPUT);
  digitalWrite(buttonpin,HIGH);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  int buttonState = digitalRead(buttonpin);
  if(buttonState==HIGH){
    digitalWrite(ledpin,HIGH);
    }
    else{
      digitalWrite(ledpin, LOW);
      }
  // print out the state of the button:
  Serial.println(buttonState);
  delay(1);        // delay in between reads for stability
}
