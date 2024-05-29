#pragma once
#include "Form.hpp"
#include <cstdlib>

class RobotomyRequestForm : public Form {
	public:
		RobotomyRequestForm(const std::string& target);
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm& other);

		const std::string& getTarget() const;
	private:
		const std::string _target;

		void _task() const;
		RobotomyRequestForm& operator=(const RobotomyRequestForm& other); // copy assignment operator
};
