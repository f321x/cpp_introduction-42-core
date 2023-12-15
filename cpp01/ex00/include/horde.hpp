/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   horde.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbock <fbock@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:56:33 by fbock             #+#    #+#             */
/*   Updated: 2023/12/15 14:57:46 by fbock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Zombie.hpp"

Zombie *newZombie(std::string name);
void	randomChump(std::string name);
