#include"Complex.h"
using namespace pcomplex;
complex::complex() : real(0), imag(0)
		{  }
		complex::complex(int real, int imag)
		{ 
			this->real = real;
			this->imag = imag;
		}

		void complex::setReal(int real) {
			this->real = real;
		}

		void complex::setImag(int imag) {
			this->imag = imag;
		}

		int complex::getReal(void) const {
			return this->real;
		}

		int complex::getImag(void) const {
			return this->imag;
		}

