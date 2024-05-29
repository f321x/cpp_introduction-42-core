#include "Bureaucrat.hpp"

int main() {
	Bureaucrat testman("Olaf", 1);
	Bureaucrat testwoman("Alice", 150);

	std::cout << "Testman: " << testman << "\nTestwoman: " << testwoman << std::endl;

	try {
		std::cout << "Get grade: " << testman.getGrade() << std::endl;
		std::cout << "Get name: "<< testman.getName() << std::endl;

		testman.increment_grade();
		// testwoman.decrement_grade();
		// Bureaucrat	willneverlive("Name doesn't matter", 155);
	} catch (std::exception & e) {
		std::cerr << "Caught exception: " << e.what() << std::endl;
	};

	return 0;
};
