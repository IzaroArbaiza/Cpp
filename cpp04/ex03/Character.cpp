/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:31:19 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/08/21 10:11:52 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) {
	this->_name = name;
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = NULL;
	}
	std::cout << "Character " << this->_name << " constructor created." << std::endl;
}

Character::Character(const Character &copy) {
	this->_name = copy._name;
	*this = copy;
}

Character &Character::operator = (const Character &src) {
	this->_name = src._name;
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = src._inventory[i];
	}
	return (*this);
}

Character::~Character() {
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	std::cout << this->_name << " destructor destoyed." << std::endl;
}

std::string const	&Character::getName() const {
	return (this->_name);
}

void	Character::equip(AMateria *m) {
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] == NULL) {
			this->_inventory[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx) {
	if (this->_inventory[idx]) {
		this->_inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter &target) {
	if (this->_inventory[idx]) {
		this->_inventory[idx]->use(target);
	}
}
		