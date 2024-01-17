/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***REMOVED*** <***REMOVED***@student.***REMOVED***.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:24:08 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/01/17 15:02:05 by ***REMOVED***            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

e_debug_level	fetch_debug_level(char **argv)
{
	e_debug_level	dl;
	std::string input_arg = argv[1];
	std::map<std::string, e_debug_level> dl_map;

	dl_map["DEBUG"] = DEBUG;
	dl_map["INFO"] = INFO;
	dl_map["WARNING"] = WARNING;
	dl_map["ERROR"] = ERROR;

	std::map<std::string, e_debug_level>::iterator it = dl_map.find(input_arg);
	if (it != dl_map.end())
    	dl = it->second;
	else
    	dl = WRONG;
	return (dl);
}

void	filter_complaint(char **argv)
{
	Harl	harl;

	switch (fetch_debug_level(argv))
	{
		case DEBUG:
			harl.complain("DEBUG");
			harl.complain("INFO");
			harl.complain("WARNING");
			harl.complain("ERROR");
			break ;
		case INFO:
			harl.complain("INFO");
			harl.complain("WARNING");
			harl.complain("ERROR");
			break ;
		case WARNING:
			harl.complain("WARNING");
			harl.complain("ERROR");
			break ;
		case ERROR:
			harl.complain("ERROR");
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

int	main(int argc, char **argv)
{
	Harl	harl;

	if (argc != 2)
	{
		std::cerr << "Wrong arguments." << std::endl;
		return (1);
	}
	filter_complaint(argv);

	return (0);
}
