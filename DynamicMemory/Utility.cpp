#include "Utility.h"


	int** nutility::createMemory(int size){
		int **ptr = new int* [size];
		for (int i = 0; i < size; i++) {
			ptr[i] = new int[size];
		}
		return ptr;
	}
	
	void nutility::acceptRecord(int** ptr, int size) {
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				std::cout << "Enter the value of the location " << i << j << std::endl;
				std::cin >> ptr[i][j];
			}
		}
	}

	void nutility::printRecord(int** ptr, int size) {
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				std::cout << ptr[i][j] << "	";
			}
			std::cout << std::endl;
		}
		std::cout << std::endl;
	}

	void nutility::freeMemory(int** ptr, int size) {
		for (int i = 0; i < size; i++) {
			delete[] ptr[i];
		}
		delete[] ptr;
		std::cout << "Memory freed successfully" << std::endl;
	}

