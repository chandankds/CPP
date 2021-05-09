#include<iostream> 

namespace nmatrix {
	class Matrix {
	private:
		int size;
		int** ptr;
	public:
		Matrix(int size = 0);
		Matrix(const Matrix& other);
		void acceptRecord( void );
		void printRecord( void );
		Matrix operator+(const Matrix& other); // Overload the + operator 
		Matrix operator+(int value);
		bool operator== (const Matrix& other); //Reational operators can also be done in the similar way
		~Matrix(); 
		friend nmatrix::Matrix operator+= (const nmatrix::Matrix m1, const nmatrix::Matrix m2);
		friend nmatrix::Matrix operator+= (const nmatrix::Matrix m1, int value);
	};

}