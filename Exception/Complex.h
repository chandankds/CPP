#pragma once

namespace pcomplex {
	class complex {
	private:
		int real;
		int imag;
	public:
		complex();
		complex(int real, int imag);
		void setReal(int real);
		void setImag(int imag);
		int getReal(void) const;
		int getImag(void) const;
	};
}