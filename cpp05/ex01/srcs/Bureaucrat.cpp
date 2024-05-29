#include <Bureaucrat.hpp>

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name) {
	_check_grade(grade);
	this->_grade = grade;
}

Bureaucrat::~Bureaucrat() { }

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name) {
	_grade = other._grade;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& self) {
	os << self.getName() << ", bureaucrat grade " << self.getGrade();
    return os;
}

void	Bureaucrat::_check_grade(const int grade) const {
	if (grade < 1) {
		throw GradeTooHighException();
	} else if (grade > 150) {
		throw GradeTooLowException();
	};
}

const std::string&	Bureaucrat::getName() const {
	return (this->_name);
}

int	Bureaucrat::getGrade() const {
	return (this->_grade);
}

void	Bureaucrat::increment_grade() {
	this->_grade--;
	_check_grade(this->_grade);
}

void Bureaucrat::decrement_grade() {
	this->_grade++;
	_check_grade(this->_grade);
}

void Bureaucrat::signForm(Form& form_to_sign) const {
	try {
		form_to_sign.beSigned(*this);
		std::cout << _name << " signed " << form_to_sign.getName() << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	};
}
