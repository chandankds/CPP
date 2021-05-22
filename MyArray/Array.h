#pragma(once)

#include <iostream>>

class Array {
private:
	int size;
	int* ptr;
public: 
	Array(int size);
	int operator[](int val);
	Array(const Array& other );
	Array& operator=(const Array& other);
	friend std::istream& operator>>(std::istream& in, Array& a1);
	friend std::ostream& operator<<(std::ostream& out, Array& a);
	~Array();
};