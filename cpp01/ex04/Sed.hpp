/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 19:38:58 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/07/03 19:16:49 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <fstream>

class Sed
{
	private:
		std::string	_in;
		std::string	_out;
	public:
		Sed(std::string file);
		~Sed();
		
		void	replace(std::string s1, std::string s2);
};

#endif