/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 18:00:05 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/11/05 10:24:51 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
	Span sp = Span(5);
	
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	std::cout << "Short Span Test" << std::endl;
	std::cout << "* Shortest: " << sp.shortestSpan() << std::endl;
	std::cout << "* Longest: " << sp.longestSpan() << std::endl;

	std::cout << std::endl;

	Span largeSpan(501);
	std::vector<int> range(501);
	
	for (int i = 0; i < 501; ++i) {
		range[i] = i * 2;
	}	
	largeSpan.addMoreNumber(range.begin(), range.end());

	std::cout << "Large Span Test" << std::endl;
	std::cout << "* Shortest: " << largeSpan.shortestSpan() << std::endl;
	std::cout << "* Longest: " << largeSpan.longestSpan() << std::endl;

	return (0);
}
