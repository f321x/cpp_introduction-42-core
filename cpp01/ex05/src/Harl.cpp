/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***REMOVED*** <***REMOVED***@student.***REMOVED***.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:52:27 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/01/18 13:20:45 by ***REMOVED***            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl (void) { }

Harl::~Harl (void) { }

void	Harl::debug (void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my"
	<< "7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info (void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put"
	<< "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning (void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for"
	<< "years whereas you started working here since last month." << std::endl;
}

void	Harl::error (void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "Karen: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	FunctionPointer funcs[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string		func_names[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (func_names[i] == level)
		{
			(this->*funcs[i])();
			return ;
		}
	}
	std::cerr << "Invalid logging level!" << std::endl;
}
