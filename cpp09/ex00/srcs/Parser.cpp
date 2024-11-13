#include "Parser.hpp"

Parser::Parser()
{
	throw std::runtime_error("Parser is a static class and should not be instantiated.");
}

Parser::~Parser()
{
}

Parser::Parser(const Parser &other)
{
	(void)other;
	throw std::runtime_error("Parser is a static class and should not be instantiated.");
}

Parser &Parser::operator=(const Parser &other)
{
	(void)other;
	throw std::runtime_error("Parser is a static class and should not be instantiated.");
}

std::map<unsigned int, float> Parser::parse_db_to_map(const std::string &data_filename)
{
	std::unique_ptr<std::ifstream> file = _open_file(data_filename, ".csv");

	std::map<unsigned int, float> database;
	std::string line;

	std::getline(*file, line);
	if (line != "date,exchange_rate")
		throw std::runtime_error("Invalid header line in database");

	while (std::getline(*file, line))
	{
		unsigned int date = _date_to_uint(line.substr(0, line.find(',')));
		float value = std::stof(line.substr(line.find(',') + 1));

		database[date] = value;
	}

	// check if empty
	if (database.empty())
		throw std::runtime_error("Database is empty");
	return database;
}

// A valid date will always be in the following format: Year-Month-Day.
unsigned int Parser::_date_to_uint(const std::string &date)
{
	if (date.length() != 10)
		throw std::runtime_error("Invalid date format. use YYYY-MM-DD");
	if (date.at(4) != '-' || date.at(7) != '-')
		throw std::runtime_error("Invalid date format. use YYYY-MM-DD");
	std::string year = date.substr(0, 4);
	if (std::stoi(year) < 2009 || std::stoi(year) > 2200)
		throw std::runtime_error("Invalid year. Bitcoin was proposed in 2008 and the first block was mined in 2009.");
	std::string month = date.substr(5, 2);
	if (std::stoi(month) < 1 || std::stoi(month) > 12)
		throw std::runtime_error("Invalid month. Use a number between 1 and 12.");
	std::string day = date.substr(8, 2);
	if (std::stoi(day) < 1 || std::stoi(day) > 31)
		throw std::runtime_error("Invalid day. Use a number between 1 and 31.");
	return std::stoi(year + month + day);
}

std::unique_ptr<std::ifstream> Parser::_open_file(const std::string &input_filename, const std::string &extension)
{
	if (!_check_file_ending(input_filename, extension))
		throw std::runtime_error("Invalid file extension");
	auto input_file = std::make_unique<std::ifstream>(input_filename);
	if (!input_file->is_open())
		throw std::runtime_error("Could not open file");
	return input_file;
}

bool Parser::_check_file_ending(const std::string &filename, const std::string &ending)
{
	if (filename.length() > ending.length())
	{
		return (0 == filename.compare(filename.length() - ending.length(), ending.length(), ending));
	}
	return false;
}
