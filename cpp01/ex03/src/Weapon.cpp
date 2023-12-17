/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbock <fbock@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 17:26:10 by fbock             #+#    #+#             */
/*   Updated: 2023/12/16 21:05:41 by fbock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name) : _type(name) { }

const std::string&	Weapon::getType(void)
{
	return (_type);
}

void	Weapon::setType(std::string new_type)
{
	this->_type = new_type;
}
