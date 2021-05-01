#include<iostream>


namespace ncomplex {
	class Complex {
	private:
		int real;
		int imag;
	public:
		Complex();
		Complex(int real, int imag);
		void acceptRecord(int real=0, int imag=0);
		void printRecord();
	};

}