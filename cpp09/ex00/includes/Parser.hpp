#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <memory>
#include <map>
#include <forward_list>

class Parser
{
public:
	~Parser();

	static std::map<unsigned int, float> parse_db_to_map(const std::string &data_filename);
	static std::unique_ptr<std::ifstream> _open_file(const std::string &input_filename, const std::string &extension);
	static unsigned int _date_to_uint(const std::string &date);

private:
	Parser();
	Parser(const Parser &other);
	Parser &operator=(const Parser &other);

	static bool _check_file_ending(const std::string &filename, const std::string &ending);
};
