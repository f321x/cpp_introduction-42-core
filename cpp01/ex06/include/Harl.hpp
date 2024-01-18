/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***REMOVED*** <***REMOVED***@student.***REMOVED***.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:52:34 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/01/18 13:39:44 by ***REMOVED***            ###   ########.fr       */
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
		void	filter(std::string level);

	private:
		typedef void (Harl::*FunctionPointer)();
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};
