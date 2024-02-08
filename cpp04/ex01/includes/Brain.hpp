/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <***REMOVED***@student.***REMOVED***.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 10:33:54 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/02/08 16:57:14 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain {
	public:
		Brain(void);
		~Brain();
		Brain(const Brain& other);
		Brain&	operator=(const Brain& other);

		void setBrain(int index, std::string idea);
		void getBrain(int index, std::string idea);
	private:
		std::string _ideas[100];
};
