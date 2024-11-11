/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 12:43:51 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/09/03 19:20:27 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(const std::string &name, int sigGrade, int exeGrade) : _name(name), _sigGrade(sigGrade), _exeGrade(exeGrade) {
	if (sigGrade < 1 || exeGrade < 1) {
		throw AForm::GradeTooHighException();
	} else if (sigGrade > 150 || exeGrade > 150) {
		throw AForm::GradeTooLowException();
	}
}

AForm::AForm(const AForm &copy) : _name(copy.getName()), _sigGrade(copy.getSigGrade()), _exeGrade(copy.getExeGrade()) {
}

AForm &AForm::operator = (const AForm &src) {
	this->_sig = src.getSign();
	return (*this);
}

AForm::~AForm() {
}

std::string	AForm::getName() const {
	return(this->_name);
}

bool	AForm::getSign() const {
	return(this->_sig);
}

int	AForm::getSigGrade() const {
	return(this->_sigGrade);
}

int	AForm::getExeGrade() const {
	return(this->_exeGrade);
}

void	AForm::beSigned(const Bureaucrat &bur) {
	if (bur.getGrade() > this->_sigGrade) {
		throw GradeTooLowException();
	}
	this->_sig = true;
}
