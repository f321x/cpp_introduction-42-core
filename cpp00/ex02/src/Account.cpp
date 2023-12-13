/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***REMOVED*** <***REMOVED***@student.***REMOVED***.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:27:07 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2023/12/13 19:50:32 by ***REMOVED***            ###   ########.fr       */
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

Account::Account(int initial_deposit) : _amount(initial_deposit)
{
	_accountIndex = Account::_nbAccounts;

	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:"
		<< _amount << ";created" << std::endl;
}

Account::~Account(void)
{
	_nbAccounts--;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:"
		<< _amount << ";closed" << std::endl;
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts << ";total:"
		<< _totalAmount << ";deposits:" << _totalNbDeposits
		<< ";withdrawls:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_totalNbDeposits++;
	_nbDeposits++;
	_totalAmount += deposit;

	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";p_amount:"
		<< _amount << ";deposit:" << deposit;
	_amount += deposit;
	std::cout << ";amount:" << _amount << ";nb_deposits:"
		<< _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawl)
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";p_amount:"
		<< _amount;
	if (withdrawl < _amount)
	{
		_amount -= withdrawl;
		_totalNbWithdrawals++;
		_nbWithdrawals++;
		_totalAmount -= withdrawl;
		std::cout << ";withdrawl:" << withdrawl << ";amount:"
			<< _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return (true);
	}
	else
		std::cout << ";withdrawl:refused" << std::endl;
	return (false);
}

int	Account::checkAmount(void) const
{
	return (_amount);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:"
		<< _amount << ";deposits:" << _nbDeposits
		<< ";withdrawls:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void)
{
	std::time_t t = std::time(nullptr);
    std::tm* time = std::localtime(&t);
    std::cout << '[' << std::put_time(time, "%Y%m%d_%H%M%S") << ']';
}

