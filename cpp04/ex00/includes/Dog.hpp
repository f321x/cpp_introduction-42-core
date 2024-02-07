/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***REMOVED*** <***REMOVED***@student.***REMOVED***.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:48:40 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/02/07 20:00:48 by ***REMOVED***            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal {

	public:
		Dog(void);
		~Dog();
		Dog(const Dog& other);
		Dog&	operator=(const Dog& other);

		void	makeSound() const;
};
