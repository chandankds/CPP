//#include<iostream>
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cstdlib>
struct emp {
	char name[30];
	int age;
	float salary;
};

int main1() {
	struct emp e[3];
	for (int i = 0; i < 3; i++) {
		printf("Name ::");
		scanf("%s", e[i].name);
		printf("age ::");
		scanf("%d", &e[i].age);
		printf("salary ::");
		scanf("%f", &e[i].salary);
	}
	for (int i = 0; i < 3; i++) {
		printf("Name is :: %s \n", e[i].name);
		printf("Age is :: %d \n", e[i].age);
		printf("Sal is :: %f \n", e[i].salary);
	}
	return 0;
}


int main() {
	struct emp* e[2];
	for (int i = 0; i < 3; i++) {
		e[i] = (struct emp*)malloc(sizeof(struct emp));
	}
	for (int i = 0; i < 3; i++) {
		printf("Name ::");
		scanf("%s", e[i]->name);
		printf("age ::");
		scanf("%d", &e[i]->age);
		printf("salary ::");
		scanf("%f", &e[i]->salary);
	}
	for (int i = 0; i < 3; i++) {
		printf("Name is :: %s \n", e[i]->name);
		printf("Age is :: %d \n", e[i]->age);
		printf("Sal is :: %f \n", e[i]->salary);
	}
	free(e[0]);
	e[0] = NULL;
	free(e[1]);
	e[1] = NULL;
	free(e[2]);
	e[2] = NULL;
	return 0;
}