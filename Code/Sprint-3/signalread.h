
/*
Code for the Phototransister: Captures lights and turns it into Letters
*/
char  A[14] = {1,0,1,1,0,0,0,0,0,0,0,0,0,0};
char  B[14] = {1,1,0,1,0,1,0,1,0,0,0,0,0,0};
char  Cee[14] = {1,1,0,1,0,1,1,0,1,0,0,0,0,0};
char  D[14] = {1,1,0,1,0,1,0,0,0,0,0,0,0,0};
char  E[14] = {1,0,0,0,0,0,0,0,0,0,0,0,0,0};
char  F[14] = {1,0,1,0,1,1,0,1,0,0,0,0,0,0};
char  G[14] = {1,1,0,1,1,0,1,0,0,0,0,0,0,0};
char  H[14] = {1,0,1,0,1,0,1,0,0,0,0,0,0,0};
char  I[14] = {1,0,1,0,0,0,0,0,0,0,0,0,0,0};
char  J[14] = {1,0,1,1,0,1,1,0,1,1,0,0,0,0};
char  K[14] = {1,1,0,1,0,1,1,0,0,0,0,0,0,0};
char  L[14] = {1,0,1,1,0,1,0,1,0,0,0,0,0,0};
char  M[14] = {1,1,0,1,1,0,0,0,0,0,0,0,0,0};
char  eN[14] = {1,1,0,1,0,0,0,0,0,0,0,0,0,0};
char  O[14] = {1,1,0,1,1,0,1,1,0,0,0,0,0,0};
char  P[14] = {1,0,1,1,0,1,1,0,1,0,0,0,0,0};
char  Q[14] = {1,1,0,1,1,0,1,0,1,1,0,0,0,0};
char  R[14] = {1,0,1,1,0,1,0,0,0,0,0,0,0,0};
char  S[14] = {1,0,1,0,1,0,0,0,0,0,0,0,0,0};
char  T[14] = {1,1,0,0,0,0,0,0,0,0,0,0,0,0};
char  U[14] = {1,0,1,0,1,1,0,0,0,0,0,0,0,0};
char  Vee[14] = {1,0,1,0,1,0,1,1,0,0,0,0,0,0};
char  W[14] = {1,0,1,1,0,1,1,0,0,0,0,0,0,0};
char  X[14] = {1,1,0,1,0,1,0,1,1,0,0,0,0,0};
char  Y[14] = {1,1,0,1,0,1,1,0,1,1,0,0,0,0};
char  Zee[14] = {1,1,0,1,1,0,1,0,1,0,0,0,0,0};
char  One[14] = {1,0,1,1,0,1,1,0,1,1,0,1,1,0};
char  Two[14] = {1,0,1,0,1,1,0,1,1,0,1,1,0,0};
char  Thr[14] = {1,0,1,0,1,0,1,1,0,1,1,0,0,0};
char  Fou[14] = {1,0,1,0,1,0,1,0,1,1,0,0,0,0};
char  Fiv[14] = {1,0,1,0,1,0,1,0,1,0,0,0,0,0};
char  Six[14] = {1,1,0,1,0,1,0,1,0,1,0,0,0,0};
char  Sev[14] = {1,1,0,1,1,0,1,0,1,0,1,0,0,0};
char  Eig[14] = {1,1,0,1,1,0,1,1,0,1,0,1,0,0};
char  Nin[14] = {1,1,0,1,1,0,1,1,0,1,1,0,1,0};
char  Zer[14] = {1,1,0,1,1,0,1,1,0,1,1,0,1,1};


class SignalRead
{

  public:
    SignalRead()
    {
       SensorPin = A0;
       SensorValue =0;
       for(int i=0; i<=13; i++)
         inputString[i]=0;
    }

    ~SignalRead(){}
    
    char* getInputString()
    {
      return inputString;
    }
    void readLight();
    char getDefinition(char s[]);
    bool strcomp(char a[], char b[]);

  private:
    int SensorPin; 
    char inputString[14];
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
        string[i]=1;//calculating the number of dots and dashes in the character   
        delay(1000);// one second
      }
      else
      {
        string[i]=0; // calculating the number of spaces in dots and dashes
        delay(1000);//one second ;
      }
    
    }
  }

  if(getDefinition(inputString) != '_')
    Serial.print(getDefinition(inputString));
  for(int i=0; i<=13; i++)
         inputString[i]=0;
  delay(200);
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
