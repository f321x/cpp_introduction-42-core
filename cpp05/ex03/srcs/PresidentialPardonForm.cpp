#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
	: Form("PresidentialPardonForm", 25, 5), _target(target) {

}

PresidentialPardonForm::~PresidentialPardonForm() { }

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) :
								Form(other), _target(other._target) { }

const std::string& PresidentialPardonForm::getTarget() const {
	return _target;
}

void	PresidentialPardonForm::_task() const {
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
