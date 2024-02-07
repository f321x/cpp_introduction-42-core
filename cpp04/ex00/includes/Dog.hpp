/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbock <fbock@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:48:40 by fbock             #+#    #+#             */
/*   Updated: 2024/02/07 20:00:48 by fbock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal {

	public:
		Dog(void);
		~Dog();
		Dog(const Dog& other);
		Dog&	operator=(const Dog& other);

		void	makeSound() const;
};
