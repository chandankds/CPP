#include<iostream>
#include<string>
#include<cstdio>
struct account {
private: char name[10];
	   int number;
	   float balance;
public:
	void get() {
		printf("Enter the name :: ");
		std::cin >> name;
		printf("Entr the number :: ");
		std::cin >> number;
		printf("Enter the balance :: ");
		std::cin >> balance;
	}
	void set(const char* name, int number, float balance) {
		strcpy(this->name, name);
		this->number = number;
		this->balance = balance;
	}

	void print() {
		printf("Name is :: %s \n", name);
		printf("number is :: %d \n", number);
		printf("Balane is :: %f \n", balance);
	}
};
int main() {
	account acc;
	acc.get();
	acc.set("chandan", 34, 3434);
	acc.print();
	return 0;
}