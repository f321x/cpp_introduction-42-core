/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbock <fbock@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:52:34 by fbock             #+#    #+#             */
/*   Updated: 2024/01/18 13:24:22 by fbock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	Harl
{
	public:
		Harl(void);
		~Harl(void);
		void	complain(std::string level);

	private:
		typedef void (Harl::*FunctionPointer)();
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};
