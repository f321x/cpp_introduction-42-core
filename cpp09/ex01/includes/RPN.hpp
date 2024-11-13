#pragma once

#include <string>
#include <iostream>
#include <stack>

class RPN
{
public:
	RPN(const std::string &eingabe);
	~RPN();
	int ausrechnen();

private:
	void _validiere_eingabe(const std::string &eingabe);
	bool _is_operator(char c);

	std::string _eingabe;
};
