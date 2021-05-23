#include<iostream>

class Array {
private:
	int size;
	int* ptr;
public:
	Array();
	Array(int size);
	Array(const Array &other);
	void acceptRecord();
	void printRecord();
	friend std::ostream& operator<<(std::ostream &out, const Array &other);
	friend std::istream& operator>>(std::istream &in, const Array &other);
	~Array();
};