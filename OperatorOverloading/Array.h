#include<iostream>

class Array {
private:
	int size;
	int* ptr;
public:
	Array(int size);
	void acceptRecord();
	void printRecord();
	int operator[](int index);
	~Array();
};