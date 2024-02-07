/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***REMOVED*** <***REMOVED***@student.***REMOVED***.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 20:11:52 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/02/07 20:20:06 by ***REMOVED***            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal {

	public:
		WrongCat(void);
		~WrongCat();
		WrongCat(const WrongCat& other);
		WrongCat&	operator=(const WrongCat& other);

		void	makeSound() const;

};
