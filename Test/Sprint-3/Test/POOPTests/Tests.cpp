// POOPTests.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "test.h"
#include "signalread_test.h"



int main()
{
	SignalRead r;
	Tests test(r);

	test.run();

	system("pause");
	return 0;
}

