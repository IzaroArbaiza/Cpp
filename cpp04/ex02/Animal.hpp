/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 19:37:42 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/08/23 18:16:10 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal {
	protected:
		std::string _type;
			
	public:
		Animal();
		Animal(std::string const &type);
		Animal(const Animal &copy);
		Animal &operator = (const Animal &src);
		virtual ~Animal();
		
		std::string	getType(void) const;
		virtual void makeSound(void) const = 0;	//Pure virtual function by asigning to a virtual function "= 0"
		//This makes the class Animal uninstantiable;
};

#endif