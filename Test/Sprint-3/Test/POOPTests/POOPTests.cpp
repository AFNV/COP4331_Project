// POOPTests.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "test.h"
#include "signalread_test.h"
#include <iostream>



int main()
{
	std::cout << "Enter Test String" << std::endl;
	std::string text;

	getline(std::cin, text);

	SignalRead* r = new SignalRead();
	SignalWrite* w = new SignalWrite(5);

	Tests test(r, w, text);

	test.run();

	system("pause");
	return 0;
}

