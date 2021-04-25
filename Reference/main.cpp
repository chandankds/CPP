#include<iostream>
#include"Test.h"
/*
	-> reference is just a alias for a variable.
	-> reference internally is treated as constant pointer.
	-> Refrerences overview
	-> when we use refrence the memory is assingned only once
	-> you can create as many refrences as you want.
	-> try to do some twisters related to the constants.
	-> try to create reference of reference
	-> try just creating a referece without initialization and try to do the same with class and 
		get the size of reference (hint) use member init list to assign value to the 
		pointer because reference is a constant.

*/

int main() {
//	int& test; //reference must be initialized 
	int a = 10;
	std::cout << "Value of a is :: " << a << std::endl;
	int& b = a;
	b++;
	std::cout << "Value of a is :: " << a << std::endl;
	int c = 20;
//	b = &c;  // Not allowed reference is a const pointer.
	std::cout << "Address of a is :: " << &a << std::endl;
	std::cout << "Address of b is :: " << &b << std::endl; //same
	int& d = b;
	std::cout << "Address of d is :: " << &d << std::endl; //same as a and b.
	char cc = 'm';
	ntest::Test t1(cc);
	t1.printRecord();
	t1.changeRecord(); //#KNOWWHY Not sure why this is not working 
	std::cout << "Value of c now is :: " << cc << std::endl;
	return 0;
}
