#include<iostream>
#include"Array.h"

int main() {
	Array a1(3), a2(2);
	std::cin >> a1;
	//std::cout << a1 << a2;
	//std::cout << a1[1] << std::endl;
	Array a3 = a1;
	std::cout << a3;
	std::cout << "Program has ended" << std::endl;
	return 0;
}