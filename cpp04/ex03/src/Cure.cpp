/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbock <fbock@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:01:41 by fbock             #+#    #+#             */
/*   Updated: 2024/02/08 12:16:07 by fbock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure (void) {
	_type = "cure";
	std::cout << "Cure default constructor called." << std::endl;
}

Cure::~Cure() {
	std::cout << "Cure destructor called.";
}

Cure::Cure(const Cure& other) {
	std::cout << "Cure copy constructor called." << std::endl;
}

Cure& Cure::operator=(const Cure& other) {
	if (this != &other)
	{
		//
	}
	std::cout << "Cure copy assignement overload called." << std::endl;
}
