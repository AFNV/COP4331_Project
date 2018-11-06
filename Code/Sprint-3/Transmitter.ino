//Libraries
#include "includes.h"
#include "LiquidCrystal.h"
//Variables
const int buttonPin1 = 2; // button Read 
const int z =0;
int buttonR = 0; //initial value of Read button
const int rs = 12, en = 11, d4 = 6, d5 = 5, d6 = 4, d7 = 3;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
SignalRead r;


void setup() {
    pinMode(buttonPin1,INPUT);
    lcd.begin(16, 2);
    Serial.begin(9600); //sets serial port for communication
}


/*
 * Button functionality
 */
void loop() {
  
    buttonR = digitalRead(buttonPin1);
    if(buttonR == HIGH){
     r.readLight();
     lcd.print(r.getInputString());
    }else{
     return z;
    }

   
}
