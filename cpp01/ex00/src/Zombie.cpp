/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbock <fbock@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 14:42:59 by fbock             #+#    #+#             */
/*   Updated: 2023/12/14 15:22:16 by fbock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string arg_name) : name(arg_name) { }

Zombie::~Zombie(void) {}

void	Zombie::announce(void)
{
	std::cout << name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

