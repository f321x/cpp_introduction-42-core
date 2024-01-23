/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbock <fbock@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:29:10 by fbock             #+#    #+#             */
/*   Updated: 2024/01/23 14:13:03 by fbock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point	calc_area(Point const x, Point const y, Point const z)
{
	Fixed	XYx(y.get_x() - x.get_x());
	Fixed	XYy(y.get_y() - x.get_y());
	Fixed	XZx(y.get_x() - x.get_x());
	Fixed	XZy(y.get_x() - x.get_x());


}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{

}
