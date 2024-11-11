/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 12:44:31 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/08/26 16:36:10 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	private:
		const std::string	_target;
		
	public:
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		RobotomyRequestForm &operator = (const RobotomyRequestForm &src);
		~RobotomyRequestForm();

		void execute(Bureaucrat const & executor) const;
};

#endif