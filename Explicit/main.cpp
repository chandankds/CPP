#include<iostream>
#include"complex.h"

int main() {
	using namespace ncomplex;
//	complex c1 = 10; // This is currently possible because internally its get resolved as complex c1(10); and single parameter constructor is present
//	complex c = 10; //not possible anymore coz i made the constructor explicit
	complex c = (complex)10; // Have to explecitly typecast now
	c.printRecord();
	return 0;
}

int main1(void) {
	using namespace ncomplex;
	complex c1(10,20);
	int real = c1; // This is possible because i overloded the int operator see defination for better understanding
	std::cout << "The value of real :: " <<  real << std::endl;
	return 0;
}