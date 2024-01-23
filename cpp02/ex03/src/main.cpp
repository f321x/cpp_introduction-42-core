/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***REMOVED*** <***REMOVED***@student.***REMOVED***.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:37:41 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/01/23 11:26:29 by ***REMOVED***            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main( void ) {
	Fixed a;
	Fixed c;

	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	c = Fixed(Fixed(1) / Fixed(3));
	std::cout << c << std::endl;

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	return (0);
}
