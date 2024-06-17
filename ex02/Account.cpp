/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 08:15:24 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/17 15:27:10 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void    has_zero(int num)
{
    if(num < 10)
        std::cout << "0" << num;
    else
        std::cout << num;
}

Account::Account( int initial_deposit )
{
    this->_accountIndex = _nbAccounts;
    _nbAccounts++;
    this->_amount = initial_deposit;;
    _totalAmount += this->_amount;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "created" << std::endl;
}

Account::~Account()
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "closed" << std::endl;
    _nbAccounts--;
    _totalAmount -= this->_amount;
}

void	Account::_displayTimestamp( void )
{
    std::time_t t = std::time(nullptr);
    std::tm *time = std::localtime(&t);

    std::cout << "[" << (time->tm_year + 1900);
    has_zero(time->tm_mon + 1);
    has_zero(time->tm_mday);
    std::cout << "_";
    has_zero(time->tm_hour);
    has_zero(time->tm_min);
    has_zero(time->tm_sec);
    std::cout << "]" << " ";
}

void	Account::makeDeposit( int deposit )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";" << "deposit:" << deposit << ";";
    _amount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
    _totalAmount += deposit;
    std::cout << "amount:" << _amount << ";";
    std::cout << "nb_deposits:" << _nbDeposits << std::endl; 
}

bool	Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "withdrawal:" << withdrawal << ";";
    if(_amount - withdrawal < 0)
    {
        std::cout << "refused:" << std::endl;
        return(false);
    }
    else
    {
        _amount -= withdrawal;
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        _totalAmount -= withdrawal;
        std::cout << "amount:" << _amount << ";";
        std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
    }
    return(true);
}

void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";";
    std::cout << "total:" << _totalAmount << ";";
    std::cout << "deposits:" << _totalNbDeposits << ";";
    std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "deposits:" << _nbDeposits << ";";
    std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

int Account::getNbAccounts()
{
    return(_nbAccounts);
}

int Account::getTotalAmount()
{
    return(_totalAmount);
}

int Account::getNbDeposits()
{
    return(_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
    return(_totalNbWithdrawals);
}