/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***REMOVED*** <***REMOVED***@student.***REMOVED***.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 20:12:34 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/02/07 20:20:22 by ***REMOVED***            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal {
	public:
		WrongAnimal(void);
		~WrongAnimal();
		WrongAnimal(const WrongAnimal& other);
		WrongAnimal&	operator=(const WrongAnimal& other);

		void			makeSound() const;
		std::string		getType() const;

	protected:
		std::string	_type;
};
