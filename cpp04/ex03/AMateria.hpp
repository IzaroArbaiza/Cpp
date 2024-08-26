/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 10:22:32 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/08/23 15:38:06 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "ICharacter.hpp"
#include <iostream>

class ICharacter;
class AMateria {
    protected:
        std::string _type;
    public:
        AMateria();
        AMateria(const AMateria &copy);
        AMateria(std::string const &type);
        virtual ~AMateria();

        std::string const &getType() const; //Returns the materia type
        virtual AMateria *clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif