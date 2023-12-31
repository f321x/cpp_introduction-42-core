/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbock <fbock@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:30:35 by fbock             #+#    #+#             */
/*   Updated: 2023/12/15 14:56:54 by fbock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "horde.hpp"

void	randomChump(std::string name)
{
	Zombie new_zombie(name);
	new_zombie.announce();
}
