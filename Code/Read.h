#include "arduino.h"


/*
Code for the Phototransister: Captures lights and turns it into Letters
*/
 class Read{

  public:
    int SensorPin = A0; 
    int d,s; // dot/dash (d) ; spaces (s)
    int SensorValue =0;

    void readLight(){
   
      SensorValue = analogRead(SensorPin); 
    Serial.println(SensorValue);//output value
    
    if(SensorValue > 15)// calculating the number of dots and dashes
  {
    
  for(int i=0;i<=13;i++)
  {
    SensorValue=analogRead(SensorPin);
   
    if(SensorValue > 10) 
    {
     d++;//calculating the number of dots and dashes in the character   
     delay(1000);// one second
    }
  else
  {
    s++; // calculating the number of spaces in dots and dashes
   delay(1000);//one second ;
  }
  
  }
}

 
if(d==4 && s==10)
{
  Serial.print("a");
}
if(d==6 && s==8)
{
  Serial.print("b");
}
if(d==8 && s==6)
{
  Serial.print("c");  
}
if(d==5 && s==9)
{
  Serial.print("d");
}
if(d==1 && s==13)
{
  Serial.print("e");
}
if(d==2 && s==12)
{
  Serial.print("i");
}
if(d==10 && s==4)
{
  Serial.print("j");
}
if(d==7 && s==7)
{
  Serial.print("g");
}
if(d==9 && s==5)
{
  Serial.print("o");
}
if(d==3 && s==11)
{
  Serial.print("s");
}
s=d=0;
delay(200);
}
};
