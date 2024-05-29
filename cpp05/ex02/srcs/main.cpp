#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main() {
	Bureaucrat testman("Olaf", 1);
	Bureaucrat testwoman("Alice", 150);

	ShrubberyCreationForm form28b("trees");
	PresidentialPardonForm form47c("Julien Assange");
	RobotomyRequestForm form72("Robotary Kenedy");

	try {
		testman.signForm(form28b);
		testman.signForm(form28b);

		testman.signForm(form47c);
		testman.signForm(form72);

		testwoman.signForm(form28b);
		testwoman.signForm(form47c);
		testwoman.signForm(form72);

		testman.executeForm(form28b);
		testman.executeForm(form47c);
		testman.executeForm(form72);

		testwoman.executeForm(form28b);
		testwoman.executeForm(form47c);
		testwoman.executeForm(form72);

	} catch (std::exception & e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return 0;
};
