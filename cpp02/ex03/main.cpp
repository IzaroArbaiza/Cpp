/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 09:15:23 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/07/29 13:00:35 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main() {
	Point	a(1, 1);
	Point	b(7, 1);
	Point	c(1, 5);
	Point	point(2.5, 4);

	// Point	point(2, 3);	//inside
	// Point	point(5, 3);	//outside
	// Point	point(2.5, 4);	//inline
	// Point	point(4, 3);	//inline
	// Point	point(1, 1);	//inline
	
	if (bsp(a, b, c, point) == true)
		std::cout << "The point is INSIDE the triangle." << std::endl;
	else
		std::cout << "The point is outside the triangle." << std::endl;
	return (0);
}
