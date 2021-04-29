#include"Complex.h"
#include"IlligalValueException.h"
using namespace pcomplex;
complex::complex() : real(0), imag(0)
		{  }
		complex::complex(int real, int imag)throw (nexception::IlligalException)
		{ 
			if(real < 0 || imag < 0)
				throw nexception::IlligalException("not good");
			this->real = real;
			this->imag = imag;
		}

		void complex::setReal(int real) throw (nexception::IlligalException)
		{ 
			if(real < 0)
				throw nexception::IlligalException("not good");
			this->real = real;
		}

		void complex::setImag(int imag)  throw (nexception::IlligalException)
		{
			if(imag < 0)
				throw nexception::IlligalException("not good");
			this->imag = imag;
		}

		int complex::getReal(void) const {
			return this->real;
		}

		int complex::getImag(void) const {
			return this->imag;
		}

