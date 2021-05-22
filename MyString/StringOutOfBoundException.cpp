#include"StringOutOfBoundException.h"


StirngOutOfBoundException::StirngOutOfBoundException()
{
	std::cout << "String out of bound exception is thrown" << std::endl;
}

StirngOutOfBoundException::StirngOutOfBoundException(std::string message)
{
	this->message = message;
}

void StirngOutOfBoundException::printMessage()
{
	std::cout << this->message << std::endl;
}
