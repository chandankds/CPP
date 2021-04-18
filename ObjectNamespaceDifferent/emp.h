#pragma once

#include"emp.h"

namespace nemp {
	class emp {
	private:
		char name[10];
		int empid;
		float salary;
	public:
		void set(void);
		void print(void);
	};
}