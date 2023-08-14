/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 12:49:20 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/14 15:11:31 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed(void) : _n( 0 )
{
	std::cout << "Default contructor called" << std::endl;
	return;
}

Fixed::Fixed(int n) : _n(n)
{
	std::cout << "Parametric contructor called" << std::endl;
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
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_n);
}

void Fixed::setRawBits( int const raw )
{
	this->_n = raw;
	return;
}