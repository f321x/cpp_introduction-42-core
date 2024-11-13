#include "RPN.hpp"

RPN::RPN(const std::string &eingabe) : _eingabe(eingabe)
{
	// ueberpruefe auf ungueltige symbole in eingabe
	_validiere_eingabe(eingabe);
}

RPN::~RPN()
{
}

bool RPN::_is_operator(char c)
{
	return c == '+' || c == '-' || c == '*' || c == '/';
}

int RPN::ausrechnen()
{
	std::stack<int> stapel;

	for (size_t i = 0; i < _eingabe.size(); i++)
	{
		if (_eingabe[i] != ' ' && !_is_operator(_eingabe[i]))
		{
			stapel.push(_eingabe[i] - '0');
		}
		else if (_is_operator(_eingabe[i]))
		{
			if (stapel.size() == 1 && (_eingabe[i] == '-' || _eingabe[i] == '+'))
			{
				int buffer = stapel.top();
				stapel.pop();
				stapel.push(0);
				stapel.push(buffer);
			}
			if (stapel.size() < 2)
				throw std::invalid_argument("Error");

			int a = stapel.top();
			stapel.pop();
			int b = stapel.top();
			stapel.pop();

			if (_eingabe[i] == '+')
				stapel.push(b + a);
			else if (_eingabe[i] == '-')
				stapel.push(b - a);
			else if (_eingabe[i] == '*')
				stapel.push(a * b);
			else if (_eingabe[i] == '/')
			{
				if (a == 0)
					throw std::invalid_argument("Error");
				stapel.push(b / a);
			}
		}
	}
	if (stapel.size() != 1)
		throw std::invalid_argument("Error");

	return stapel.top();
}

void RPN::_validiere_eingabe(const std::string &eingabe)
{
	for (size_t i = 0; i < eingabe.length(); i++)
	{
		// ungueltige zeichen
		if (eingabe[i] != '+' && eingabe[i] != '-' && eingabe[i] != '*' && eingabe[i] != '/' && eingabe[i] != ' ' && !std::isdigit(eingabe[i]))
			throw std::invalid_argument("Error");

		// zwei zahlen hintereinander
		if (std::isdigit(eingabe[i]) && eingabe.length() > (i + 1) && std::isdigit(eingabe[i + 1]))
			throw std::invalid_argument("Error");

		if (eingabe[i] == '+' || eingabe[i] == '-' || eingabe[i] == '*' || eingabe[i] == '/')
		{
			// kein operator moeglich nach dieser laenge
			if (i < 4)
				throw std::invalid_argument("Error");

			// operator am anfang der eingabe oder kein leerzeichen nach operator und nicht am ende
			if (i == 0 || (i + 1 != eingabe.length() && eingabe[i + 1] != ' '))
				throw std::invalid_argument("Error");

			// nicht zwei einzelne zahlen vor operator
			// if (i > 3 && !std::isdigit(eingabe[i - 2]) && !std::isdigit(eingabe[i - 4]))
			// 	throw std::invalid_argument("Error");
		}
	}
}
