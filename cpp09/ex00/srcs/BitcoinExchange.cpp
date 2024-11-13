#include "BitcoinExchange.hpp"

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
	(void)other;
	throw std::runtime_error("This should not be called.");
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
	(void)other;
	throw std::runtime_error("This should not be called.");
}

BitcoinExchange::BitcoinExchange(const std::string &input_file, const std::string &data_file)
{
	_database = Parser::parse_db_to_map(data_file);
	_input_file = Parser::_open_file(input_file, ".txt");
}

void BitcoinExchange::run()
{
	std::string line;
	std::getline(*_input_file, line);
	if (line != "date | value")
		throw std::runtime_error("Invalid header line in input file");

	while (std::getline(*_input_file, line))
	{
		try
		{
			// find the split pattern
			size_t split_pattern_pos = line.find(" | ");
			if (split_pattern_pos == std::string::npos)
				throw std::runtime_error("Error: bad input => " + line);

			// parse the date
			std::string date_str = line.substr(0, split_pattern_pos);
			unsigned int date = Parser::_date_to_uint(date_str);

			// parse the amount
			std::string value_str = line.substr(split_pattern_pos + 3);
			float value = std::stof(value_str);
			if (value < 0)
				throw std::runtime_error("not a positive number.");
			else if (value > 1000)
				throw std::runtime_error("too big number.");

			// find the exchange rate
			auto it = _database.find(date);
			if (it == _database.end())
				// find next lower date
				it = _database.lower_bound(date);

			float exchange_rate = it->second;
			std::cout << date_str << " => " << value_str << " = " << exchange_rate * value << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
}
