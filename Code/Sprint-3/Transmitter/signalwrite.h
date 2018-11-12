#include "includes.h"

class SignalWrite
{
public:
	SignalWrite(int led)
	{
		led = led;
    Serial.print(led);
	}

	void codeText(char inputString[], int stringLength)
	{
		int arr[14]; 

		for(int i = 0; i<stringLength; i++)
		{
			convertChar(arr, inputString[i]);
     
			for(int j = 0; j<14; j++)
			{
      	if (arr[j]==1)
				{
        
					digitalWrite(18, HIGH);
					delay(75);
				}
				else
				{
        
					digitalWrite(18, LOW);
					delay(75);
				}
			}
		}
	}
	
	void convertChar(int* arr, char c)
	{
	  if(c == 'a' || c == 'A')
	    strCopy(arr, A);
	  else if (c == 'b' || c == 'B')
	    strCopy(arr, B);
	  else if (c == 'c' || c == 'C')
	    strCopy(arr, Cee);
	  else if (c == 'd' || c == 'D')
	    strCopy(arr, D);
	  else if (c == 'e' || c == 'E')
	    strCopy(arr, E);
	  else if (c == 'f' || c == 'F')
	    strCopy(arr, F);
	  else if (c == 'g' || c == 'G')
	    strCopy(arr, G);
	  else if (c == 'h' || c == 'H')
	    strCopy(arr, H);
	  else if (c == 'i' || c == 'I')
	    strCopy(arr, I);
	  else if (c == 'j' || c == 'J')
	    strCopy(arr, J);
	  else if (c == 'k' || c == 'K')
	    strCopy(arr, K);
	  else if (c == 'l' || c == 'L')
	    strCopy(arr, L);
	  else if (c == 'm' || c == 'M')
	    strCopy(arr, M);
	  else if (c == 'n' || c == 'N')
	    strCopy(arr, eN);
	  else if (c == 'o' || c == 'O')
	    strCopy(arr, O);
	  else if (c == 'p' || c == 'P')
	    strCopy(arr, P);
	  else if (c == 'q' || c == 'Q')
	    strCopy(arr, Q);
	  else if (c == 'r' || c == 'R')
	    strCopy(arr, R);
	  else if (c == 's' || c == 'S')
	    strCopy(arr, S);
	  else if (c == 't' || c == 'T')
	    strCopy(arr, T);
	  else if (c == 'u' || c == 'U')
	    strCopy(arr, U);
	  else if (c == 'v' || c == 'V')
	    strCopy(arr, Vee);
	  else if (c == 'w' || c == 'W')
	    strCopy(arr, W);
	  else if (c == 'x' || c == 'X')
	    strCopy(arr, X);
	  else if (c == 'y' || c == 'Y')
	    strCopy(arr, Y);
	  else if (c == 'z' || c == 'Z')
	    strCopy(arr, Zee);
	  else if (c == '1')
	    strCopy(arr, One);
	  else if (c == '2')
	    strCopy(arr, Two);
	  else if (c == '3')
	    strCopy(arr, Thr);
	  else if (c == '4')
	    strCopy(arr, Fou);
	  else if (c == '5')
	    strCopy(arr, Fiv);
	  else if (c == '6')
	    strCopy(arr, Six);
	  else if (c == '7')
	    strCopy(arr, Sev);
	  else if (c == '8')
	    strCopy(arr, Eig);
	  else if (c == '9')
	    strCopy(arr, Nin);
	  else if (c == '0')
	  	strCopy(arr, Zer);
	  else
	    strCopy(arr, nothing);
      
	}

	void strCopy(int* arr, char* charArray)
	{
		for(int i = 0; i < 14; i++)
		{
			arr[i]=charArray[i];
      
		}
   
	}

private:
	int led;
};
