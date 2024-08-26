/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 10:02:40 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/07/11 15:07:04 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void) {
	std::string str = "HI THIS IS BRAIN";
	
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "Memory address of the string variable (&str) =\t" << &str << std::endl;
	std::cout << "Memory address held by pointer (stringPTR) =\t" << stringPTR << std::endl;
	std::cout << "Memory address held by reference (&stringREF) = " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "Value of the string variable (str) =\t\t" << str << std::endl;
	std::cout << "Value pointed to by pointer (*stringPTR) =\t" << *stringPTR << std::endl;
	std::cout << "Value pointed to by reference (stringREF) =\t" << stringREF << std::endl;
}
