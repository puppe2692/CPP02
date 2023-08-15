/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:25:55 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/15 16:57:09 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	public :
		Point(void);
		Point(const float x, const float y);
		Point(Point& other);

		~Point(void);

		Point& operator=(Point& other);

		const Fixed getX(void);
		const Fixed getY(void);
		static float vectorialproduct(const Point& a, const Point& b, const Point& c);

	private :

		const Fixed _x;
		const Fixed _y;

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif