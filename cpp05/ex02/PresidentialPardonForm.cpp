/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 12:44:24 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/08/28 09:59:28 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy), _target(copy._target) {
}

PresidentialPardonForm &PresidentialPardonForm::operator = (const PresidentialPardonForm &src){
	(void)src;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() > this->getExeGrade()) {
		throw AForm::GradeTooLowException();
	} else {
		std::cout << "Informs that " << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
}
