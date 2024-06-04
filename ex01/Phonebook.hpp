/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 08:48:09 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/04 11:55:27 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class Phonebook
{
    private:
        Contact contacts[8];
        int     index;

    public:
        void initial_loop()
        {
            std::string input;
            index = -1;
            while(1)
            {
                std::cout << "Please select an option: ADD, SEARCH or EXIT" << std::endl;
                getline(std::cin, input);
                if(input == "ADD")
                {
                    index++;
                    contacts[index].add_user();
                }
                else if(input == "SEARCH")
                    search_user(contacts, (index + 1));
                else if(input == "EXIT")
                    break ;
                else
                    std::cout << "Wrong input :(" << std::endl;
                if (index == 8)
                    index = -1;
            }
        }

        void search_user(Contact contacts[8], int index)
        {
            int i;
            std::string input;
            int user;

            i = -1;
            while(++i < index)
            {
                std::cout << "garbanzo " << i << std::endl;
                std::cout << "|" << std::right << std::setw(10) << "index" << "|" << std::setw(10) << "first name" << "|" << std::setw(10) << "last name" << "|" << std::setw(10) << "nickname" << "|" << std::endl;
            }
            std::cout << "Please select an user: " << std::endl;
            getline(std::cin, input);
            std::regex ft_isnum("^[0 + 9]+$");
            user = std::atoi(input.c_str());
            if (std::regex_match(input, ft_isnum) && user >= 0 && user <= index)
                contacts[user].print_user(contacts[user]);
            else
                std::cout << "learn to type ;)" << std::endl;
        }
        void print_list()
};

#endif