/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 15:31:16 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/15 16:58:03 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
	return;
}

Point::Point(const float x, const float y) : _x(x) , _y(y)
{
	return;
}

Point::Point(Point& other)
{
	*this = other;
	return;
}

Point::~Point(void)
{
	return;
}

const Fixed Point::getX(void)
{
	return (this->_x.toFloat());
}

const Fixed Point::getY(void)
{
	return (this->_y.toFloat());
}

float Point::vectorialproduct(const Point &a, const Point &b, const Point &c)
{
	Fixed fixed;

	// Calcul du déterminant
	fixed = (a._x - c._x) * (b._y - c._y) - (b._x - c._x) * (a._y - c._y);

	// Conversion du résultat à virgule fixe en virgule flottante
	return (fixed.toFloat());
}

Point& Point::operator=(Point& other)
{
	this->~Point();
	new(this) Point(other._x.toFloat(), other._y.toFloat());
	return (*this);
}
