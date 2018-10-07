//Libraries
#include "includes.h"

//Variables
const int buttonPin1 = 2; // button Read 
const int z =0;
int buttonR = 0; //initial value of Read button
SignalRead r;


void setup() {
    pinMode(buttonPin1,INPUT);
    Serial.begin(9600); //sets serial port for communication
}


/*
 * Button functionality
 */
void loop() {
    buttonR = digitalRead(buttonPin1);
      
    if(buttonR == HIGH){
     r.readLight();
    }else{
     return z;
    }
}
