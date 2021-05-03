#include<iostream>
#include"Array.h"

/*
	-> There are 3 types of copy avaliable 
		- Shallow copy.
		- Deep copy
		- lazy copy (mixture of shallow and deep).
	-> Conditions in which the copy constructor gets called.
		- When an object is passed by value to the function.
		- When you return the object by value.
		- When you initialize the object.
		- when you use = operator to copy the object.(copy constructor doesent get called here)
		- When you throw the object its copy is created at runtime stack.
		- when you catch the object by value.
	-> When you shoud create the deep copy
		- When the class contains atleast one pointer.
		- It should have user defined distructor.
		- When you try to create the copy of the object.
	-> Steps To create Deep copy
		1. Copy the required size from source object to destination object.
		2. Allocate new memory of this size
		3. Copy the contents of source objects to copyied object.
	-> If you do not create a copy constructor for the class compiler genartaes default copy constructor.
	-> Syntax Class (const Class &other) // it is a constructor with single parameter.
*/
/*
	-> Write a program to use copy constructor just put array in class
	-> Write a copy constructor for matrix class. #TODO
	-> Write a copy constructor for singly link list. #TODO

*/
int main(void) {
	narray::Array a1(3);
	a1.acceptRecord();
	a1.printRecord();
	narray::Array a2(a1);
	a2.printRecord();
	return 0;
}