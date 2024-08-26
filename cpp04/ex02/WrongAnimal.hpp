/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 13:31:40 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/08/19 14:46:57 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
	protected:
		std::string _type;
		
	public:
		WrongAnimal();
		WrongAnimal(std::string const &type);
		WrongAnimal(const WrongAnimal &copy);
		WrongAnimal &operator = (const WrongAnimal &src);
		~WrongAnimal();

		void makeSound(void) const;
		std::string getType(void) const;
};

#endif