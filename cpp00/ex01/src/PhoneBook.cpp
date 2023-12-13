/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***REMOVED*** <***REMOVED***@student.***REMOVED***.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:18:27 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2023/12/13 13:33:43 by ***REMOVED***            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _current_contact(0) {}

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
		_current_contact = 0;
	else
		_current_contact++;
}

void	PhoneBook::search(void)
{

}
