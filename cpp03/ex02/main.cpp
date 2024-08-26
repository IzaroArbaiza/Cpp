/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 09:41:21 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/08/05 09:42:14 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	ClapTrap	shark("Shark");
	FragTrap	alex("Alex");

	std::cout << std::endl;

	shark.beRepaired(7);
	shark.attack("Rick");
	shark.takeDamage(12);
	shark.attack("Carl");
	shark.attack("Eroski");
	
	std::cout << std::endl;

	alex.beRepaired(5);
	alex.attack("Rick");
	alex.takeDamage(8);
	alex.highFiveGuys();
	alex.attack("Eroski");

	std::cout << std::endl;
	
	return (0);
}
