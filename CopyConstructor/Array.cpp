#include"Array.h"

using namespace narray;

narray::Array::Array(int size = 0): size(size), arr( nullptr ) {

}

Array::Array(const Array& other) {
	std::cout << "Copy constructor is called " << std::endl;
	this->size = other.size;
	this->arr = new int[this->size];
	for (int i = 0; i < size; i++) {
		this->arr[i] = other.arr[i];
	}
}

void Array::acceptRecord(void) {
	arr = new int[size];
	for (int i = 0; i < size; i++) {
		std::cout << "Enter the element " << i << std::endl;
		std::cin >> arr[i];
	}
}

void Array::printRecord() const {
	for (int i = 0; i < size; i++) {
		std::cout << "Value of element " << i << "Is " << arr[i] << std::endl;
	}
}

Array:: ~Array() {
	delete[] arr;
	arr = nullptr;
	std::cout << "Memory Freeed Sucessfully " << std::endl;
}
