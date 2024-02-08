/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***REMOVED*** <***REMOVED***@student.***REMOVED***.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:08:42 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/02/08 11:49:42 by ***REMOVED***            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal {

	public:
		Animal(void);
		virtual ~Animal();
		Animal(const Animal& other);
		Animal&	operator=(const Animal& other);

		virtual void	makeSound() const = 0;
		std::string		getType() const;

	protected:
		std::string	_type;
};
