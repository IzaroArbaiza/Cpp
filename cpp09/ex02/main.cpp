/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:31:45 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/11/06 16:55:01 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iomanip>
#include <cstring>

bool isnum(const char *str) {
	for (size_t i = 0; i < strlen(str); i++) {
		if (!isdigit(str[i])) {
			return (1);
		}
	}
	return (0);
}

int main(int argc, char const *argv[])
{
	if (argc < 2) {
		std::cout << "Invalid amount of arguments." << std::endl;
		return (1);
	} else {
		std::vector<int> input;
		
		for (int i = 1; i < argc; i++) {
			if (isnum(argv[i])) {
				std::cout << "Error" << std::endl;
				return (1);
			}
			int num = std::atoi(argv[i]);
			if (num <= 0) {
				std::cout << "Negative numbers aren't allowed." << std::endl;
				return (1);
			}
			input.push_back(num);
		}
		
		PmergeMe pmergeme(input);

		pmergeme.before();
		pmergeme.sortVector();
		pmergeme.sortDeque();
		pmergeme.after();

		std::cout << "Time to process a range of " << input.size() << " elements with std::vector: " << std::flush;
		std::cout << std::fixed << pmergeme.getVectorTime() << " sec" << std::endl;
		std::cout << "Time to process a range of " << input.size() << " elements with std::deque: " << std::flush;
		std::cout << pmergeme.getDequeTime() << " sec" << std::endl;
	}
	
	return (0);
}
