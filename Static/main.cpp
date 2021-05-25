#include<iostream>


class temp {
private:
	int num;
	static int snum;
public:
	void printRecord() {
		std::cout << num << std::endl;
		std::cout << temp::snum << std::endl;
	}
};

static int temp::snum;

int main() {
	temp t;
	t.printRecord();
	return 0;
}