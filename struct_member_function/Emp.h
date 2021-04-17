#pragma once

struct emp {
	char name[20];
	int age;
	float sal;
};

void accept_record(struct emp* e);
void print_record(struct emp* e);


