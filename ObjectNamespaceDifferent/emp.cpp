#include "emp.h"
#include<iostream>
using namespace nemp;
void nemp::emp::set(void)
{
	std::cout << "Enter name :: " << std::endl;
	std::cin >> name;
	std::cout << "Enter the empid :: " << std::endl;
	std::cin >> empid;
	std::cout << "Enter the salary :: " << std::endl;
	std::cin >> salary;
}

void emp::print(void) {
	std::cout << "Name is :: " << name << std::endl;
	std::cout << "Empid is :: " << empid << std::endl;
	std::cout << "Salary is :: " << salary << std::endl;
}
