/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <***REMOVED***@student.***REMOVED***.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:40:14 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/01/17 14:09:38 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

bool	Sed::_open_files (std::string filename)
{
	_in_fs.open(filename.c_str());
	if (_in_fs.is_open())
	{
		_out_fs.open((filename + ".replace").c_str(), std::ios::out);
		if (_out_fs.is_open())
			return (true);
	}
	else
		return (false);
	return (false);
}

void	Sed::replace_and_export (std::string s1, std::string s2)
{
	std::string	current_line;
	size_t		length;
	size_t		position;

	if (_invalid_ip)
		return ;
	length = s1.length();
	while (getline(_in_fs, current_line))
	{
		while (1 && !s1.empty() && !s2.empty() && s1 != s2)
        {
            position = current_line.find(s1);
            if (position != std::string::npos)
                current_line = current_line.substr(0, position) +
				s2 + current_line.substr(position + length);
            else
                break;
        }
		_out_fs << current_line << "\n";
	}
}

void	Sed::_close_fs (void)
{
	if (_in_fs.is_open())
		_in_fs.close();
	if (_out_fs.is_open())
		_out_fs.close();
}

Sed::Sed (std::string filename) : _invalid_ip(false)
{
	if (!_open_files(filename))
	{
		_invalid_ip = true;
		std::cerr << "Invalid input, can't open file!" << std::endl;
	}
}

Sed::~Sed (void) {
	_close_fs();
}
