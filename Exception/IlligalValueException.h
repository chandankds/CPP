#include<string>

namespace nexception{

	class IlligalException {
	private:
		std::string message;
	public: 
		IlligalException(std::string message = "Illigal Exception is called");
		void setMessage(std::string message);
		std::string getMessage(void) const;
};
}