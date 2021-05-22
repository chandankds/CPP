#include<iostream>
#include<cstring>
#include"StringOutOfBoundException.h"

class String {
private:
	size_t length;
	char* buffer;
public:
	String(const char* str);
	String(const String& other);
	void printRecord();
	void operator()(const char* str);
	char& operator[](int index);
	void operator=(const String& other);
	friend std::ostream& operator<<(std::ostream& out, String& other);
	~String();

};