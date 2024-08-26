/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 09:21:18 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/08/08 16:16:55 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) {
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	
	std::cout << "ClapTrap " << this->_name << " created." << std::endl;

	// std::cout << this->_name << " starting hit points: " << this->_hitPoints << std::endl;
	// std::cout << this->_name << " starting energy points: " << this->_energyPoints << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << this->_name << " destroyed." << std::endl;

	// std::cout << this->_name << " ending hit points: " << this->_hitPoints << std::endl;
	// std::cout << this->_name << " ending energy points: " << this->_energyPoints << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src) {
	*this = src;
	return ;
}

ClapTrap	&ClapTrap::operator = (const ClapTrap &src) {
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	return (*this);
}

void	ClapTrap::attack(const std::string &target) {
	if (this->_hitPoints == 0) {
		std::cout << "ClapTrap " << this->_name << " is dead!... Can't do much..." << std::endl;
		return ;
	}
	if (this->_energyPoints <= 0) {
		std::cout << "ClapTrap " << this->_name << " is out of energy!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints == 0) {
		std::cout << "ClapTrap " << this->_name << " is already dead!... Leave it alone..." << std::endl;
		return ;
	}
	if (this->_hitPoints <= amount) {
		std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
		this->_hitPoints = 0;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " damage!!" << std::endl;
	this->_hitPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoints == 0) {
		std::cout << "ClapTrap " << this->_name << " is dead!... Can't do much..." << std::endl;
		return ;
	}
	if (this->_energyPoints <= amount) {
		std::cout << "ClapTrap " << this->_name << " is out of energy!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " is healing " << amount << " hit points!" << std::endl;
	this->_energyPoints -= 1;
	this->_hitPoints += amount;
}
