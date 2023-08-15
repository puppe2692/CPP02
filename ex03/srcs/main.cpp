/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:57:28 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/15 17:18:37 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

int main(void)
{
	Point a(1.2, 1.2);
	Point b(1.2, 4.2);
	Point c(4.2, 1.2);

	Point p1(2.2, 2.2);
	Point p2(14.2, 10.4);

	std::cout << (bsp(a, b, c, p1) ? "Inside" : "Outside") << std::endl;
	std::cout << (bsp(a, b, c, p2) ? "Inside" : "Outside") << std::endl;
}