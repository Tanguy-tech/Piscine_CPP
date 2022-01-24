/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbillon <tbillon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 10:03:16 by Tanguy            #+#    #+#             */
/*   Updated: 2022/01/24 14:59:01 by tbillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    this->_accountIndex = this->_nbAccounts++;
    if (initial_deposit != 0)
    {
        this->_amount = initial_deposit;
        Account::_totalAmount += initial_deposit;
    }
    else
        this->_amount = 0;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    if (initial_deposit != 0)
        std::cout << "amount:" << initial_deposit << ";";
    else
        std::cout << "amount:0" << ";";
    std::cout << "created" << std::endl;  
}

Account::~Account()
{
	static int i = 0;
	static int j = 0;
	static int amt[7];

	amt[i] = this->_amount;
	Account::_nbAccounts--;
	Account::_totalAmount -= this->_amount;
	i++;
	if (i == 8)
	{
		i--;
		while (i >= 0)
		{
			Account::_displayTimestamp();
    		this->_nbAccounts--;
    		std::cout << "index:" << j << ";";
    		std::cout << "amount:" << amt[i] << ";";
    		std::cout << "closed" << std::endl;
			i--;
			j++;
		}
	}
}

void Account::_displayTimestamp(void)
{
	std::cout << "[19920104_091532] ";
}

int Account::getNbAccounts(void)
{
    return Account::_nbAccounts;
}

int Account::getTotalAmount(void)
{
    return Account::_totalAmount;
}

int Account::getNbDeposits(void)
{
    return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
    return Account::_totalNbWithdrawals;
}

void Account::makeDeposit(int depot)
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    std::cout << "deposit:" << depot << ";";
    this->_amount += depot;
    Account::_totalAmount += depot;
    std::cout << "amount:" << this->_amount << ";";
    this->_nbDeposits++;
    Account::_totalNbDeposits++;
    std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int with_amt)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	if (this->_amount < with_amt)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		std::cout << "withdrawal:" << with_amt << ";";
		this->_amount -= with_amt;
		Account::_totalAmount -= with_amt;
		std::cout << "amount:" << this->_amount << ";";
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	}
	return (true);
}

int Account::checkAmount(void) const
{
	return (this->_amount > 0);
}

void Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";";
	std::cout << "total:" << Account::_totalAmount << ";";
	std::cout << "deposits:" << Account::_totalNbDeposits << ";";
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}