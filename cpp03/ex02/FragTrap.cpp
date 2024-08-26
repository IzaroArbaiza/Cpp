/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 09:41:11 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/08/05 09:41:12 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << "FragTrap " << this->_name << " created." << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->_name << " destroyed." << std::endl;
}

void	FragTrap::highFiveGuys(void) {
	if (this->_hitPoints == 0) {
		std::cout << "FragTrap " << this->_name << " is dead!... Can't do much..." << std::endl;
		return ;
	}
	if (this->_energyPoints <= 0) {
		std::cout << "FragTrap " << this->_name << " is out of energy!" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->_name << " gives a high five to everyone." << std::endl;
	this->_energyPoints -= 1;
}
