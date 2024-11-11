/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:00:30 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/10/03 10:55:26 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	private:
		T*	_array;
		unsigned int _size;
		
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &copy);
		Array &operator = (const Array &src);
		~Array();

		unsigned int size() const;
		T &operator [] (unsigned int index);
		const T &operator [] (unsigned int index) const;
};

#include "Array.tpp"

#endif
