#include<iostream>
#include<string>
#include"Complex.h"
#include"Utility.h"
#include"IlligalValueException.h"

/*
	-> Exception is object which is used for notification perporse if there is some 
		unexpected behavior occurs in the program.
	-> Three Keywords
		-try
		-catch
		-throw(It is a jump statement)
	-> Every try block should have catch block.(people often write whole code in try block) 
	-> Throw can be of any type, you have to write catch block accordingly. 
	-> Single try block can have multiple catch block(which is tryin to catch diff objects).
	-> generic catch block catch(...) (this is called catch all handler) 
	-> generic catch block should apper after all the specfic catch block.
	-> Nested try catch block is allowed.
	-> exception specification list

*/

/*
	-> Try doing the divide by zero example.
 	-> Write a exception class( ArithmeticException class).
	-> catch(...) generic catch block.
	-> write complex class with exception and make it menu driven.
*/


int main() {
	int choice;
	while ((nutility::menuList()) != 0)
	{
			//Remaining to just add switch cases not a big deal i guess.
		try {
			pcomplex::complex c1;
			nutility::setRecord(c1);
			nutility::pirntRecord(c1);
		}
		catch (nexception::IlligalException& ex) {
			std::cout << ex.getMessage() << std::endl;
		}
	}
	return 0;
}

int unwanted1() {
	int num;
	std::string error("There is a exception in the program");
	float pi = 3.14f;
	std::cout << "Enter the number :: " << std::endl;
	std::cin >> num;
	try {
		if (num < 0) {
			throw pi;
		}
		std::cout << " The number is positive " << std::endl;
	}
	catch (int num) {
		std::cout << " Currently inside the catch block witn num :: " << num << std::endl;
	}

	catch (std::string  land) { //There is no need to have local variable here its just for catching perposes
		std::cout << land << std::endl;
		std::cout << " Came inside the string catch block" << std::endl;
	}

	catch ( ... ) {
		std::cout << " Currently inside the greneric catch block :: ";
	}

	return 0;
}

















