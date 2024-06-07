/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 08:15:24 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/07 12:04:28 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>

static void	Acount::_displayTimestamp( void )
{
    std::time_t t = std::time(nullptr);
    std::tm *time = std::localtime(&t);

    std::cout << time.tm_year << std::endl;
}

void	makeDeposit( int deposit )
{
    _amount += deposit;
    _nbDeposits++;
}

bool	makeWithdrawal( int withdrawal )
{
    if(_amount - withdrawal < 0)
        return(false);
    else
        _amount -= withdrawal;
    return(true);
}

static void	displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << 
}

void	displayStatus( void ) const
{
    std::cout << _
}