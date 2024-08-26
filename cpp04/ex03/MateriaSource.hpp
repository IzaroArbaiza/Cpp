/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 11:03:30 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/08/23 15:38:24 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource {
	private:
		AMateria	*_inventory[4];
		
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &copy);
		MateriaSource &operator = (const MateriaSource &src);
		~MateriaSource();

		AMateria	*getMateria(std::string const &type);
		void		learnMateria(AMateria *m);
		AMateria	*createMateria(std::string const &type);
};

#endif