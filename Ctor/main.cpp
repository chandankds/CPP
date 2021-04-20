#include<iostream>
#include"complex.h"

int main(void) {
	using namespace ncomplex;
	//complex c1;
	//c1.acceptRecord();
	//c1.printRecord();
	//complex c2(10);
	//c2.printRecord();
	//complex c3(10, 20);
	//c3.printRecord();
	//complex c4 = 10; //This is also fine coz compiler internally treats it as c4(10)
	//c4.printRecord();
	//complex c5 = 10, 20;//not cool compiler treates it as c5(10), 2O ERROR
	//complex(10, 20).printRecord();// This is ok its called annonims object
	complex c9 = { 10, 20 }; //This also works the objects which can be initialised 
	//like this are called aggregate objects to make this happen without any ctor you have to make all the data members public
	c9.printRecord();
	return 0;
}