//Variables
int SensorPin = A0; // select the input pin for ldr
int SensorValue = 0; // variable to store the value coming from the sensor
int d,s; // dot/dash (d) ; spaces (s)
const int buttonPin1 = 2; // button Read 
const int buttonPin2 = 4;//
const int ledPin = 13; // LED light pin
int buttonR = 0; //initial value of Read button
int buttonW = 0;// initial Value of Write button


void setup() {
    pinMode(ledPin,OUTPUT);
    pinMode(buttonPin1,INPUT);
    pinMode(buttonPin2,INPUT);
    Serial.begin(9600); //sets serial port for communication
}


void loop() {
    buttonR = digitalRead(buttonPin1);
    buttonW = digitalRead(buttonPin2);

    if(buttonW == HIGH){
      digitalWrite(ledPin,HIGH);
    }else{
      digitalWrite(ledPin,LOW);
    }
    
    if(buttonR == HIGH){
      readLight();
    }else{
     void readLight();
    }
}


/*
Code for the LED: Takes Letters and turns into Morse code
*/
void WriteLED(){
  
}


/*
Code for the Phototransister: Captures lights and turns it into Letters
*/

void readLight(){
    SensorValue = analogRead(SensorPin); // read the value from the sensor
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

//Serial.print("a= "+a);
//Serial.println("f= "+f);
// Checking the set of dots, dashes and spaces
 
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
