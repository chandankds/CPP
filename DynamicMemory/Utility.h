#include<iostream>

namespace nutility{
	int** createMemory(int size);
	void acceptRecord(int** ptr, int size);
	void printRecord(int** ptr, int size);
	void freeMemory(int** ptr, int size);
}