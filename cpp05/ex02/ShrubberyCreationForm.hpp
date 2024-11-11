/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 12:44:36 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/08/27 09:23:59 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
	private:
		const std::string	_target;
		
	public:
		ShrubberyCreationForm(const std::string &target);
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		ShrubberyCreationForm &operator = (const ShrubberyCreationForm &src);
		~ShrubberyCreationForm();

		void execute(Bureaucrat const & executor) const;
};

#endif