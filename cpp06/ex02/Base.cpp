/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:43:41 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/09/30 10:29:54 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void) {
	srand(time(0));
	int random = rand() % 3;

	switch (random) {
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return new C();
		default:
			break;
	}
	return (0);	
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p)) {
		std::cout << "A" << std::endl;
	} else if (dynamic_cast<B*>(p)) {
		std::cout << "B" << std::endl;
	} else if (dynamic_cast<C*>(p)) {
		std::cout << "C" << std::endl;
	}
}

void identify(Base& p) {
	try	{
		p = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	} catch(const std::exception& e) {}
	try	{
		p = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	} catch(const std::exception& e) {}
	try	{
		p = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	} catch(const std::exception& e) {}
}
