/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 18:15:23 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/08/13 12:13:48 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void) {
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();

	// delete j;//should not create a leak
	// delete i;
	
	Animal *ptr[5];
	
	for (int i = 0; i < 5; i++) {
		if (i % 2) {
			ptr[i] = new Dog();
		} else {
			ptr[i] = new Cat();
		}
		ptr[i]->makeSound();
		delete ptr[i];
		std::cout << std::endl;
	}
	
	return (0);
}
