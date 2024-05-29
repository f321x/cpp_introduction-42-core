#pragma once
#include "Form.hpp"

class PresidentialPardonForm : public Form {
	public:
		PresidentialPardonForm(const std::string& target);
		~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm& other);

		const std::string& getTarget() const;
	private:
		const std::string _target;

		void _task() const;
		PresidentialPardonForm& operator=(const PresidentialPardonForm& other); // copy assignment operator
};
