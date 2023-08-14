/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 12:49:14 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/14 14:39:45 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
	public :

	Fixed(void);
	Fixed(int n);
	Fixed(const Fixed& other);
	~Fixed(void);

	Fixed& operator=(const Fixed& rhs);
	int getRawBits( void ) const;
	void setRawBits( int const raw );

	private :

	int	_n;
	static const int _b;
};

#endif