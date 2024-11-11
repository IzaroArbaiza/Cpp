/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 12:44:33 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/09/27 10:13:27 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy), _target(copy._target) {
}

ShrubberyCreationForm &ShrubberyCreationForm::operator = (const ShrubberyCreationForm &src) {
	(void)src;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (this->getSign() == false) {
		throw AForm::FormNotSignedException();
	} else if (executor.getGrade() > this->getExeGrade()) {
		throw AForm::GradeTooLowException();
	}
	std::ofstream file((this->_target + "_shrubbery").c_str());
	if (file) {
		std::cout << "The file " << this->_target << "_shrubbery created successfully" << std::endl;
		file << "                                                     ." << std::endl;
		file << "                                          .         ;  " << std::endl;
		file << "             .              .              ;%     ;;   " << std::endl;
		file << "               ,           ,                :;%  %;   " << std::endl;
		file << "                :         ;                   :;%;'     .,   " << std::endl;
		file << "       ,.        %;     %;            ;        %;'    ,;" << std::endl;
		file << "         ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
		file << "          %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
		file << "           ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
		file << "            `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
		file << "             `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
		file << "                `:%;.  :;bd%;          %;@%;'" << std::endl;
		file << "                 `@%:.  :;%.         ;@@%;'   " << std::endl;
		file << "                    `@%.  `;@%.      ;@@%;         " << std::endl;
		file << "                      `@%%. `@%%    ;@@%;        " << std::endl;
		file << "                        ;@%. :@%%  %@@%;       " << std::endl;
		file << "                          %@bd%%%bd%%:;     " << std::endl;
		file << "                            #@%%%%%:;;" << std::endl;
		file << "                            %@@%%%::;" << std::endl;
		file << "                            %@@@%(o);  . '         " << std::endl;
		file << "                            %@@@o%;:(.,'         " << std::endl;
		file << "                        `.. %@@@o%::;         " << std::endl;
		file << "                           `)@@@o%::;         " << std::endl;
		file << "                            %@@(o)::;        " << std::endl;
		file << "                           .%@@@@%::;         " << std::endl;
		file << "                           ;%@@@@%::;.          " << std::endl;
		file << "                          ;%@@@@%%:;;;. " << std::endl;
		file << "                      ...;%@@@@@%%:;;;;,.." << std::endl;
		file << "                                                     ." << std::endl;
		file << "                                          .         ;  " << std::endl;
		file << "             .              .              ;%     ;;   " << std::endl;
		file << "               ,           ,                :;%  %;   " << std::endl;
		file << "                :         ;                   :;%;'     .,   " << std::endl;
		file << "       ,.        %;     %;            ;        %;'    ,;" << std::endl;
		file << "         ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
		file << "          %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
		file << "           ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
		file << "            `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
		file << "             `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
		file << "                `:%;.  :;bd%;          %;@%;'" << std::endl;
		file << "                 `@%:.  :;%.         ;@@%;'   " << std::endl;
		file << "                    `@%.  `;@%.      ;@@%;         " << std::endl;
		file << "                      `@%%. `@%%    ;@@%;        " << std::endl;
		file << "                        ;@%. :@%%  %@@%;       " << std::endl;
		file << "                          %@bd%%%bd%%:;     " << std::endl;
		file << "                            #@%%%%%:;;" << std::endl;
		file << "                            %@@%%%::;" << std::endl;
		file << "                            %@@@%(o);  . '         " << std::endl;
		file << "                            %@@@o%;:(.,'         " << std::endl;
		file << "                        `.. %@@@o%::;         " << std::endl;
		file << "                           `)@@@o%::;         " << std::endl;
		file << "                            %@@(o)::;        " << std::endl;
		file << "                           .%@@@@%::;         " << std::endl;
		file << "                           ;%@@@@%::;.          " << std::endl;
		file << "                          ;%@@@@%%:;;;. " << std::endl;
		file << "                      ...;%@@@@@%%:;;;;,.." << std::endl;
		file << "                                                     ." << std::endl;
		file << "                                          .         ;  " << std::endl;
		file << "             .              .              ;%     ;;   " << std::endl;
		file << "               ,           ,                :;%  %;   " << std::endl;
		file << "                :         ;                   :;%;'     .,   " << std::endl;
		file << "       ,.        %;     %;            ;        %;'    ,;" << std::endl;
		file << "         ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
		file << "          %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
		file << "           ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
		file << "            `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
		file << "             `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
		file << "                `:%;.  :;bd%;          %;@%;'" << std::endl;
		file << "                 `@%:.  :;%.         ;@@%;'   " << std::endl;
		file << "                    `@%.  `;@%.      ;@@%;         " << std::endl;
		file << "                      `@%%. `@%%    ;@@%;        " << std::endl;
		file << "                        ;@%. :@%%  %@@%;       " << std::endl;
		file << "                          %@bd%%%bd%%:;     " << std::endl;
		file << "                            #@%%%%%:;;" << std::endl;
		file << "                            %@@%%%::;" << std::endl;
		file << "                            %@@@%(o);  . '         " << std::endl;
		file << "                            %@@@o%;:(.,'         " << std::endl;
		file << "                        `.. %@@@o%::;         " << std::endl;
		file << "                           `)@@@o%::;         " << std::endl;
		file << "                            %@@(o)::;        " << std::endl;
		file << "                           .%@@@@%::;         " << std::endl;
		file << "                           ;%@@@@%::;.          " << std::endl;
		file << "                          ;%@@@@%%:;;;. " << std::endl;
		file << "                      ...;%@@@@@%%:;;;;,.." << std::endl;
		file.close();
	}
}
