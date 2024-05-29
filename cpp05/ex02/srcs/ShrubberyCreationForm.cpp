#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
	: AForm("ShrubberyCreationForm", 145, 137), _target(target) {

}

ShrubberyCreationForm::~ShrubberyCreationForm() { }

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) :
								AForm(other), _target(other._target) { }

const std::string& ShrubberyCreationForm::getTarget() const {
	return _target;
}

void ShrubberyCreationForm::_task() const {
	std::ofstream file((_target + "_shrubbery").c_str());

    if (file.is_open()) {
        file << "  ^  \n";
        file << " ^^^ \n";
        file << "^^^^^\n";
        file << "  |  \n";
        file << "  ^  \n";
        file << " ^^^ \n";
        file << "^^^^^\n";
        file << "  |  \n\n";
		file << "************\n";
		file << "     ^     \n";
		file << "    ^^^    \n";
		file << "   ^^^^^   \n";
		file << "  ^^^^^^^  \n";
		file << " ^^^^^^^^^ \n";
		file << "^^^^^^^^^^^\n";
		file << "     |     \n";
		file << "     |     \n";
        file.close();
    } else {
        std::cout << "Unable to open file";
    }
}
