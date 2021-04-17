#include<cstdio>

int num1 = 30;
//We can define almost eveything inside namespace CLASS Functions etc etc but not the main function...
namespace na {
	int num1 = 10;
	namespace nb {
		int num1 = 40;
	}
}

int main() {
	int num1 = 20;
	printf("The value of num1 is %d \n", num1); //Local
	printf("The value of num1 is %d \n", na::num1);  //namespace 
	printf("The value of num1 is %d \n", na::nb::num1);  //namespace  inside namespace
	printf("The value of num1 is %d \n", ::num1);  //global

	return 0;
}
