/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 09:19:02 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/11/05 10:49:14 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void) {
	std::list<int> lst;
	for (int i = 1; i < 60; i++) {
		lst.push_back(i);
	}

	std::list<int> vec;
	for (int i = 5; i < 10; i++) {
		vec.push_back(i);
	}

	try {
		std::cout << "lst: " << *easyfind(lst, 3) << std::endl;
		std::cout << "vec: " << *easyfind(vec, 9) << std::endl;
		std::cout << "lst: " << *easyfind(lst, 58) << std::endl;
		std::cout << "vec: " << *easyfind(vec, 100) << std::endl;
	}
	catch(const NotFoundException& e) {
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}
