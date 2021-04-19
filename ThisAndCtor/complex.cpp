#include<iostream>
#include"complex.h"


using namespace ncomplex;

complex::complex(void) {
	this->real = 0;
	this->imag = 0;
	std::cout << "Object initialized Sucessfully " << std::endl;
}

void complex::acceptRecord(void) {
	std::cout << "Enter real :: " << std::endl;
	std::cin >> this->real;
	std::cout << "Enter imag :: " << std::endl;
	std::cin >> this->imag;
}

void complex::printRecord(void) {
	std::cout << "Real is :: " << this->real << std::endl;
	std::cout << "imag is :: " << this->imag << std::endl;
}

complex complex::add(complex* ptr) {
	complex temp;
	temp.real = ptr->real + this->real;
	temp.imag = ptr->imag + this->imag;
	return temp;
}
