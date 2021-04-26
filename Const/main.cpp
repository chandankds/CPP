#include<iostream>
#include"complex.h"
/*Four Functions cannnot be decleared constant 
	-constructor
	-distructor
	-global functions including main because they are not designed to be called on pointer (no this*)
	-static member functions 
*/

/*
	Class cannot be created as constant but c++11 have something called final if intrested explore it.
	const should be in declaration and defination both.
	member initilizer list should be in defination only.
	defult argument should be in declaration only.
*/
int main(void) {
	using namespace ncomplex;
	complex c1, c2;
	const complex *p1 = &c1; // or can use syntax as well complex const *p1;
	p1 = &c2;  //it can be assigned another object its valid 
	p1->printRecord(); //no accepct record is avalibale because only const memfunc can be called.

	complex* const p2 = &c1; //This is how you define a constant pointer complex* const p1{ &c1 };
//	p2 = &c2; //not valid if you want to make a pointer constant put const between * and ptr name.
	p2->acceptRecord(); //accept record can be called because pointer is constant not the object.

	const complex* const p3{ &c1 };
//	p3 = &c2;  // not allowed 
	p3->printRecord(); // acceptRecord() cannot be called because object is constant
	return 0;
}