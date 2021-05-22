#include"String.h"

String::String(const char* str) {
	this->length = strlen(str);
	this->buffer = new char[this->length + 1];
	strcpy(buffer, str);
}

String::String(const String& other) {
	this->length = other.length;
	this->buffer = new char[this->length + 1];
	strcpy(this->buffer, other.buffer);
	std::cout << "Inside the copy constructor " << std::endl;
}

char& String::operator[](int index)throw (StirngOutOfBoundException) {
	if (index >= 0 && index < this->length) {
		return this->buffer[index]; 
	}
	throw StirngOutOfBoundException("invalid index");
}

void String::printRecord() {
	std::cout << this->buffer << std::endl;
}

void String::operator()(const char* str)
{
	this->~String();
	this->length = strlen(str);
	this->buffer = new char[this->length + 1];
	strcpy(this->buffer, str);
	std::cout << "Inside the Functor" << std::endl;
}

void String::operator=(const String& other) {
	this->~String();
	this->length = other.length;
	this->buffer = new char[this->length + 1];
	strcpy(this->buffer, other.buffer);
	std::cout << "Inside the Assignment operator " << std::endl;

}

std::ostream& operator<<(std::ostream& out, String& other) {
	std::cout << other.buffer << std::endl;
	return out;
}

String::~String() {
	if (this->buffer != nullptr) {
		delete this->buffer;
		this->buffer = nullptr;
		std::cout << "Distructor is called and memory is freed" << std::endl;
	}
}