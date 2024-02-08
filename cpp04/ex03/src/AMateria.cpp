/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***REMOVED*** <***REMOVED***@student.***REMOVED***.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:56:07 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/02/08 12:30:09 by ***REMOVED***            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type) {
	std::cout << "AMateria type constructor called." << std::endl;
}

AMateria::AMateria(void) {

	std::cout << "AMateria constructor called." << std::endl;
}

AMateria::~AMateria() {
	std::cout << "AMateria destructor called." << std::endl;
}

AMateria::AMateria(const AMateria& other) {

	std::cout << "AMateria copy constructor called." << std::endl;
}

AMateria& AMateria::operator=(const AMateria& other) {
	if (this != &other)
	{
		//
	}
	std::cout << "AMateria copy assignement overload called." << std::endl;
}
