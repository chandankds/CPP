#include<iostream>

namespace narray {

	class Array {
	private:
		int size;
		int* arr;
	public:
		Array(int size);
		Array(const Array& other);
		void acceptRecord( void );
		void printRecord( void )const;
		~Array();
	};
}
