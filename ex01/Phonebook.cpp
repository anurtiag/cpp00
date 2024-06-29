/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 08:56:34 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/29 14:20:27 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void    Phonebook::initial_loop()//garbanzo
{
    std::string input;
    index = -1;
    total = -1;
    while(1)
    {
        std::cout << "Please select an option: ADD, SEARCH or EXIT" << std::endl;
        getline(std::cin, input);
        if(input == "ADD")
        {
            index++;
            contacts[index].add_user();
        }
        else if (total < index)
            total = index;
        else if(input == "SEARCH")
            search_user(contacts, (total));
        else if(input == "EXIT" || std::cin.eof())
            break ;
        else
            std::cout << "Wrong input :(" << std::endl;
        if (std::cin.eof())
            break ;
        if (index == 7)
            index = -1;
    }
}

bool    Phonebook::ft_is_num(std::string str)
{
    for(int i = 0; i < (int)str.length(); i++)
    {
        if(str[i] < '0' || str[i] > '9')
            return (false);
    }
    return (true);
}

void    Phonebook::search_user(Contact contacts[8], int index)
{
    std::string input;
    int user;

    std::cout << "|" << std::setfill('-') << std::setw(44) << "|" << std::endl;
    std::cout << "|";
    contacts->truncate("index");
    contacts->truncate("list first");
    contacts->truncate("last name");
    contacts->truncate("nickname");
    std::cout << std::endl;
    std::cout << "|" << std::setfill('-') << std::setw(44) << "|" << std::endl;
    for(int i = 0; i <= index; i++)
        contacts->print_list(contacts[i], i);
    std::cout << "Please select an user: " << std::endl;
    getline(std::cin, input);
    user = std::atoi(input.c_str());
    if ((ft_is_num(input) == true) && (user >= 0 && user <= index))
        contacts[user].print_user(contacts[user]);
    else
        std::cout << "learn to type ;)" << std::endl;
}