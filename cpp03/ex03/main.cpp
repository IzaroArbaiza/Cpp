/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:49:24 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/08/05 10:10:50 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap	alex("Alex");
	
	std::cout << std::endl;

	alex.whoAmI();
	alex.attack("Rick");
	alex.takeDamage(8);
	alex.beRepaired(5);
	alex.attack("Eroski");

	std::cout << std::endl;
	
	return (0);
}
