#include "Matrix.h"

#define MAT nmatrix::

MAT Matrix::Matrix(int size) : size(size), ptr(nullptr) {
	this->ptr = new int* [size];
	for (int i = 0; i < size; i++) {
		ptr[i] = new int[size];
	}
}
// This is copy constructor 
MAT Matrix::Matrix(const Matrix& other) {
	this->size = other.size; //Get the size
	this->ptr = new int* [size]; // Allocate the memory
	for (int i = 0; i < size; i++) {
		this->ptr[i] = new int[size];
	}
	for (int i = 0; i < size; i++) { // Copy the elements.
		for (int j = 0; j < size; j++) {
			this->ptr[i][j] = other.ptr[i][j];
		}
	}
}

// Matrix* const ptr this = &p1;
void MAT Matrix::acceptRecord() {
	std::cout << "The matrix is of size " << this->size << std::endl;
	for (int i = 0; i < this->size; i++) {
		for (int j = 0; j < this->size; j++) {
			std::cout << "Enter the value of " << i << j << " :: " << std::endl;
			std::cin >> this->ptr[i][j];
		}
	}
}
//Matrix* const ptr this = &m1;
void MAT Matrix::printRecord(void) {
	for (int i = 0; i < this->size; i++) {
		for (int j = 0; j < size; j++) {
			std::cout << "Value of Element :: " << i << j << " :: " << this->ptr[i][j] << std::endl;
		}
	}
}


MAT Matrix MAT Matrix::operator+(const Matrix& other) {
	std::cout << "Operator + is called " << std::endl;
	Matrix temp(other.size);
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			temp.ptr[i][j] = this->ptr[i][j] + this->ptr[i][j];
		}
	}
	return temp;
}

MAT Matrix MAT Matrix::operator+(int value) {
	MAT Matrix temp(this->size);
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			temp.ptr[i][j] = this->ptr[i][j] + value;
		}
	}
	return temp;
}

bool MAT Matrix::operator== (const Matrix& other) {
	std::cout << "Iside the == operator " << std::endl;
	for (int i = 0; i < this->size; i++) {
		for (int j = 0; j < this->size; j++) {
			if (this->ptr[i][j] != other.ptr[i][j]) {
				return false;
			}
		}
	}
	return true;
}

MAT Matrix::~Matrix() {
	for (int i = 0; i < size; i++) {
		delete[] this->ptr[i];
	}
	delete[] ptr;
	std::cout << "Object Distroyed sucessfully " << std::endl;
}
//Not working yet try to figure out what you are doing wrong 
nmatrix::Matrix nmatrix::operator+= (const nmatrix::Matrix m1, const nmatrix::Matrix m2) {
	nmatrix::Matrix temp(m1.size);
	for (int i = 0; i < temp.size; i++) {
		for (int j = 0; j < temp.size; j++) {
			temp.ptr[i][j] = m1.ptr[i][j] + m2.ptr[i][j];
		}
	}
	return temp;
}


//Not working yet try to figure out what you are doing wrong 
nmatrix::Matrix nmatrix::operator+= (const nmatrix::Matrix m1, int value) {
	nmatrix::Matrix temp(m1.size);
	for (int i = 0; i < temp.size; i++) {
		for (int j = 0; j < temp.size; j++) {
			temp.ptr[i][j] = m1.ptr[i][j] + value;
		}
	}
	return temp;
}
