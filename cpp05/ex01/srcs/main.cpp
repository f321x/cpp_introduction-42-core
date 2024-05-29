#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	Bureaucrat testman("Olaf", 1);
	Bureaucrat testwoman("Alice", 150);
	Form form28b("28b", 21, 42);
	Form form47c("47c", 144, 2);

	std::cout << "From1: " << form28b << "\nForm2: " << form47c << std::endl;

	try {
		std::cout << "Get grade to sign: " << form28b.getGradeToSign() << std::endl;
		std::cout << "Get grade to execute: " << form28b.getGradeToExecute() << std::endl;
		std::cout << "Get name: "<< form28b.getName() << std::endl;
		std::cout << "Get signing state: " << form28b.isSigned() << std::endl;

		form28b.beSigned(testman);
		form28b.beSigned(testman);
		form47c.beSigned(testwoman);
	} catch (std::exception & e) {
		std::cerr << "Caught exception: " << e.what() << std::endl;
	};
	return 0;
};
