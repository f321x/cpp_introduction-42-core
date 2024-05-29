#include "Form.hpp"

Form::Form(const std::string& name,
			const int grade_to_sign,
			const int grade_to_execute)
			: _name(name),
			_grade_to_sign(grade_to_sign),
			_grade_to_execute(grade_to_execute) {
	this->_signed = false;
	_check_grade(grade_to_sign);
	_check_grade(grade_to_execute);
}  // constructor

Form::~Form() { }

Form::Form(const Form& other) :
								_name(other._name),
								_grade_to_sign(other._grade_to_sign),
								_grade_to_execute(other._grade_to_execute) {
	this->_signed = other._signed;
	_check_grade(other._grade_to_sign);
	_check_grade(other._grade_to_execute);
}

std::ostream& operator<<(std::ostream& os, const Form& self) {
	os << "Form" << self.getName() << ", grade to sign " << self.getGradeToSign()
	<< ", Grade to execute: " << self.getGradeToExecute() << ", Is signed: "
	<< self.isSigned() << std::endl;
    return os;
}

void	Form::_check_grade(const int grade) const {
	if (grade < 1) {
		throw GradeTooHighException();
	} else if (grade > 150) {
		throw GradeTooLowException();
	};
}

const std::string&	Form::getName() const {
	return (this->_name);
}

int	Form::getGradeToSign() const {
	return (this->_grade_to_sign);
}

int	Form::getGradeToExecute() const {
	return (this->_grade_to_execute);
}

bool	Form::isSigned() const {
	return (this->_signed);
}

void	Form::beSigned(const Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() <= this->_grade_to_sign) {
		if (_signed)
			throw AlreadySignedException();
		else {
			_signed = true;
		}
	}
	else {
		throw GradeTooLowException();
	}
}
