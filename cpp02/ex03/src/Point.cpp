/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <***REMOVED***@student.***REMOVED***.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:28:34 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/01/23 13:58:46 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point (void) : _x(0), _y(0) { }

Point::Point (const float x, const float y) : _x(x), _y(y) { }

Point::~Point () { }

Point::Point (const Point& other) : _x(other._x), _y(other._y) { }

Point&	Point::operator=(const Point& other) {
	if (this != &other)
	{
		std::cout << "can't copy const values" << std::endl;
		return (*this);
	}
	return (*this);
}

const Fixed&	Point::get_x(void) const {
	return (_x);
}

const Fixed&	Point::get_y(void) const {
	return (_y);
}
