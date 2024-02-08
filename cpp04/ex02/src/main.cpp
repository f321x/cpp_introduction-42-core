/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***REMOVED*** <***REMOVED***@student.***REMOVED***.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:08:40 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/02/08 11:51:49 by ***REMOVED***            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
// #include "WrongCat.hpp"

int main()
{
	Animal* animals[10];

    Animal animal;  // test for ex02

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

	delete j;//should not create a leak
	delete i;

	return 0;
}