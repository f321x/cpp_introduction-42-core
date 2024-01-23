/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***REMOVED*** <***REMOVED***@student.***REMOVED***.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:28:34 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/01/23 14:11:29 by ***REMOVED***            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point (void) : _x(0), _y(0) { }

Point::Point (const float x, const float y) : _x(x), _y(y) { }

Point::~Point () { }

Point::Point (const Point& other) : _x(other._x), _y(other._y) { }

Point&	Point::operator=(const Point& other) {
	return (*this);
}

const Fixed&	Point::get_x(void) {
	return (_x);
}

const Fixed&	Point::get_y(void) {
	return (_y);
}
