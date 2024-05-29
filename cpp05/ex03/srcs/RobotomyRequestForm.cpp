#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
	: Form("RobotomyRequestForm", 72, 45), _target(target) {

}

RobotomyRequestForm::~RobotomyRequestForm() { }

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) :
								Form(other), _target(other._target) { }

const std::string& RobotomyRequestForm::getTarget() const {
	return _target;
}

void RobotomyRequestForm::_task() const {
	srand(time(NULL));
	bool robotomize = rand() > (RAND_MAX / 2);

	if (robotomize) {
		std::cout << _target << " has been robotomized successfully!" << std::endl;
	} else {
		std::cout << _target << " robotomy failed!" << std::endl;
	}
}
