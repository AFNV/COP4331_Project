#pragma once
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include "windows.h"
#include <iostream>
/*
Code for the Phototransister: Captures lights and turns it into Letters
*/
class SignalRead
{

public:
	SignalRead()
	{
		SensorPin = 10;
		SensorValue = 0;
		d = 0;
		s = 0;
		srand(time(NULL));
	}

	~SignalRead() {}

	void readLight();
	char getDefinition(int d, int s);


private:
	int SensorPin;
	int d, s; // dot/dash (d) ; spaces (s)
	int SensorValue;
};




void SignalRead::readLight()
{

	SensorValue = rand() % 30 + 1;
	//Serial.println(SensorValue);//output value

	if (SensorValue > 15)// calculating the number of dots and dashes
	{

		for (int i = 0; i <= 13; i++)
		{
			SensorValue = rand() % 20 + 1;

			if (SensorValue > 10)
			{
				d++;//calculating the number of dots and dashes in the character   
				Sleep(200);// one second
			}
			else
			{
				s++; // calculating the number of spaces in dots and dashes
				Sleep(200);//one second ;
			}

		}
	}

	if (getDefinition(d, s) == '_')
		std::cout << "Invalid" << std::endl;
	else
		std::cout << getDefinition(d, s) << std::endl;
	s = d = 0;
	Sleep(50);
}






char SignalRead::getDefinition(int d, int s)
{
	if (d == 4 && s == 10)
		return 'a';
	if (d == 6 && s == 8)
		return 'b';
	if (d == 8 && s == 6)
		return 'c';
	if (d == 5 && s == 9)
		return 'd';
	if (d == 1 && s == 13)
		return 'e';
	if (d == 2 && s == 12)
		return 'i';
	if (d == 10 && s == 4)
		return 'j';
	if (d == 7 && s == 7)
		return 'g';
	if (d == 9 && s == 5)
		return 'o';
	if (d == 3 && s == 11)
		return 's';

	return '_';
}
