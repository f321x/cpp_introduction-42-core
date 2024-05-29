#pragma once

#include <string>
#include <exception>
#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	public:
		Form(const std::string& name, const int grade_to_sign, const int grade_to_execute);  // constructor
		~Form();  // destructor
		Form(const Form& other); // copy constructor

		const std::string& getName() const;
		int	getGradeToSign() const;
		int getGradeToExecute() const;
		bool isSigned() const;
		// virtual const std::string& getTarget() const = 0;
		void beSigned(const Bureaucrat& bureaucrat);
		void execute(Bureaucrat const & executor) const;

	private:
		const std::string	_name;
		bool				_signed;
		const int			_grade_to_sign;
		const int			_grade_to_execute;

		Form& operator=(const Form& other); // copy assignment operator
		void	_check_grade(const int grade) const;
		virtual void _task() const = 0;

		class GradeTooHighException : public std::exception {
			const char* what() const throw() { return "Grade too high!"; };
		};
		class GradeTooLowException : public std::exception {
			const char* what() const throw() { return "Grade too low!"; };
		};
		class NotSignedException : public std::exception {
			const char* what() const throw() { return "Form is not signed!"; };
		};
		class AlreadySignedException: public std::exception {
			const char* what() const throw() { return "Form is already signed!"; };
		};
};

std::ostream& operator<<(std::ostream& os, const Form& self);
