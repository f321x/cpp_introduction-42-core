#pragma once
#include <string>
#include <exception>
#include <iostream>

class Bureaucrat {
	public:
		Bureaucrat(const std::string& name, int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat& other); // copy constructor

		const std::string&	getName() const;
		int					getGrade() const;
		void				increment_grade();
		void				decrement_grade();

	private:
		const std::string	_name;
		int					_grade;

		void				_check_grade(const int grade) const;

		Bureaucrat& operator=(const Bureaucrat& other); // copy assignment operator overload private as const _name can't be copied

		class GradeTooHighException : public std::exception {
			const char* what() const throw() { return "Grade too high!"; };
		};
		class GradeTooLowException : public std::exception {
			const char* what() const throw() { return "Grade too low!"; };
		};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& self);
