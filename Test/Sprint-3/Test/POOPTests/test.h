#pragma once
#include "signalread_test.h"
#include <iostream>

class Tests
{
public:
	Tests(SignalRead r)
	{
		r_test = r;
		d = 0;
		s = 0;
	}

	void run();

	bool class_is_not_null();
	void display_character_set();
	void randomTest();

private:
	SignalRead r_test;
	int d, s;
};

void Tests::run()
{
	std::cout << "running tests..." << std::endl;

	if(class_is_not_null())
		display_character_set();
	else
		std::cout << "no signal class" << std::endl;

	randomTest();
}



bool Tests::class_is_not_null()
{
	if (r_test.getDefinition(0,0))
		return true;
	else
		return false;
}

void Tests::display_character_set()
{
	for (d = 1; d < 15; d++)
		for (s = 1; s< 15; s++)
			std::cout << "Dots: " << d << " Spaces: " << s << " Character: " << r_test.getDefinition(d, s) << std::endl;
}

void Tests::randomTest()
{
	std::cout << std::endl;
	std::cout << "running randomizer test..." << std::endl;

	for (int i = 0; i < 20; i++)
		r_test.readLight();
}