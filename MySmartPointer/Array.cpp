#include"Array.h"

Array::Array() : size(), ptr(nullptr)
{}

Array::Array(int size) {
	this->size = size;
	this->ptr = new int[this->size];
}

Array::Array(const Array& other) {
	this->size = other.size;
	this->ptr = new int[this->size];
	for (int i = 0; i < this->size; i++) {
		this->ptr[i] = other.ptr[i];
	}
	std::cout << "Copy constructor is called " << std::endl;
}


void Array::acceptRecord(void) {
	for (int i = 0; i < this->size; i++) {
		std::cout << "Enter the element " << i << " :: " << std::endl;
		std::cin >> this->ptr[i];
	}
}

void Array::printRecord(void) {
	for (int i = 0; i < this->size; i++) {
		std::cout << "Element at " << i << " :: " << ptr[i] << std::endl;
	}
}

Array::~Array() {
	if (this->ptr != nullptr) {
		delete[] ptr;
		ptr = nullptr;
		std::cout << "Object distroyed sucessfully " << std::endl;
	}
}

std::ostream& operator<<(std::ostream& out, const Array& other) {
	for (int i = 0; i < other.size; i++) {
		std::cout << "Element at " << i << " :: " << other.ptr[i] << std::endl;
	}
	return out;
}

std::istream& operator>>(std::istream& in, const Array& other) {
	for (int i = 0; i < other.size; i++) {
		std::cout << "Enter the element " << i << " :: " << std::endl;
		std::cin >> other.ptr[i];
	}
	return in;
}



















