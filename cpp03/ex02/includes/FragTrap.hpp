/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***REMOVED*** <***REMOVED***@student.***REMOVED***.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:36:04 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/02/06 19:13:50 by ***REMOVED***            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public:
		FragTrap(void);
		FragTrap(std::string name);
		~FragTrap();
		FragTrap(const FragTrap& other);  // copy constructor
		FragTrap&	operator=(const FragTrap& other);  // copy assignment operator overload

		void	attack(const std::string& target);
		void	highFivesGuys(void);
	private:


};
