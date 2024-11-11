/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:06:08 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/10/03 10:55:21 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() {
	_array = NULL;
	_size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n) {
	_array = new T[n]();
	_size = n;
}

template <typename T>
Array<T>::Array(const Array &copy) {
	_array = NULL;
	_size = 0;
	*this = copy;
}

template <typename T>
Array<T> &Array<T>::operator = (const Array &src) {
	if (this != &src) {
		delete[] _array;
		_size = src._size;
		_array = new T[_size];
		for (unsigned int i = 0; i < _size; i++) {
			_array[i] = src._array[i];
		}
	}
	return (*this);
}

template <typename T>
Array<T>::~Array() {
	delete[] _array;
}

template <typename T>
unsigned int Array<T>::size() const {
	return (_size);
}

template <typename T>
T &Array<T>::operator [] (unsigned int index) {
	if (index >= _size) {
		throw std::out_of_range("Index out of range");
	}
	return (_array[index]);
}

template <typename T>
const T &Array<T>::operator [] (unsigned int index) const {
	if (index >= _size) {
		throw std::out_of_range("Index out of range");
	}
	return (_array[index]);
}
