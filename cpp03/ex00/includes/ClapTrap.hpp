/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***REMOVED*** <***REMOVED***@student.***REMOVED***.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:06:20 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/01/31 18:12:12 by ***REMOVED***            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class ClapTrap {

	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(const ClapTrap& other);  // copy constructor
		ClapTrap&	operator=(const ClapTrap& other);  // copy assignment operator overload

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	private:
		std::string		_name;  // passed as arg to constructor
		long			_hitPoints;  // 10, represent health of ClapTrap
		long			_energyPoints;  // 10
		long			_attackDamage;  // 0
};
