#include<iostream>
#include"Point.h"

#define NPT npoint::
/*
	Operators which cannot be overloaded
		-> Dot operator [ . ]
		-> Pointer to member selection operator [  .* ]
		-> Scope resolution operator [ ? : ] 
		-> sizeof operator [ :: ]
		-> typeid operator 
		-> All casting operator staic, dynamic, const_cast, static_cast
	Operators which can be overloaded with the member fuctions but not otherwise
		-> Assignment operator [ = ]
		-> Index or subscript operator []
		-> function call operator 
		-> Arrow operator 
	To overload binary operator using member function then operator fuction should declare one parameter. Pont operator+( Point other). you cant give more parameter than that
	To overload unirary operator mem fuction have 0 parameter. p1 = ++p2;
	Associativity and precidence cannot be changed.		

*/

/*
	Overload +, -, *, / of the Matrix class with the copy constructor as well.
	Overload the == operator inside the Point class.
	Overload the non member functions and make them friends.
	Overload the relational operator using non member function.
	Overload the short hand operator. +=
	
*/

int main() {
	npoint::Point p1( 10, 20), p2(30, 40);
	NPT Point p3 = p1 + p2;
	//NPT Point p3 = p1 + 5; // You have to do it using the parameter as a int inside the function.
	p3.printRecord();
	NPT Point p4 = p1 + p2 + p3;
	
	p4.printRecord();
	return 0;
}