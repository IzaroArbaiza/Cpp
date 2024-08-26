/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 09:15:09 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/07/11 12:42:32 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie	*Foo = newZombie("Foo");	//alocated on the heap
	Zombie	*Bob = newZombie("Bob");
	Zombie	*Chema = newZombie("Chema");
	
	Foo->announce();
	Bob->announce();
	Chema->announce();

	std::cout << std::endl;

	randomChump("Dr.Zombie");	//allocated on the stack
	randomChump("Walker");

	std::cout << std::endl;

	delete Foo;
	delete Bob;
	delete Chema;
	
	std::cout << std::endl;
}