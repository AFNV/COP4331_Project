/*
Code for the Phototransister: Captures lights and turns it into Letters
*/
#include "signalwrite.h"


class SignalRead
{

  public:
    SignalRead()
    {
       for(int i=0; i<=13; i++)
         inputString[i]=0;
       inputChar ='_';
       ledBlue = 37;
    }

    ~SignalRead(){}
    
    char getChar()
    {
      return inputChar;
    }
    
    void readLight(unsigned long value, int index);
    
    void printChar()
    {
      inputChar = getDefinition(inputString);
      Serial.print(inputChar);
    }
    
    void resetString()
    {
      for(int i=0; i<=13; i++)
         inputString[i]=0;
    }
    
    char getDefinition(char s[]);
    
    bool strcomp(char a[], char b[]);

  private:
    char inputChar;
    char inputString[14];
    uint8_t ledBlue;      // the number of the LED pin
};




void SignalRead::readLight(unsigned long value, int index)
{

  if(value > 4300) 
  {
    inputString[index]=1;//calculating the number of dots and dashes in the character   
    digitalWrite(ledBlue, HIGH);
    delay(1000);// one second
  }
  else
  {
    inputString[index]=0; // calculating the number of spaces in dots and dashes
    digitalWrite(ledBlue, LOW);
    delay(1000);//one second ;
  }
  
}


bool SignalRead::strcomp(char a[], char b[])
{
 for (int i = 0; i<14; i++)
    if(a[i] != b[i])
      return false;

 return true;
}



char SignalRead::getDefinition(char s[])
{
  if(strcomp(s,A))
    return 'A';
  else if (strcomp(s,B))
    return 'B';
  else if (strcomp(s,Cee))
    return 'C';
  else if (strcomp(s,D))
    return 'D';
  else if (strcomp(s,E))
    return 'E';
  else if (strcomp(s,F))
    return 'F';
  else if (strcomp(s,G))
    return 'G';
  else if (strcomp(s,H))
    return 'H';
  else if (strcomp(s,I))
    return 'I';
  else if (strcomp(s,J))
    return 'J';
  else if (strcomp(s,K))
    return 'K';
  else if (strcomp(s,L))
    return 'L';
  else if (strcomp(s,M))
    return 'M';
  else if (strcomp(s,eN))
    return 'N';
  else if (strcomp(s,O))
    return 'O';
  else if (strcomp(s,P))
    return 'P';
  else if (strcomp(s,Q))
    return 'Q';
  else if (strcomp(s,R))
    return 'R';
  else if (strcomp(s,S))
    return 'S';
  else if (strcomp(s,T))
    return 'T';
  else if (strcomp(s,U))
    return 'U';
  else if (strcomp(s,Vee))
    return 'V';
  else if (strcomp(s,W))
    return 'W';
  else if (strcomp(s,X))
    return 'X';
  else if (strcomp(s,Y))
    return 'Y';
  else if (strcomp(s,Zee))
    return 'Z';
  else if (strcomp(s,One))
    return '1';
  else if (strcomp(s,Two))
    return '2';
  else if (strcomp(s,Thr))
    return '3';
  else if (strcomp(s,Fou))
    return '4';
  else if (strcomp(s,Fiv))
    return '5';
  else if (strcomp(s,Six))
    return '6';
  else if (strcomp(s,Sev))
    return '7';
  else if (strcomp(s,Eig))
    return '8';
  else if (strcomp(s,Nin))
    return '9';
  else if (strcomp(s,Zer))
    return '0';
  else
    return '_';
}

