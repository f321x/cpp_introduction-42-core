/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbock <fbock@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 19:57:48 by fbock             #+#    #+#             */
/*   Updated: 2024/02/06 20:06:57 by fbock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		~DiamondTrap();
		DiamondTrap(const DiamondTrap& other);  // copy constructor
		DiamondTrap&	operator=(const DiamondTrap& other);  // copy assignment operator overload

	private:
		std::string _name;
};
