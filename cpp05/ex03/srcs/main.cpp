#include "Intern.hpp"

int main() {
	Bureaucrat testman("Olaf", 1);

	Intern namelessIntern2;
	Form* rrf;

	rrf = namelessIntern2.makeForm("robotomy request", "Bender");
	// rrf = namelessIntern2.makeForm("robotomy requestA", "Bender");

	testman.signForm(*rrf);
	testman.executeForm(*rrf);

	return 0;
};
