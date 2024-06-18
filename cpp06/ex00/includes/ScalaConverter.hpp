#pragma once
#include <string>
#include <climits>
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <sstream>
#include <limits>

enum Type
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	UNDEF
};

class ScalaConverter
{
public:
	static void convert(const std::string &input);

private:
	ScalaConverter();
	ScalaConverter(const ScalaConverter &);
	ScalaConverter &operator=(const ScalaConverter &);
};
