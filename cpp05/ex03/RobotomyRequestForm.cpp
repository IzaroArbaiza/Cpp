/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 12:44:29 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/08/27 11:35:56 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy), _target(copy._target) {
}

RobotomyRequestForm &RobotomyRequestForm::operator = (const RobotomyRequestForm &src) {
	(void)src;
	return (*this);
}		

RobotomyRequestForm::~RobotomyRequestForm() {
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() > this->getExeGrade()) {
		throw AForm::GradeTooLowException();
	} else {
		static int i = 0;
		if (i % 2 == 0) {
			std::cout << this->_target << " has been robotomized successfully." << std::endl;
		} else {
			std::cout << this->_target << " the robotomy failed." << std::endl;
		}
		i++;
	}
}
