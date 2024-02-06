/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***REMOVED*** <***REMOVED***@student.***REMOVED***.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:36:04 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/02/06 20:05:27 by ***REMOVED***            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(const ScavTrap& other);  // copy constructor
		ScavTrap&	operator=(const ScavTrap& other);  // copy assignment operator overload

		void	guardGate();
		void	attack(const std::string& target);
	private:


};
