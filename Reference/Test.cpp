#include<iostream>
#include "Test.h"
using namespace ntest;

Test::Test(char c) : cr(c)
{}

void Test::changeRecord() {
	this->cr = '?'; //I Dont know why this is not working #KNOWWHY
}

void Test::printRecord() {
	std::cout << " The value of char is :: " << cr << std::endl;
}
