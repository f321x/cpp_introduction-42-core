#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Benutzung: ./RPN [umgekehrt polnische notation]" << std::endl;
		return 1;
	}

	try
	{
		RPN umgekehrte_polnische_notation_rechner{std::string(argv[1])};
		int ergebnis = umgekehrte_polnische_notation_rechner.ausrechnen();
		std::cout << ergebnis << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error" << std::endl;
		return 1;
	}
	return 0;
}
