#include<iostream>
#include"Utility.h"
#include"Complex.h"
/*
	-> Create memory dynamically for a single dimentional array and use it. free it as well there is syntax difference.
	-> delete[] ptr is used to free the array. its intersting because it can create problems if you dont use this
	   syntax to delete array of objects in that case only the distructor of first object is called.
	-> Create dynamic array inside the object. Done that in destructor check there.
	-> 


*/

int main(void) {
	
	return 0;
}

int main5() {
	ncomplex::Complex* cptr = new ncomplex::Complex[3];
	for (int i = 0; i < 3; i++) {
		cptr[i].acceptRecord();
	}

	for (int i = 0; i < 3; i++) {
		cptr[i].printRecord();
	}
	delete[] cptr;
	std::cout << "Memory freed successfully" << std::endl;
	return 0; 
}

int main4() {
	int size;
	std::cout << "Enter the size of square matrix" << std::endl;
	std::cin >> size;
	int** ptr = nutility::createMemory(size);
	nutility::acceptRecord(ptr, size);
	nutility::printRecord(ptr, size);
	nutility::freeMemory(ptr, size);
	return 0;
}


int main3(){  // dynamic array allocation
	//create a seprate function for in in different file.
	int** ptr = new int*[3];
	for (int i = 0; i < 3; i++) {
		ptr[i] = new int[3];
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			std::cout << "Enter the value of :: " << i << " " << j << "  ::  " << std::endl;
			std::cin >> ptr[i][j]; 
				
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			std::cout << " Value at " << i << j << " is :: " << ptr[i][j] << std::endl;
		}
	}
	for (int i = 0; i < 3; i++) {
		delete[] ptr[i];
	}
	delete[] ptr;
	ptr = nullptr;
	std::cout << " All the memory is freed sucessfully " << std::endl;
	return 0;
}

int main2() { //dynamic variables
	//int* ptr = new int; // Garbage value  to free use delete ptr; and then ptr = nullptr;
	//int* ptr = new int(); // value init to 0
	//int* ptr = new int(19); // init to 19
	//std::cout << "The value is :: " << *ptr << std::endl;
	return 0;
}