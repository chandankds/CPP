#include<iostream>

/*
	- Using typedef we cannot create new datatype rather we can give alias to the existing 
	data types.
	- using typedef you cannot create the alias for the variable if you want to do that use
	reference.
	- using typedef we can create alias for the class or datdatype.
	- using refrence we cannot create the alias for const variable.
*/

/*
	Try creating typedef for node as node_t.
	typedef strcuture and classes as well.
*/

typedef char ch;
typedef long long unsigned int chs;


typedef struct node {
	int data;
	struct node* next;
} lala; // if you typedef a node you dont have to use struct to use it saves keystrokes.

typedef class complex {
public:
	int real;
	int imag;
public:
	complex() : real(0), imag(0)
	{}
} com; // We can typedef a class as well 

int main() {
	ch a = 'a';
	std::cout << "a :: " << a << std::endl;
	chs la = 100000000000000;
	std::cout << "a :: " << la << std::endl; 
	lala no;
	com c1;
	std::cout << "Real :: " << c1.real << "Imag :: " << c1.imag << std::endl;
	return 0;
}