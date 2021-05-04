#include<iostream>

/*
	-> We cannot access private and protected data members in the
		non member fuctions. you can do that by making function friend.
	-> After decaring the function as member function it doesn't become member function.
	-> We can make the class friend as well.
	-> For the friend fuctions to access the data member of the class they must be in the same namesapce.
	-> Friend of friend cant access a class's data member.
	->
*/
class Complex {
private:
	int real;
	int imag;
public:
	Complex(int real = 0, int imag = 0) : real(real), imag(imag)
	{}
	//Not writing other coz they are not needed.
	friend void printVal(Complex c1); //Adding as a friend 
	friend class Test;
};

class Test {
private:
	int num;
public:
	void menupulate(Complex c1) {
		std::cout << "Real = " << c1.real << "  Imag " << c1.imag << std::endl;
		c1.real = 33;	// can manipulate value as well 
		c1.imag = 44;
		std::cout << "Real = " << c1.real << "  Imag " << c1.imag << std::endl;

	}
};

void printVal(Complex c1) {
	std::cout << "Real = " << c1.real << "  Imag " << c1.imag << std::endl;
	c1.real = 33;	// can manipulate value as well 
	c1.imag = 44;
	std::cout << "Real = " << c1.real << "  Imag " << c1.imag << std::endl;
}

int main() {
	Complex c1(10);
	//printVal(c1);
	Test t1;
	t1.menupulate(c1);
	return 0;
}