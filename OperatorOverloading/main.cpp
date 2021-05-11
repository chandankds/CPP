#include<iostream>
#include"Point.h"
#include"Matrix.h"
#include"Array.h"

#define NPT npoint::
/*
	Operators which cannot be overloaded
		-> Dot operator [ . ]
		-> Pointer to member selection operator [  .* ]
		-> Ternery operator[ ? : ] 
		-> Scope resolution operator [ :: ] 
		-> sizeof operator 
		-> typeid operator 
		-> All casting operator staic, dynamic, const_cast, static_cast
	Operators which can be overloaded with the member fuctions but not otherwise
		-> Assignment operator [ = ]
		-> Index or subscript operator []
		-> function call operator 
		-> Arrow operator 
	To overload binary operator using member function then operator fuction should declare one parameter. Pont operator+( Point other). you cant give more parameter than that
	To overload unirary operator mem fuction have 0 parameter. p1 = ++p2;
	Associativity and precidence cannot be changed. But therir is a way for postfix and prefix using int as extra parameter in postfix.

*/

/*
	Overload +, -, *, / of the Matrix class with the copy constructor as well.
	Overload the == operator inside the Point class.
	Overload the non member functions and make them friends.
	Overload the relational operator using non member function.
	Overload the short hand operator. +=
	Overload the insertion << and extersion >> operators in matrix class (You cant overload it as memberfunctions overload it externally because members in ostream and istream are protected)
	Overload the [] operator so you can access aray elements easily;
*/

std::ostream& operator<<(std::ostream& out, Array &a1) {
	a1.printRecord();
	return out;
}

int main() {
	Array a1(3);
	a1.acceptRecord();
	int val = a1[1]; //working fine overloaded the [] operator.
	std::cout << "Val is " << val << std::endl;
	std::cout << a1 << std::endl;
	return 0;
}

int main2() {
	nmatrix::Matrix m1(2);
	m1.acceptRecord();
	m1.printRecord();
/*	nmatrix::Matrix m2 = m1;
	m2.printRecord();
	nmatrix::Matrix m3 = m1 + m2;
	m3.printRecord();
*/
	//nmatrix::Matrix m2 = m1 + 5;
	nmatrix::Matrix m2 = m1;
	m2.printRecord();
	m1 == m2 ? std::cout << "Equal" << std::endl : std::cout << "Not Equal" << std::endl;
//	nmatrix::Matrix m3(2) += 5; //Try to make it work
	return 0;
}

int main1() {
	npoint::Point p1( 10, 20), p2(30, 40);
	NPT Point p3 = p1 + p2;
	//NPT Point p3 = p1 + 5; // You have to do it using the parameter as a int inside the function.
	p3.printRecord();
	NPT Point p4 = p1 + p2 + p3;
	
	p4.printRecord();
	return 0;
}