#include"complex.h"
#include<iostream>
using namespace ncomplex;

complex::complex() : complex(0, 0)
{  
	std::cout << "The object is created " << std::endl;
}

complex::complex(int real) {
	this->real = real;
	this->imag = 0;
}

complex::complex(int real, int imag) : real(10), imag(10)
{
	this->real = real; //if both are given it will take the inside one
	this->imag = imag;
}

void complex::acceptRecord(void) {
	std::cout << "Enter Real :: " << std::endl;
	std::cin >> this->real;
	std::cout << "Enter the imag :: " << std::endl;
	std::cin >> (*this).imag; //I guess this is how arrow operator works 
}

void complex::printRecord(void) {
	std::cout << "Real :: " << this->real << std::endl;
	std::cout << "Imag is :: " << this->imag << std::endl;
}