#include "ScalaConverter.hpp"

void print_literals(char character, int integer, float floating, double double_nbr)
{
	std::cout << "char: ";
	if ((integer <= 33 || integer >= 126) && !(std::isnan(floating) || std::isnan(double_nbr)))
	{
		std::cout << "Not displayable" << std::endl;
	}
	else if (std::isnan(floating) || std::isnan(double_nbr))
	{
		std::cout << "impossible" << std::endl;
	}
	else
	{
		std::cout << "'" << character << "'" << std::endl;
	}

	std::cout << "int: ";
	if (std::isnan(floating) || std::isnan(double_nbr) || std::isinf(floating))
	{
		std::cout << "impossible" << std::endl;
	}
	else
	{
		std::cout << integer << std::endl;
	}

	std::cout << "float: " << floating;
	if (std::floor(floating) == floating && !std::isinf(floating))
	{
		std::cout << ".0f" << std::endl;
		std::cout << "double: " << double_nbr << ".0" << std::endl;
	}
	else
	{
		std::cout << 'f' << std::endl;
		std::cout << "double: " << double_nbr << std::endl;
	}
}

Type _parser(const std::string &input, char *character, int *integer, float *floating, double *double_nbr)
{
	Type var_type;

	try
	{
		// check if char
		if (input.length() == 1 && (input[0] >= 33 && input[0] <= 126) && !(input[0] <= '9' && input[0] >= '0'))
		{
			*character = input[0];
			var_type = CHAR;
		}
		// check if double
		else if ((input.find('.') != std::string::npos && input[input.length() - 1] != 'f') || input == "-inf" || input == "+inf" || input == "nan")
		{
			// std::cout << "double" << std::endl;
			if (input != "-inf" && input != "+inf" && input != "nan")
			{
				std::string removed_f = input.substr(0, input.length() - 1);
				*double_nbr = atof(removed_f.c_str());
			}
			else if (input == "-inf")
				*double_nbr = -std::numeric_limits<double>::infinity();
			else if (input == "+inf")
				*double_nbr = std::numeric_limits<double>::infinity();
			else if (input == "nan")
				*double_nbr = std::numeric_limits<double>::quiet_NaN();
			else
				*double_nbr = atof(input.c_str());
			var_type = DOUBLE;
		}

		// check if float
		else if ((input.find('.') != std::string::npos && input[input.length() - 1] == 'f') || input == "-inff" || input == "+inff")
		{
			// std::cout << "float" << std::endl;
			if (input != "-inff" && input != "+inff")
			{
				std::istringstream ss(input);
				ss >> *floating;
			}
			else if (input == "-inff")
				*floating = -std::numeric_limits<float>::infinity();
			else if (input == "+inff")
				*floating = std::numeric_limits<float>::infinity();
			var_type = FLOAT;
		}

		// interpret as integer
		else if (input.length() <= 10 && atoll(input.c_str()) <= INT_MAX && atoll(input.c_str()) >= INT_MIN)
		{
			for (size_t i = 0; i < input.length(); i++)
			{
				if (!isdigit(input[i]))
					throw std::runtime_error("Invalid argument.");
			}
			*integer = atoi(input.c_str());
			var_type = INT;
		}
		else
			throw std::runtime_error("Invalid argument.");
	}
	catch (const std::exception &e)
	{
		std::cerr << "Invalid argument. Check subject for valid arguments." << std::endl;
		exit(1);
	}
	return (var_type);
}

void ScalaConverter::convert(const std::string &input)
{
	char character;
	int integer;
	float floating;
	double double_nbr;
	Type var_type = _parser(input, &character, &integer, &floating, &double_nbr);

	// cast the variables
	if (var_type == CHAR)
	{
		integer = static_cast<int>(character);
		floating = static_cast<float>(character);
		double_nbr = static_cast<double>(character);
	}
	else if (var_type == INT)
	{
		character = static_cast<char>(integer);
		floating = static_cast<float>(integer);
		double_nbr = static_cast<double>(integer);
	}
	else if (var_type == FLOAT)
	{
		character = static_cast<char>(floating);
		double_nbr = static_cast<double>(floating);
		integer = static_cast<int>(floating);
	}
	else if (var_type == DOUBLE)
	{
		character = static_cast<char>(double_nbr);
		integer = static_cast<int>(double_nbr);
		floating = static_cast<float>(double_nbr);
	}
	else
	{
		std::cerr << "Invalid argument. Check subject for valid arguments." << std::endl;
		exit(1);
	}
	print_literals(character, integer, floating, double_nbr);
}
