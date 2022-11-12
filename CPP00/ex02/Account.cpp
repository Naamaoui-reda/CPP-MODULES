/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaamaou <rnaamaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:24:18 by rnaamaou          #+#    #+#             */
/*   Updated: 2022/10/16 11:15:53 by rnaamaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::	_nbAccounts = 0;
int Account::	_totalAmount = 0;
int Account::	_totalNbDeposits = 0;
int Account::	_totalNbWithdrawals = 0;

Account::Account( void )
{
	this->_accountIndex = _nbAccounts;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_nbAccounts++;
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = _nbAccounts;
	this-> _amount = initial_deposit;
	this->_nbDeposits = 0;
	_totalAmount += initial_deposit;
	this->_nbWithdrawals = 0;
	_nbAccounts++;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" << "amount:" << this->_amount <<";created\n";
}

Account::~Account( void )
{
	this-> _displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed\n";
}



void    Account::makeDeposit( int deposit)
{
	int d_amount = this->_amount;
	this->_totalAmount += deposit;
	this->_amount += deposit;
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	_displayTimestamp();
	std::cout <<"index:"<< this->_accountIndex<<";p_amount:"<< d_amount <<";deposit:" << deposit <<";amount:" << this->_amount <<";nb_deposits:" << this->_nbDeposits << "\n";
}

bool    Account::makeWithdrawal (int withdrawal)
{
	if(this->_amount < withdrawal)
	{
		this->_displayTimestamp();
		std::cout << "index:"<<this->_accountIndex << ";p_amount:" << this->_amount <<";withdrawal:refused\n";
		return (false);
	}
	int w_amount;
	w_amount = this->_amount;
	this->_totalAmount -= withdrawal;
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	this->_totalNbWithdrawals++;
	this->_displayTimestamp();
	std::cout <<"index:" << this->_accountIndex<<";p_amount:"<< w_amount << ";withdrawal:"<< withdrawal <<";amount:"<< this->_amount <<";nb_withdrawals:" << this->_nbWithdrawals <<"\n";
	return(true); 
}

int     Account::checkAmount(void) const
{
	_displayTimestamp();
	std::cout<<"index:" << this->_accountIndex <<";amount:" <<this->_amount <<"\n";
	return(this->_amount);
}

void    Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout<< "index:" << this->_accountIndex << ";amount:" << this->_amount <<";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void    Account::_displayTimestamp(void)
{
	time_t    now;

	now = time(NULL);
	std::cout << std::put_time(localtime(&now), "[%Y%m%d_%H%M%S] ");
}

int     Account::getNbAccounts( void )
{
	return (_nbAccounts);
}
int Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int     Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void    Account::displayAccountsInfos ( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << "\n";
}
