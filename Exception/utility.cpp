#include "Utility.h"
using namespace nutility;

void nutility::setRecord(pcomplex::complex &complex) {
	int real, imag;
	std::cout << "Enter the real value" << std::endl;
	std::cin >> real;
	complex.setReal(real);
	std::cout << "Enter the imag value" << std::endl;
	std::cin >> imag;
	complex.setImag(imag);
}

void nutility::pirntRecord(pcomplex::complex &complex) {
	std::cout << "Real :: " << complex.getReal() << std::endl;
	std::cout << "Imag :: " << complex.getImag() << std::endl;
}

int nutility::menuList(void) {
	int choice;
	std::cout << "Exit :: 0 " << std::endl;
	std::cout << "Accept :: 1 " << std::endl;
	std::cout << "Print :: 2 " << std::endl;
	std::cin >> choice;
	return choice;
}

