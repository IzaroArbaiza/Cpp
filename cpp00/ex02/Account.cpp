/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarbaiza <iarbaiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 13:13:33 by iarbaiza          #+#    #+#             */
/*   Updated: 2024/06/28 12:50:15 by iarbaiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
	_nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_accountIndex = _nbAccounts - 1;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << std::flush;
	std::cout << "amount:" << _amount << ";" << std::flush;
	std::cout << "created" << std::endl;
}

Account::~Account() {
	_nbAccounts--;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << std::flush;
	std::cout << "amount:" << _amount << ";" << std::flush;
	std::cout << "closed" << std::endl;
}

int	Account::getNbAccounts(void) {
	return (_nbAccounts);
}

int	Account::getTotalAmount(void) {
	return (_totalAmount);
}

int	Account::getNbDeposits(void) {
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void) {
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void) {
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";" << std::flush;
	std::cout << "total:" << getTotalAmount() << ";" << std::flush;
	std::cout << "deposits:" << getNbDeposits() << ";" << std::flush;
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit(int deposit) {
	_displayTimestamp();
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	std::cout << "index:" << _accountIndex << ";" << std::flush;
	std::cout << "p_amount:" << _amount << ";" << std::flush;
	_amount += deposit;
	std::cout << "deposit:" << deposit << ";" << std::flush;
	std::cout << "amount:" << _amount << ";" << std::flush;
	std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << std::flush;
	std::cout << "p_amount:" << _amount << ";" << std::flush;
	std::cout << "withdrawals:" << std::flush;
	if (withdrawal > checkAmount()) {
		std::cout << "refused" << std::endl;
		return (false);
	}
	std::cout << withdrawal <<  ";" << std::flush;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	_amount -= withdrawal;
	std::cout << "amount:" << _amount << ";" << std::flush;
	std::cout << "nb_deposit:" << _nbDeposits << std::endl;
	return (true);
}

int		Account::checkAmount(void) const {
	return (_amount);
}

void	Account::displayStatus(void) const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << std::flush;
	std::cout << "amount:" << _amount << ";" << std::flush;
	std::cout << "deposits:" << _nbDeposits << ";" << std::flush;
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void) {
	std::time_t	result;
	std::tm* now;
	
	result = std::time(NULL);
	now = std::localtime(&result);
	std::cout << "[" << now->tm_year + 1900 << std::flush;
	std::cout << std::setfill('0') << std::setw(2) << now->tm_mon + 1 << std::flush;
	std::cout << std::setfill('0') << std::setw(2) << now->tm_mday<< std::flush;
	std::cout << "_" << std::flush;
	std::cout << std::setfill('0') << std::setw(2) << now->tm_hour<< std::flush;
	std::cout << std::setfill('0') << std::setw(2) << now->tm_min<< std::flush;
	std::cout << std::setfill('0') << std::setw(2) << now->tm_sec<< std::flush;
	std::cout << "] " << std::flush;
}
