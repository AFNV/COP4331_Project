//Libraries
#include "includes.h"
#include "LiquidCrystal.h"
//Variables

const int z = 0;
const int rs = 12, en = 11, d4 = 6, d5 = 5, d6 = 4, d7 = 3;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
SignalRead r;


void setup() {
         
    SignalRead* r = new SignalRead();
    lcd.begin(16, 2);
    Serial.begin(9600); //sets serial port for communication
}


/*
 * Button functionality
 */
void loop() {
          r.readLight();
          if(r.getChar() != '_')
          {
            lcd.print(r.getChar());
          }
}
