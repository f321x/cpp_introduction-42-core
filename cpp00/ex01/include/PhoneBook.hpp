/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbock <fbock@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:43:23 by fbock             #+#    #+#             */
/*   Updated: 2023/12/13 13:19:55 by fbock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Contact.hpp"

class PhoneBook {
	public:
		void	add(void);
		void	search();

		PhoneBook(void);
	private:
		Contact _contacts[8];
		uint8_t	_current_contact;

		std::string	_get_input(void);
};
