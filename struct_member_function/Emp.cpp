#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include"Emp.h"

void accept_record(struct emp* e) {
	printf("Enter name :: ");
	scanf("%s", e->name);
	printf("Enter Age :: ");
	scanf("%d", &e->age);
	printf("Enter Sal :: ");
	scanf("%f", &e->sal);

}
void print_record(struct emp* e) {
	printf("Name is %s", e->name);
	printf("Age is %d", e->age);
	printf("Sal is %f", e->sal);
}
