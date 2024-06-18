#include "ScalaConverter.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		std::string input(argv[1]);
		ScalaConverter::convert(input);
		return 0;
	}
	std::cerr << "Invalid argument. Check subject for correct arguments." << std::endl;
	return 1;
}
