/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:46:02 by anurtiag          #+#    #+#             */
/*   Updated: 2024/05/24 12:46:29 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void printargv(const std::string& str)
{
    for (int i = 0; i < str.length(); ++i)
        std::cout << char(std::toupper(str[i]));
}

int main(int argc, char *argv[])
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for(int i = 1; i < argc; ++i)
        printargv(std::string(argv[i]));
    std::cout << std::endl;
    return(0);
}
