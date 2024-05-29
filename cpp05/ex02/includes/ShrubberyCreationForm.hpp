#pragma once
#include "AForm.hpp"
#include <string>

class ShrubberyCreationForm : public AForm {
	public:
		ShrubberyCreationForm(const std::string& target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm& other);

		const std::string& getTarget() const;
	private:
		const std::string _target;

		void _task() const;
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other); // copy assignment operator
};
