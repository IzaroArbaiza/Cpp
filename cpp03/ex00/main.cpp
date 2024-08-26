/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 09:22:20 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/08/08 16:14:21 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	rob("Rob");
	ClapTrap	alex("Alex");

	std::cout << std::endl;

	std::cout << "OH NO!!! IT'S A F*CKING SHARK!!" << std::endl;
	rob.takeDamage(2);
	rob.attack("Shark");
	rob.takeDamage(5);
	std::cout << "I DON'T WANT TO UPDATE MY WINDOWS" << std::endl;
	rob.attack("Microsoft");
	rob.takeDamage(8);
	rob.takeDamage(10);
	std::cout << "A WOLF NOW?! REALLY?!" << std::endl;
	rob.attack("Wolf");

	std::cout << std::endl;

	std::cout << "TAKE THIS RICK!" << std::endl;
	alex.beRepaired(5);
	alex.attack("Rick");
	alex.takeDamage(8);
	std::cout << "I'M SORRY CARL :(" << std::endl;
	alex.attack("Carl");
	std::cout << "I WANT MY EMPANADAS!" << std::endl;
	alex.attack("Eroski");

	std::cout << std::endl;
	
	return (0);
}
