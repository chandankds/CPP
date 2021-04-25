
#pragma once


namespace ntest {
	class Test {
	private: 
		char& cr;
	public: 
		Test(char c);
		void printRecord();
		void changeRecord();
	};

}