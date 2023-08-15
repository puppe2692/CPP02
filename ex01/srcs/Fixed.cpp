/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 12:49:20 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/15 11:31:55 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed(void) : _n( 0 )
{
	std::cout << "Default contructor called" << std::endl;
	return;
}

Fixed::Fixed(const int n) : _n(n << _b)
{
	std::cout << "Int contructor called" << std::endl;
	return;
}

Fixed::Fixed(const float f) : _n((int)roundf(f * (1 << _b)))
{
	std::cout << "Float contructor called" << std::endl;
	return;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy contructor called" << std::endl;
	*this = other;
	return;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed& Fixed::operator=(const Fixed& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_n = rhs.getRawBits();
	return *this;
}


int Fixed::getRawBits( void ) const
{
	return (this->_n);
}

void Fixed::setRawBits( int const raw )
{
	this->_n = raw;
	return;
}

float	Fixed::toFloat(void) const
{
	return ((float)_n / (1 << _b));
}

int	Fixed::toInt(void) const
{
	return ((int)_n / (1 << _b));
}

std::ostream& operator<<(std::ostream& o, const Fixed& rhs)
{
	o << rhs.toFloat();
	return (o);
}