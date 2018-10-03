//Variables
#include "Read.h"
#include "Write.h"

const int buttonPin1 = 2; // button Read 
const int buttonPin2 = 4;//
const int z =0;
int buttonR = 0; //initial value of Read button
int buttonW = 0;// initial Value of Write button
Write P; //button press
Read r;


void setup() {
    pinMode(Press.ledPin,OUTPUT);
    pinMode(buttonPin1,INPUT);
    pinMode(buttonPin2,INPUT);
    Serial.begin(9600); //sets serial port for communication
}


void loop() {
    buttonR = digitalRead(buttonPin1);
    buttonW = digitalRead(buttonPin2);

    if(buttonW == HIGH){
      digitalWrite(P.ledPin,HIGH);
    }else{
      return z;
    }
    
    if(buttonR == HIGH){
     r.readLight();
    }else{
     return z;
    }
}
