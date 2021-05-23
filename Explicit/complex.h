

namespace ncomplex {
	class complex {
	private:
		int real;
		int imag;
	public:
		complex(); //Dont give return type ctor dont have any
		explicit complex(int real);//can be given as a single prameter or multiple your choice
		complex(int real, int imag);
		operator int();
		void acceptRecord();
		void printRecord() const;
	};

}