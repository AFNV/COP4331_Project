#pragma once
#include "signalread_test.h"
#include "signalwrite.h"
#include <iostream>
#include <string>

class Tests
{
public:
	Tests(SignalRead* r, SignalWrite* w, std::string t)
	{
		r_test = r;
		w_test = w;
		first = '0';
		last = 'z';
		text = t;
	}

	void run();

	bool class_is_not_null();
	void display_character_set();
	void randomTest();

private:
	SignalRead* r_test;
	SignalWrite* w_test;
	std::string text;
	char first, last;
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
	char h[14] = { 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
	};
	
	if (r_test->getDefinition(h))
		return true;
	else
		return false;
	if (w_test->convertChar(h, 'a'))
		return true;
	else
		return false;
}

void Tests::display_character_set()
{
	std::string tx = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	
	w_test->codeText(tx, 62);

}

void Tests::randomTest()
{
	std::cout << std::endl;
	std::cout << "running Text input test..." << std::endl;
	
	srand(time(NULL));

	char randomArr[14] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
	auto arr = w_test->blah;
	w_test->codeText(text, text.length());
	std::cout << std::endl;
	
	std::cout << "running Randomized Character test..." << std::endl;

	for (int k = 0; k < 1000; k++)
	{
		char i = (char)rand() % 122 + 30;
		w_test->convertChar(randomArr, i);
		std::cout << r_test->getDefinition(randomArr);		
		r_test->resetString();
	}
}