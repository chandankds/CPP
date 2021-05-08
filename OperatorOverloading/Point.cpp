#include"Point.h"

#define NPT npoint::

NPT Point::Point(int x , int y ) {
	this->x = x;
	this->y = y;
}


void NPT Point::printRecord() {
	std::cout << "X :: " << this->x << "	Y :: " << this->y << std::endl;
}

NPT Point NPT Point::operator+(Point other) const {
	Point temp;
	temp.x = this->x + other.x;
	temp.y = this->y + other.y;
	return temp;
}
