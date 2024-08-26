/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 19:39:00 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/07/15 09:26:41 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(std::string file) {
	this->_in = file;
	this->_out = "replaced_" + this->_in;
}

Sed::~Sed() {
}

void	Sed::replace(std::string s1, std::string s2){	
	std::string	content;

	if (s1.empty()) {
		std::cout << "The first argument can't be null\n" << std::endl;
		exit(1);
	}
	if (s1 == "  " || s2 == "  ") {
		std::cout << "The first argument can't be null\n" << std::endl;
		exit(1);
	}
	if (s1 == s2) {
		std::cout << "The two words are exactly the same\n" << std::endl;
		exit(1);
	}
	std::ifstream	ifstream(this->_in);
	if (ifstream.is_open()) {
		if (std::getline(ifstream, content, '\0')) {
			std::ofstream	ofstream(this->_out); //opens the outfile for writing
			size_t pos = content.find(s1);
			
			while (pos != std::string::npos) {
				content.erase(pos, s1.length());
				content.insert(pos, s2);
				pos = content.find(s1);
			}
			ofstream << content;
			ofstream.close();
		} else {
			std::cout << "The file is empty.\n" << std::endl;
			exit(1);
		}
		ifstream.close();
	} else {
		std::cout << "The file can't be opened.\n" << std::endl;
		exit(1);
	}
	
}
