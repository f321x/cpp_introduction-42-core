/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbock <fbock@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:43:23 by fbock             #+#    #+#             */
/*   Updated: 2023/12/13 15:09:17 by fbock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook {
	public:
		void	add(void);
		void	search();

		PhoneBook(void);
	private:
		Contact _contacts[8];
		uint8_t	_current_contact;
		bool	_contacts_filled;

		std::string	_get_input(void);
		std::string	_trunc(std::string field);
		void		_print_contact(uint8_t contact_index);
};
