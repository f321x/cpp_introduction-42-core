#pragma once
#include <string>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
	public:
		Intern();
		~Intern();

		Form* makeForm(const std::string& form, const std::string& target);

	private:
		typedef Form* (Intern::*FunctionPointer)(const std::string& target);

		Form* _makeShrubbery(const std::string& target);
		Form* _makeRobotomy(const std::string& target);
		Form* _makePardon(const std::string& target);

		Intern& operator=(const Intern& other);
		Intern(const Intern& other);
		class EmptyParameterException : public std::exception {
			const char* what() const throw() { return "Empty parameters are not possible."; };
		};
		class WrongFormException : public std::exception {
			const char* what() const throw() { return "The specified Form does not exist!"; };
		};
};
