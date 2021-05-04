#include<iostream>

namespace nmatrix {

	class Matrix {
	private:
		int size;
		int** ptr;
	public:
		Matrix(int size);
		Matrix(const Matrix& other);
		void acceptRecord();
		void printRecord();
		~Matrix();
	};
}
