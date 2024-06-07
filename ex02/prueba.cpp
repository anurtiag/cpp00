/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 09:49:58 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/07 11:23:54 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iostream>

void    has_zero(int num)
{
    if(num < 10)
        std::cout << "0" << num;
    else
        std::cout << num;
}

int main(void)
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
    std::cout << "]" << std::endl;
    return(0);
}

static int getNbAccounts()
{
    std::cout << ""
}