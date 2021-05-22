#include<iostream>


/*
	-> Destructor can be called explictely.
	-> Destructor is a member Function of the class which is used to release the resources released by the class
	-> It is a implicit function called by the cpp runtime when the object goes out of scope.
	-> Same name as class with ~ in the begining take no parameter returns nothing.
	-> Only two keywords are allowed with it inline and virtual(Check inheritapnce for that).
	-> Distructor calling sequence is exatly opposite to the constructor LIFO
	-> Distructor can be public private or protected same as construtor.
	-> You cannot overload the distructor cause it dont have any parameter.
	-> Compiler generates a default destructor same as costructor.
	->
*/

class Test {
private:
	int size;
	int* arr;
public:
	Test(int size) {
		this->size = size;
		arr = nullptr;
	}
	
	void acceptRecord() {
		this->arr = new int[size];
		for (int i = 0; i < size; i++) {
			std::cout << "Enter the value of element " << i << std::endl;
			std::cin >> arr[i];
		}
	}

	void printRecord() {
		for (int i = 0; i < this->size; i++) {
			std::cout << "Value of element " << i << " is " << arr[i] << std::endl;
		}
	}

	~Test(void) {
		if (arr != nullptr) { //good practice to keep the check so we didnt free the memory which is not allocated.
			delete[] arr;
			arr = nullptr;
			std::cout << " The memory is freed sucessfully " << std::endl;
		}
	}
};

int main(void) {
	int size;
	std::cout << "Enter the size of array " << std::endl;
	std::cin >> size;
	Test t1(size);
	t1.acceptRecord();
	t1.printRecord();
	return 0;
}

















