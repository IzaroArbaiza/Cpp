/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:43:45 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/09/17 11:43:46 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>

class Base {
	public:
		virtual ~Base() {}
};

Base* generate(void);
void identify(Base* p);
void identify(Base& p);

#endif