/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***REMOVED*** <***REMOVED***@student.***REMOVED***.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:38:05 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2023/12/13 13:29:14 by ***REMOVED***            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
	PhoneBook pb1;
	std::string command;

	std::cout << "Shitty phonebook V0.1" << std::endl;
	std::cout << "You can ADD, SEARCH or EXIT." << std::endl;
	while (1)
	{
		std::cout << "Enter your command: ";
		std::getline(std::cin, command);
		if (command == "ADD")
			pb1.add();
		else if (command == "SEARCH")
			pb1.search();
		else if (command == "EXIT")
			exit(0);
		else
			std::cout << "Wrong command, use ADD, SEARCH or EXIT!" << std::endl;
	}
}
