#include"Matrix.h"

#define NMX nmatrix::

NMX Matrix::Matrix(int size) {
	this->size = size;
	this->ptr = new int* [size];
	for (int i = 0; i < size; i++) {
		ptr[i] = new int[size];
	}
}

NMX Matrix::Matrix(const Matrix& other) {
	this->size = other.size;
	this->ptr = new int* [size]; //Because constructor gets called only once i have to allocate memory here because top one wont be get called
	for (int i = 0; i < size; i++) {
		this->ptr[i] = new int[size];
	}
	for (int i = 0; i < size; i++) { //copy the data from the other to this object
		for (int j = 0; j < size; j++) {
			this->ptr[i][j] = other.ptr[i][j];
		}
	}
}

void NMX Matrix::acceptRecord(void) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			std::cout << "Enter the value of element " << i << j << std::endl;
			std::cin >> ptr[i][j];
		}
	}
}

void NMX Matrix::printRecord(void) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			std::cout << ptr[i][j] << "	"; 
		}
		std::cout << std::endl;
	}
}

NMX Matrix::~Matrix(void) {
	for (int i = 0; i < size; i++) {
		delete[] ptr[i];
	}
	delete[] ptr;
	ptr = nullptr;
	std::cout << "Memory freed sucessfully " << std::endl;
}
