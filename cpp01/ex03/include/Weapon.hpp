/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbock <fbock@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 17:26:02 by fbock             #+#    #+#             */
/*   Updated: 2023/12/16 21:04:47 by fbock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Weapon {
	public:
		Weapon(std::string name);
		const std::string&	getType(void);
		void				setType(std::string new_type);
	private:
		std::string	_type;
};
