#include "Intern.hpp"

Intern::Intern() { }

Intern::~Intern() { }

Form* Intern::_makeShrubbery(const std::string& target) {
	return (new ShrubberyCreationForm(target));
}

Form* Intern::_makeRobotomy(const std::string& target) {
	return (new RobotomyRequestForm(target));
}

Form* Intern::_makePardon(const std::string& target) {
	return (new PresidentialPardonForm(target));
}

Form* Intern::makeForm(const std::string& form, const std::string& target) {
	const std::string forms[] = {"robotomy request",
								"presidential pardon request",
								"shrubbery request"};
	const FunctionPointer funcs[] = {&Intern::_makeRobotomy, &Intern::_makePardon, &Intern::_makeShrubbery};

	if (form.empty() || target.empty())
		throw EmptyParameterException();
	for (unsigned long i = 0; i < forms->length(); i++) {
		if (forms[i] == form) {
			std::cout << "Intern creates " << form << std::endl;
			return (this->*funcs[i])(target);
		}
	}
	throw WrongFormException();
}
