/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 10:02:45 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/07/11 13:21:41 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	int i = 0;
	Zombie *zomb = zombieHorde(5, "zombie");
	
	while (i < 5) {
		zomb[i].announce();
		i++;
	}

	std::cout << std::endl;
	
	delete [] zomb;
	
	std::cout << std::endl;
	return (0);
}
