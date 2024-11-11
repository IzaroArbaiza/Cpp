/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:30:21 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/11/06 15:10:30 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <cstdlib>
#include <cstring>

class BitcoinExchange {
	private:
		std::map<std::string, float> _data;

	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &copy);
		BitcoinExchange &operator = (const BitcoinExchange &src);
		~BitcoinExchange();

		void start(const std::string &file);
		void loadData(const std::string &dataFile);
		int validDate(const std::string &date) const;
		int validValue(const std::string &value) const;
		bool yearLeap(int year) const;
		float rate(const std::string &date) const;

		class Exception : public std::exception {
			public:
				virtual const char *what() const throw() {
					return ("");
				}
		};
};

#endif
