#include"Complex.h"

ncomplex::Complex::Complex() : real(0), imag(0)
{}

ncomplex::Complex::Complex(int real, int imag) : real(real), imag(imag)
{}

void ncomplex::Complex::acceptRecord(int real, int imag) {
	std::cout << "Enter the value of real " << std::endl;
	std::cin >> this->real;
	std::cout << "Enter the value of Imag " << std::endl;
	std::cin >> this->imag;
}

void ncomplex::Complex::printRecord() { 
	std::cout << "Real is :: " << real << std::endl;
	std::cout << "Imag is :: " << imag << std::endl;
}
