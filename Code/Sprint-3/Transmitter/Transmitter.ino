/*OPT3001_Backlight Example
In this example, we will read LUX readings from the OPT3001 and will use that to
modulate a PWM that controls an LED backlight to an LCD. LUX readings are also sent
to the serial monitor.

Created by Adrian Fernandez & Dung Dang, Dec 2013
Released to public domain.
*/

#include <Wire.h>			// Needed by Energia for Tiva C LaunchPad 
#include "OPT3001.h"
#include "signalread.h"

#define USE_USCI_B1 
opt3001 opt3001;

SignalRead* r;
SignalWrite* w;

const uint8_t ledGreen =  38;      // the number of the LED pin
const uint8_t ledBlue =  37;      // the number of the LED pin
const uint8_t whiteLED =  18;
const uint8_t button =  33;
unsigned long reading;

int buttonOneState = 0; 

String text;



void setup()
{
  // initialize the LED pins as  output:
  pinMode(ledGreen, OUTPUT);     
  pinMode(ledBlue, OUTPUT); 
  pinMode(whiteLED, OUTPUT);  
  pinMode(button, INPUT_PULLUP);  

  digitalWrite(whiteLED, LOW);
  digitalWrite(ledBlue, LOW);
  digitalWrite(ledGreen, LOW);

  
 
  Serial.begin(115200);
  delay(1000); 
  opt3001.begin(); 
  Serial.println("OPT3001 Initialized!");

  r = new SignalRead();
  w = new SignalWrite(37);  
}

void loop()
{
  Serial.println("\nPlease enter message: ");
  
  while (Serial.available() == 0) {}
  
  text = Serial.readString();
  
  char *cstr = new char[text.length() + 1];
  strcpy(cstr, text.c_str());
  
  
  Serial.println("\nPress Button To Send");
 
  buttonOneState = digitalRead(button);
  
  while(buttonOneState == HIGH)
  {
    buttonOneState = digitalRead(button);
  }
  
  Serial.println("\nSending Message...");
  
  w->codeText(cstr, text.length()-1);
  
  Serial.println("\nMessage Sent!");

  delete [] cstr;
}


