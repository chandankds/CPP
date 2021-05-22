#include<iostream>
#include<string>

class StirngOutOfBoundException {
private:
	std::string message;
public:
	StirngOutOfBoundException();

	StirngOutOfBoundException(std::string message);
	void printMessage();
};
