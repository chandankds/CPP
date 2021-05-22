#include<iostream>
#include"String.h"
/*
	->Try creating the functor
*/
int main() {
	String s("chandan");
	s("kill me") ; //This is functor a function call without a object
	std::cout << s << std::endl;
	//String s1 = s;
	//s = s1;
	//String s2("Hellish World");
	//std::cout << s << s1 << s2 << std::endl;
	//try {
	//	std::cout << s2[-1] << std::endl;
	//}
	//catch (StirngOutOfBoundException &e) {
	//	e.printMessage();
	//}
	return 0;
}