
/*
Code for the Phototransister: Captures lights and turns it into Letters
*/
class SignalRead
{

  public:
    SignalRead()
    {
       SensorPin = A0;
       SensorValue =0;
    }
    
    void readLight();
    char getDefinition(int d, int s);
    

  private:
    int SensorPin; 
    int d,s; // dot/dash (d) ; spaces (s)
    int SensorValue;
};




void SignalRead::readLight()
{

  SensorValue = analogRead(SensorPin); 
  //Serial.println(SensorValue);//output value
  
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

  Serial.print(getDefinition(d,s));
  s=d=0;
  delay(200);
}






char SignalRead::getDefinition(int d, int s)
{
  if(d==4 && s==10)
    return "a";
  if(d==6 && s==8)
    return "b";
  if(d==8 && s==6)
    return "c";
  if(d==5 && s==9)
    return "d";
  if(d==1 && s==13)
    return "e";
  if(d==2 && s==12)
    return "i";
  if(d==10 && s==4)
    return "j";
  if(d==7 && s==7)
    return "g";
  if(d==9 && s==5)
    return "o";
  if(d==3 && s==11)
    return "s";

}
