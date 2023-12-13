/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***REMOVED*** <***REMOVED***@student.***REMOVED***.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:18:27 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2023/12/13 15:08:43 by ***REMOVED***            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _current_contact(0), _contacts_filled(false) {}

std::string PhoneBook::_get_input(void)
{
	std::string input;

	while (input.empty())
	{
		std::getline(std::cin, input);
		if (input.empty())
		{
			std::cout << "Input must contain something, try again: ";
		}
	}
	return input;
}

void	PhoneBook::add(void)
{
	std::cout << "Adding new contact..." << std::endl;
	std::cout << "Enter first name: ";
	_contacts[_current_contact].first_name = _get_input();
	std::cout << "Enter last name: ";
	_contacts[_current_contact].last_name = _get_input();
	std::cout << "Enter nickname: ";
	_contacts[_current_contact].nickname = _get_input();
	std::cout << "Enter phone number: ";
	_contacts[_current_contact].phone_nbr = _get_input();
	std::cout << "Enter darkest secret: ";
	_contacts[_current_contact].darkest_secret = _get_input();
	std::cout << "Contact successfully saved!" << std::endl;
	if (_current_contact >= 7)
	{
		_current_contact = 0;
		_contacts_filled = true;
	}
	else
		_current_contact++;
}

void	PhoneBook::search(void)
{
	uint8_t		max_index;
	std::string	user_input;

	max_index = _current_contact;
	if (_contacts_filled)
		max_index = 8;
	std::cout << std::endl << "|" << std::setw(10) << "INDEX" << "|" << std::setw(10)
		<< "FIRST NAME" << "|" << std::setw(10) << "LAST NAME" << "|"
		<< std::setw(10) << "NICKNAME" << "|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (uint8_t i = 0; i < max_index; i++)
	{
		std::cout << "|" << std::setw(10) << std::to_string(i);
        std::cout << "|" << std::setw(10) << _trunc(_contacts[i].first_name);
        std::cout << "|" << std::setw(10) << _trunc(_contacts[i].last_name);
        std::cout << "|" << std::setw(10) << _trunc(_contacts[i].nickname);
        std::cout << "|" << std::endl;
	}
	std::cout << std::endl;
	if (max_index < 1)
		return ;
	std::cout << "Enter contact index: ";
	user_input = _get_input();
	while (user_input.length() > 1 || !std::isdigit(user_input[0]) || std::stoll(user_input) < 0
			|| std::stoll(user_input) >= max_index)
	{
		std::cout << "Non-existing index, enter index between 0 and "
		<< std::to_string(max_index - 1) << ": ";
		user_input = _get_input();
	}
	_print_contact(std::stoi(user_input));
}

std::string	PhoneBook::_trunc(std::string field)
{
	if (field.length() > 10)
		field = field.substr(0, 9) + ".";
	return (field);
}

void	PhoneBook::_print_contact(uint8_t	contact_index)
{
	std::cout << std::endl;
	std::cout << std::setw(17) << "First name: " << _contacts[contact_index].first_name << std::endl;
	std::cout << std::setw(17) << "Last name: " << _contacts[contact_index].last_name << std::endl;
	std::cout << std::setw(17) << "Nickname: " << _contacts[contact_index].nickname << std::endl;
	std::cout << std::setw(17) << "Phone number: " << _contacts[contact_index].phone_nbr << std::endl;
	std::cout << std::setw(17) << "Darkest secret: " << _contacts[contact_index].darkest_secret << std::endl;
	std::cout << std::endl;
}
