#include<iostream>

namespace npoint {
	class Point {
	private:
		int x;
		int y;
	public:
		Point(int x=0, int y = 0 );
		void printRecord(void);
		Point operator+(Point Other) const;
	};
}