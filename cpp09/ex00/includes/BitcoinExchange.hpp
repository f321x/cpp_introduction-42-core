#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <memory>
#include <map>
#include <forward_list>
#include <Parser.hpp>

class BitcoinExchange
{
public:
	BitcoinExchange(const std::string &input_file, const std::string &data_file);
	~BitcoinExchange();
	void run();

private:
	BitcoinExchange(const BitcoinExchange &other);
	BitcoinExchange &operator=(const BitcoinExchange &other);

	std::map<unsigned int, float> _database;
	std::unique_ptr<std::ifstream> _input_file;
};
