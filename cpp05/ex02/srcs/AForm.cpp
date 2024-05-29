#include "AForm.hpp"

AForm::AForm(const std::string& name,
			const int grade_to_sign,
			const int grade_to_execute)
			: _name(name),
			_grade_to_sign(grade_to_sign),
			_grade_to_execute(grade_to_execute) {
	this->_signed = false;
	_check_grade(grade_to_sign);
	_check_grade(grade_to_execute);
}  // constructor

AForm::~AForm() { }

AForm::AForm(const AForm& other) :
								_name(other._name),
								_grade_to_sign(other._grade_to_sign),
								_grade_to_execute(other._grade_to_execute) {
	this->_signed = other._signed;
	_check_grade(other._grade_to_sign);
	_check_grade(other._grade_to_execute);
}

std::ostream& operator<<(std::ostream& os, const AForm& self) {
	os << "AForm" << self.getName() << ", grade to sign " << self.getGradeToSign()
	<< ", Grade to execute: " << self.getGradeToExecute() << ", Is signed: "
	<< self.isSigned() << std::endl;
    return os;
}

void	AForm::_check_grade(const int grade) const {
	if (grade < 1) {
		throw GradeTooHighException();
	} else if (grade > 150) {
		throw GradeTooLowException();
	};
}

const std::string&	AForm::getName() const {
	return (this->_name);
}

int	AForm::getGradeToSign() const {
	return (this->_grade_to_sign);
}

int	AForm::getGradeToExecute() const {
	return (this->_grade_to_execute);
}

bool	AForm::isSigned() const {
	return (this->_signed);
}

void	AForm::beSigned(const Bureaucrat& bureaucrat) {
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

void AForm::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() <= this->_grade_to_execute) {
		if (_signed)
			_task();
		else {
			throw NotSignedException();
		}
	} else {
		throw GradeTooLowException();
	}
}
