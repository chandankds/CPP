

namespace ncomplex {
	class complex {
	private:
		int real;
		int imag;
	public:
		complex();
		void acceptRecord(void);
		void printRecord(void);
		complex add(complex *ptr);
	};
}