/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:57:28 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/15 13:58:21 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

int given_main( void ) 
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	return 0;
}

int  my_main(void)
{
    Fixed    a(12.23f);
    Fixed    b(17.89f);

    std::cout << "Tests on operators +, -, *, /: \n";
    std::cout << a << " + " << b << " = " << a + b << std::endl;
    std::cout << a << " - " << b << " = " << a - b << std::endl;
    std::cout << a << " * " << b << " = " << a * b << std::endl;
    std::cout << a << " / " << b << " = " << a / b << std::endl;


    Fixed    c(a);
    std::cout << "\nTests on operators <, >, ==, !=, >=, <=:\n";
    std::cout << a << " < " << b << " = " << (a < b) << std::endl;
    std::cout << b << " < " << a << " = " << (b < a) << std::endl;
    std::cout << a << " > " << b << " = " << (a > b) << std::endl;
    std::cout << b << " > " << a << " = " << (b > a) << std::endl;
    std::cout << a << " == " << b << " = " << (a == b) << std::endl;
    std::cout << a << " == " << c << " = " << (a == c) << std::endl;
    std::cout << a << " != " << b << " = " << (a != b) << std::endl;
    std::cout << a << " != " << c << " = " << (a != c) << std::endl;
    std::cout << a << " >= " << b << " = " << (a >= b) << std::endl;
    std::cout << a << " >= " << c << " = " << (a >= c) << std::endl;
    std::cout << a << " <= " << b << " = " << (a <= b) << std::endl;
    std::cout << a << " <= " << c << " = " << (a <= c) << std::endl;

    std::cout << "\nTests on operators ++x, x++, --x, x--:\n";
    std::cout << "a = " << a << std::endl;
    std::cout << "++a = " << ++a << std::endl;
    std::cout << "a++ = " << a++ << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "--a = " << --a << std::endl;
    std::cout << "a-- = " << a-- << std::endl;
    std::cout << "a = " << a << std::endl;

    std::cout << "\nTests on min, max functions:\n";
    std::cout << "Min(" << a << ", " << b << ") = " << Fixed::min(a, b) << std::endl; 
    std::cout << "Max(" << a << ", " << b << ") = " << Fixed::max(a, b) << std::endl; 

	return 1;
}

int main(void)
{
	my_main();

	return 1;
}