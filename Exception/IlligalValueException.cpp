#include "IlligalValueException.h"
#include <string>

using namespace nexception;

IlligalException::IlligalException(std::string message) : message(message)
{  }

void IlligalException::setMessage(std::string message) {
	this->message = message;
}

std::string IlligalException::getMessage(void) const {
	return this->message;
}