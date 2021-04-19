#include "complex.h"

int main() {
	ncomplex::complex c1, c2, c3;
	c1.acceptRecord();
	c1.printRecord();
	c2.acceptRecord();
	c2.printRecord();
	ncomplex::complex* ptr = &c2;
	c3 = c1.add(ptr);
	c3.printRecord();
	return 0;
}