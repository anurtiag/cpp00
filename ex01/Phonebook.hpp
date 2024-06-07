/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 08:48:09 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/06 16:14:31 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #ifndef PHONEBOOK_HPP
// # define PHONEBOOK_HPP

// # include "Contact.hpp"

// class Phonebook
// {
//     private:
//         Contact contacts[8];
//         int     index;
//         int     total;

//     public:
//         void initial_loop()
//         {
//             std::string input;
//             index = -1;
//             total = 0;
//             while(1)
//             {
//                 std::cout << "Please select an option: ADD, SEARCH or EXIT" << std::endl;
//                 getline(std::cin, input);
//                 if(input == "ADD")
//                 {
//                     index++;
//                     contacts[index].add_user();
//                 }
//                 if (total < index)
//                     total = index;
//                 else if(input == "SEARCH")
//                     search_user(contacts, (total));
//                 else if(input == "EXIT" || std::cin.eof())
//                     break ;
//                 else
//                     std::cout << "Wrong input :(" << std::endl;
//                 if (index == 7)
//                     index = -1;
//             }
//         }

//         void search_user(Contact contacts[8], int index)
//         {
//             std::string input;
//             int user;

//             std::cout << "|" << std::setfill('-') << std::setw(44) << "|" << std::endl;
//             std::cout << "|";
//             contacts->truncate("index");
//             contacts->truncate("list first");
//             contacts->truncate("last name");
//             contacts->truncate("nickname");
//             std::cout << std::endl;
//             std::cout << "|" << std::setfill('-') << std::setw(44) << "|" << std::endl;
//             for(size_t i = 0; i <= index; i++)
//                 contacts->print_list(contacts[i], i);
//             std::cout << "Please select an user: " << std::endl;
//             getline(std::cin, input);
//             std::regex ft_isnum("^[0-9]+$");
//             user = std::atoi(input.c_str());
//             if (std::regex_match(input, ft_isnum) && (user >= 0 && user <= index))
//                 contacts[user].print_user(contacts[user]);
//             else
//                 std::cout << "learn to type ;)" << std::endl;
//         }
// };

// #endif

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class Phonebook
{
    private:
        Contact contacts[8];
        int     index;
        int     total;
        void search_user(Contact contacts[8], int index);

    public:
        void initial_loop();
};

#endif