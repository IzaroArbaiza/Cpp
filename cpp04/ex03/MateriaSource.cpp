/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 11:03:03 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/08/19 15:51:05 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = NULL;
	}
	std::cout << "MateriaSource constructor created." << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &copy) {
	*this = copy;
}

MateriaSource &MateriaSource::operator = (const MateriaSource &src) {
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = src._inventory[i];
	}
	return (*this);
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i]) {
			delete this->_inventory[i];
		}
	}
	std::cout << "MateriaSource destructor destoyed." << std::endl;
}

AMateria	*MateriaSource::getMateria(std::string const &type) {
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] && this->_inventory[i]->getType() == type) {
			return (this->_inventory[i]);
		}
	}
	return (NULL);
}

void	MateriaSource::learnMateria(AMateria *m) {
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] == NULL) {
			this->_inventory[i] = m;
			return ;
		}
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] && this->_inventory[i]->getType() == type) {
			return (this->_inventory[i]->clone());
		}
	}
	return (NULL);
}
