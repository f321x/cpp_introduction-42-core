/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <***REMOVED***@student.***REMOVED***.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:08:40 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/02/08 17:19:50 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal* animals[10];

    for (int i = 0; i < 5; i++) {
        animals[i] = new Dog();
    }
    for (int i = 5; i < 10; i++) {
        animals[i] = new Cat();
    }

    for (int i = 0; i < 10; i++) {
        delete animals[i];
    }

	const Animal* j = new Dog();
	const Animal* i = new Cat();


    j->makeSound();
	i->makeSound();

	delete j;
	delete i;

	return 0;
}
