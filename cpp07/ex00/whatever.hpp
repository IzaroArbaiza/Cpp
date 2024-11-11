/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:48:32 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/09/17 15:16:26 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &a, T &b) {
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T min(T x, T y) {
	if (x < y) {
		return (x);
	} else if (y < x) {
		return (y);
	} else {
		std::cout<<"Both characters are exactly the same. "<<std::flush;
		return (0);
	}
}

template <typename T>
T max(T x, T y) {
	if (x > y) {
		return (x);
	} else if (y > x) {
		return (y);
	} else {
		std::cout<<"Both characters are exactly the same. "<<std::flush;
		return (0);
	}
}

#endif