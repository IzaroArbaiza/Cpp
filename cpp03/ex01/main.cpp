/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 09:22:10 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/08/05 09:36:36 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap	rob("Rob");
	ScavTrap	alex("Alex");
	ClapTrap	shark("Shark");

	std::cout << std::endl;

	rob.takeDamage(2);
	rob.attack("Shark");
	rob.takeDamage(5);
	rob.attack("Microsoft");
	rob.takeDamage(10);
	rob.beRepaired(5);
	rob.guardGate();

	std::cout << std::endl;

	alex.beRepaired(5);
	alex.attack("Rick");
	alex.takeDamage(8);
	alex.attack("Eroski");

	std::cout << std::endl;

	shark.beRepaired(7);
	shark.attack("Rick");
	shark.takeDamage(12);
	shark.attack("Carl");
	shark.attack("Eroski");
	
	std::cout << std::endl;
	
	return (0);
}
