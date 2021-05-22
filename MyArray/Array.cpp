#include "Array.h"

Array::Array(int num): size(num), ptr(new int[size])
{}

std::istream& operator>>(std::istream& in, Array &a1) {
	std::cout << "Inside the >> opereator " << std::endl;
	for (int i = 0; i < a1.size; i++) {
		std::cout << "Enter the Value of " << i << std::endl;
		std::cin >> a1.ptr[i];

	}
	return in;
}

Array::Array(const Array& other) {
	this->size = other.size;
	this->ptr = new int[this->size];
	for (int i = 0; i < this->size; i++) {
		this->ptr[i] = other.ptr[i];
	}
	std::cout << "The copy constructor is called" << std::endl;
}

Array::~Array() {
	delete ptr;
	ptr = nullptr;
	std::cout << "Distructor has been clalled " << std::endl;
}


std::ostream& operator<<(std::ostream& out, Array &a) {
	for (int i = 0; i < a.size; i++) {
		std::cout << "Element at " << i << ":: " <<  a.ptr[i] << std::endl;
	}
	return out;
}

int Array::operator[](int num) {
	if (num < this->size) {
		return this->ptr[num];
	}
	std::cout << "Exception has to be thrown" << std::endl;
}


























