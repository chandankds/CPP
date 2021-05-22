#include"Array.h"


Array::Array(int size = 0) {
	this->size = size;
	this->ptr = new int[size];
}


void Array::acceptRecord() {
	for (int i = 0; i < size; i++) {
		std::cout << "Enter the element " << i << std::endl;
		std::cin >> ptr[i];
	}
}

void Array::printRecord() {
	for (int i = 0; i < size; i++) {
		std::cout << "Element at " << i << " is " << ptr[i] << std::endl;
	}
}

int Array::operator[](int index) { //make it throw array out of bound exception...
	return ptr[index];
}

Array::~Array(void) {
	delete[] ptr;
	std::cout << "Object destroyed sucessfully " << std::endl;
}