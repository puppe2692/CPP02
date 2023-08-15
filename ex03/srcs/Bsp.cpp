/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:48:02 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/15 16:59:47 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float f1, f2, f3;

	f1 = Point::vectorialproduct(point, a, b);
	f2 = Point::vectorialproduct(point, b, c);
	f3 = Point::vectorialproduct(point, c, a);
	
	return ((f1 < 0 && f2 < 0 && f3 < 0) || (f1 > 0 && f2 > 0 && f3 > 0));
}