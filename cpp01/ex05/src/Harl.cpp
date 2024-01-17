/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***REMOVED*** <***REMOVED***@student.***REMOVED***.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:52:27 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/01/17 14:32:36 by ***REMOVED***            ###   ########.fr       */
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
	std::map<std::string, void (Harl::*)()> function_map;
	function_map["DEBUG"] = &Harl::debug;
	function_map["INFO"] = &Harl::info;
	function_map["WARNING"] = &Harl::warning;
	function_map["ERROR"] = &Harl::error;

    std::map<std::string, void (Harl::*)()>::iterator i = function_map.find(level);
    if (i != function_map.end())
	{
        (this->*(i->second))();
    }
	else
	{
        std::cout << "Invalid debug level: " << level << std::endl;
    }
}
