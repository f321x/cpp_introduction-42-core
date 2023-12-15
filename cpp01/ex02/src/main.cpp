/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***REMOVED*** <***REMOVED***@student.***REMOVED***.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:30:22 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2023/12/15 16:38:47 by ***REMOVED***            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string hi = "HI THIS IS BRAIN";

	std::string *ptr = &hi;
	std::string& ref = hi;

	std::cout << &hi << " <- hi address" << std::endl;
	std::cout << ptr << " <- ptr* address" << std::endl;
	std::cout << &ref << " <- ref address" << std::endl;

	std::cout << hi << " <- hi value" << std::endl;
	std::cout << *ptr << " <- ptr* value" << std::endl;
	std::cout << ref << " <- ref value" << std::endl;
}
