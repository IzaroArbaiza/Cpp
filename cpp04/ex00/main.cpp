/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 18:15:23 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/08/19 15:23:11 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void) {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << std::endl;

	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	std::cout << "What type?: " << i->getType() << " " << std::endl;
	std::cout << "What type?: " << j->getType() << " " << std::endl;
	std::cout << "What type?: " << meta->getType() << " " << std::endl;
	
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	
	std::cout << std::endl;
	
	delete meta;
	delete j;
	delete i;

	std::cout << std::endl;
	std::cout << "--- WrongAnimal example ---" << std::endl;

	const WrongAnimal *wrongAnimal = new WrongAnimal();
	const WrongAnimal	*wrongCat = new WrongCat();
	
	std::cout << std::endl;

	std::cout << "What type?: " << wrongAnimal->getType() << " " << std::endl;
	std::cout << "What type?: " << wrongCat->getType() << " " << std::endl;
	
	wrongAnimal->makeSound();
	wrongCat->makeSound();

	std::cout << std::endl;
	
	delete wrongAnimal;
	delete wrongCat;

	return (0);
}
