//Variables
int SensorPin = A0; // select the input pin for ldr
int SensorValue = 0; // variable to store the value coming from the sensor
int d, s; // dot/dash (d) ; spaces (s)

void setup() 
{
    Serial.begin(9600); //sets serial port for communication
}


void loop() 
{

    SensorValue = analogRead(SensorPin); // read the value from the sensor
    //Serial.println(SensorValue);//output value
    
    if(SensorValue > 15)// calculating the number of dots and dashes
    {
    
      for(int i=0;i<=13;i++)
      {
        SensorValue=analogRead(SensorPin);

        if(SensorValue > 10) 
        {
         d++; //calculating the number of dots and dashes in the character   
         delay(1000);// one second
        }
        else
        {
            s++; // calculating the number of spaces in dots and dashes
            delay(1000);//one second ;
        }

      }
    }

//Serial.print("a= "+a);
//Serial.println("f= "+f);
// Checking the set of dots, dashes and spaces
    Serial.print(findLetter(d,s));
   
    s=d=0;
    delay(200);
    
    
    
    //to test for correct translation uncomment the line below
    //runTest();

}

char findLetter(int d, int s)
{
    if(d==4 && s==10)
    {
      return "a";
    }
    if(d==6 && s==8)
    {
      return "b";
    }
    if(d==8 && s==6)
    {
      return "c";  
    }
    if(d==5 && s==9)
    {
      return "d";
    }
    if(d==1 && s==13)
    {
      return "e";
    }
    if(d==2 && s==12)
    {
      return "i";
    }
    if(d==10 && s==4)
    {
      return "j";
    }
    if(d==7 && s==7)
    {
      return "g";
    }
    if(d==9 && s==5)
    {
      return "o";
    }
    if(d==3 && s==11)
    {
      return "s";
    }
    
}

void runTest()
{
    if(findLetter(4,10)!='a')
        Serial.print("test failed at A\n");
    
    if(findLetter(6,8)!='b')
        Serial.print("test failed at B\n");
    
    if(findLetter(8,6)!='c')
        Serial.print("test failed at C\n");
    
    if(findLetter(5,9)!='d')
        Serial.print("test failed at D\n");
    
    if(findLetter(1,13)!='e')
        Serial.print("test failed at E\n");
    
    if(findLetter(7,7)!='g')
        Serial.print("test failed at G\n");
    
    if(findLetter(2,12)!='i')
        Serial.print("test failed at I\n");
    
    if(findLetter(10,4)!='j')
        Serial.print("test failed at J\n");
    
    if(findLetter(9,5)!='o')
        Serial.print("test failed at O\n");
    
    if(findLetter(3,111)!='s')
        Serial.print("test failed at S\n");
}
