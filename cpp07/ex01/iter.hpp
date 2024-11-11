/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:43:23 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/09/18 13:41:10 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>
#include <iostream>

template <typename T>
void	printf(const T &a) {
	std::cout << a << std::endl;
}

template <typename T, typename F>
void iter(T *str, size_t len, F printf) {
	for (size_t i = 0; i < len; i++) {
		printf(str[i]);
	}
}

#endif