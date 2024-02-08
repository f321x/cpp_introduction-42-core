/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <***REMOVED***@student.***REMOVED***.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:52:30 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/02/08 17:45:30 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        _source[i] = NULL;
    }
    std::cout << "MateriaSource constructor called." << std::endl;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        delete _source[i];
    }
	std::cout << "MateriaSource destructor called." << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
    for (int i = 0; i < 4; i++)
    {
        if (other._source[i])
            _source[i] = other._source[i]->clone();
        else
            _source[i] = NULL;
    }
	std::cout << "MateriaSource copy constructor called." << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
        {
            delete _source[i];
            if (other._source[i])
                _source[i] = other._source[i]->clone();
            else
                _source[i] = NULL;
        }
    }
    return *this;
	std::cout << "MateriaSource copy assignment operator overload called." << std::endl;
}

void MateriaSource::learnMateria(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (_source[i] == NULL)
        {
            _source[i] = m->clone();
            break;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; i++)
    {
        if (_source[i] && _source[i]->getType() == type)
            return _source[i]->clone();
    }
    return NULL;
}
