/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 12:49:14 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/15 12:45:20 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
	public :

	Fixed(void);
	Fixed(const int n);
	Fixed(const float f);
	Fixed(const Fixed& other);
	~Fixed(void);

	Fixed& operator=(const Fixed& rhs);
	
	bool operator==(const Fixed& rhs)const;
	bool operator<=(const Fixed& rhs)const;
	bool operator>=(const Fixed& rhs)const;
	bool operator!=(const Fixed& rhs)const;
	bool operator<(const Fixed& rhs)const;
	bool operator>(const Fixed& rhs)const;


	Fixed operator+(const Fixed& rhs)const;
	Fixed operator-(const Fixed& rhs)const;
	Fixed operator*(const Fixed& rhs)const;
	Fixed operator/(const Fixed& rhs)const;

	Fixed& operator--(void);
	Fixed operator--(int);
	Fixed& operator++(void);
	Fixed operator++(int);

	float toFloat( void ) const;
	int toInt( void ) const;
	int getRawBits( void ) const;
	void setRawBits( int const raw );

	static Fixed min(Fixed& nb1, Fixed& nb2);
	static Fixed min(const Fixed& nb1, const Fixed& nb2);
	static Fixed max(Fixed& nb1, Fixed& nb2);
	static Fixed max(const Fixed& nb1, const Fixed& nb2);


	private :

	int	_n;
	static const int _b = 8;
};

std::ostream& operator<<(std::ostream& o, const Fixed& rhs);

#endif