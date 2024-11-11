/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:30:17 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/10/29 19:36:49 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
	loadData("data.csv");
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy) {
	*this = copy;
}

BitcoinExchange &BitcoinExchange::operator = (const BitcoinExchange &src) {
	if (this != &src) {
		_data = src._data;
	}
	return (*this);
}

BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::start(const std::string &inputFile) {
	std::ifstream file(inputFile.c_str());
    std::string line;
	
	if(!file)
		{std::cout << "Error: file not found." << std::endl;
		return;}

    if (!file.is_open()) {
		std::cout << "Error: could not open file." << std::endl;
		throw Exception();
    }
	if (file.peek() == std::ifstream::traits_type::eof()) {
		std::cout << "Error: file is empty." << std::endl;
		return ;
	}
	
	std::getline(file, line);
	if (line != "date | value") {
        std::cout << "Error: invalid file header, expected 'date | value'." << std::endl;
        return ;
    }

    while (std::getline(file, line)) {
        size_t pos = line.find(" | ");
        
		if (pos == static_cast<size_t>(-1) || pos >= line.length()) {
			std::cout << "Error: bad input => " << line << std::endl;
			continue ;
		}

        std::string date = line.substr(0, pos);
		int year = std::atoi(date.substr(0, date.find('-')).c_str());
		switch (validDate(date)) {
			case 1:
				std::cout << "Error: bad input => " << date << std::endl;
           		continue;
			case 2:
				std::cout << "Error: The year " << year << " is unrealistic for Bitcoin activity. If so, I must destroy it..." << std::endl;
				continue ;
			case 3:
				std::cout << "Error: In " << date << " , bitcoin didn't exist." << std::endl;
				continue;
			default:
				break;
		}

        std::string value = line.substr(pos + 3);
        switch (validValue(value)) {
			case 1:
				std::cout << "Error: too large a number." << std::endl;
				continue;
			case 2:
				std::cout << "Error: not a positive number." << std::endl;
				continue;
			case 3:
				std::cout << "Error: not a valid number." << std::endl;
				continue;
			default:
				break;
		}

        float closestRate = rate(date);
        float amount = std::atof(value.c_str());

        std::cout << date << " => " << value << " = " << (amount * closestRate) << std::endl;
    }
    file.close();
}

void BitcoinExchange::loadData(const std::string &dataFile) {
	std::ifstream file(dataFile.c_str());
	std::string line;
	size_t pos;
	std::string date;
	std::string rate;
	float price;

	if (!file.is_open()) {
		std::cout << "Error couldn't open the database." << std::endl;
		throw Exception();
	}

	std::getline(file, line);
	while (std::getline(file, line)) {
		pos = line.find(',');
		if (pos == static_cast<size_t>(-1) || pos >= line.length()) {
			continue ;
		}

		date = line.substr(0, pos);
		rate = line.substr(pos + 1);
		price = std::atof(rate.c_str());

		_data[date] = price;
	}
	file.close();
}

int BitcoinExchange::validDate(const std::string& date) const {
    const int monthDays[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int maxDays = 0;
	size_t len = std::strlen(date.c_str());
	
	len -= 6;
    if (date[len] != '-' || date[len + 3] != '-') {
		std::cout << "Error couldn't open the database." << std::endl;
        return (1);
    }

    int year = std::atoi(date.substr(0, len).c_str());
    int month = std::atoi(date.substr((len + 1), 2).c_str());
    int day = std::atoi(date.substr((len + 4), 2).c_str());

	if (year > 9999) {
		return (2);
	}
    if (month < 1 || month > 12) {
        return (1);
    }

    maxDays = monthDays[month - 1];

    if (month == 2 && yearLeap(year)) {
        maxDays = 29;
    }
    if (day < 1 || day > maxDays) {
        return (1);
    }
	if (year < 2009 || (year == 2009 && month == 1 && day < 2)) {
		return (3);
	}

    return (0);
}

int BitcoinExchange::validValue(const std::string &value) const {
	float num = std::atof(value.c_str());

	if (num >= 2147483648) {
		return (1);
	} else if (num < 0) {
		return (2);
	}
	
	for (size_t i = 0; i < value.size(); i++) {
		if (!isdigit(value[i]) && value[i] != 46) {
			return (3);
		}
	}

	return (0);
}

bool BitcoinExchange::yearLeap(int year) const {
	if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
		return (true);
	}
	return (false);
}

float BitcoinExchange::rate(const std::string &date) const {
	std::map<std::string, float>::const_iterator it;
	float closes = -1;
	bool found = false;

	it = _data.begin();
	while (it != _data.end()) {
		if (it->first > date) {
			break ;
		}
		closes = it->second;
		found = true;
		it++;
	}

	if (found) {
		return (closes);
	}

	if (it == _data.begin()) {
		std::cout << "Error couldn't open the database todo mentiras" << std::endl;
		throw Exception();
	}
	it--;
	return (it->second);
}
