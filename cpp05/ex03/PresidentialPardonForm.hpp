/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 12:44:26 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/08/26 16:36:02 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	private:
		const std::string	_target;
		
	public:
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(const PresidentialPardonForm &copy);
		PresidentialPardonForm &operator = (const PresidentialPardonForm &src);
		~PresidentialPardonForm();

		void execute(Bureaucrat const & executor) const;
};

#endif