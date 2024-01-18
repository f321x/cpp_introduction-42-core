/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***REMOVED*** <***REMOVED***@student.***REMOVED***.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:24:08 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/01/18 13:38:19 by ***REMOVED***            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(int argc, char **argv)
{
	Harl	harl2;

	if (argc != 2)
	{
		std::cerr << "Wrong arguments." << std::endl;
		return (1);
	}
	harl2.filter(argv[1]);
	return (0);
}
