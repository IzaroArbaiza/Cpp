/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 13:42:28 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/08/20 17:25:15 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain created." << std::endl;
}

Brain::Brain(const Brain &copy) {
	*this = copy;
}

Brain &Brain::operator = (const Brain &src) {
	for (int i = 0; i < 100; i++) {
		this->_ideas[i] = src._ideas[i];
	}
	return (*this);
}

Brain::~Brain() {
	std::cout << "Brain destroyed." << std::endl;
}
