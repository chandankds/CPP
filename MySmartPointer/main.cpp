#include<iostream>
#include"Array.h"
/*
	->If you use an object as a pointer it is called smart pointer
	->when we use new constructor gets called and when delete is used distructor is called 
	->should not use malloc and free because it doesn't do that 
	->Programmer usally forgets to free the memory thats why smart pointers comes into the picture 
	->There are two types of c++ managed and unmanaged when we use c++ inside .net there the managed version of c++ is used so garbage collector is present 
	->
*/

class Autoptr {
private:
	Array* ptr; //Because we can't free the arrays ptr coz it a private member.
public:
	Autoptr(Array *a) {
		std::cout << "Autoprt(Array a) " << std::endl;
		this->ptr = a;
	}
	~Autoptr() {
		std::cout << "~Autoprt() " << std::endl;
		delete this->ptr;
		this->ptr = nullptr;
	}
	//obj.operator->()->acceptRecord();
	//obj.operator->()->pirntRecord();
	Array* operator->() {
		return this->ptr;
	}
};

//This is how it is implemented inside c++ need not create class everytime
int main() {
	std::auto_ptr<Array> obj(new Array(3));
	obj->acceptRecord();
	obj->printRecord();
	return 0;
}

int main4() {
//	Array *a = new Array(3);
//  Autoptr obj(a);

	Autoptr obj (new Array(3)); //here obj is a samart pointer
	obj->acceptRecord(); //obj.operator->()->acceptRecord();
	obj->printRecord(); //obj.operator->()->pirntRecord();
	return 0;
}

int main3() {
	Array *a1 = new Array(3);
	std::cin >> *a1;
	std::cout << *a1 << std::endl;
	//delete a1; //If you dont use delete the distructor is not being called 
	return 0;
}

int main2() {
	Array a1(3), a2(2);
	std::cin >> a1 >> a2;
	std::cout << a1 << a2;
	return 0; 
}