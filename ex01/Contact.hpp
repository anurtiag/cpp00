/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 08:55:55 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/06 15:20:15 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>
# include <regex>
# include <iomanip>

// class Contact
// {
// private:
//     std::string first_name;
//     std::string last_name;
//     std::string nickname;
//     std::string phone_number;
//     std::string darkest_secret;
//     // std::bool set;
    
// public:
//     void    add_user(void)
//     {
//         std::cout << "Please enter a first name: " << std::endl;
//         getline(std::cin, first_name);
//         std::cout << "Please enter a last name: " << std::endl;
//         getline(std::cin, last_name);
//         std::cout << "Please enter a nickname: " << std::endl;
//         getline(std::cin, nickname);
//         std::cout << "Please enter a phone number: " << std::endl;
//         getline(std::cin, phone_number);
//         std::cout << "Please enter a darkest secret: " << std::endl;
//         getline(std::cin, darkest_secret);
//     }
//     void    print_user(Contact contact)
//     {
//         std::cout << "First name: " << contact.first_name << std::endl;
//         std::cout << "Last name: " << contact.last_name << std::endl;
//         std::cout << "Nickname: " << contact.nickname << std::endl;
//         std::cout << "Phone number: " << contact.phone_number << std::endl;
//         std::cout << "Darkest secret: " << contact.darkest_secret << std::endl;
//     }
//     void print_list(Contact contact, int list_num)
//     {
//         std::cout << "|" << std::right << std::setfill(' ') << std::setw(10) << list_num << "|";
//         truncate(contact.first_name);
//         truncate(contact.last_name);
//         truncate(contact.nickname);
//         std::cout << std::endl;
//         std::cout << "|" << std::setfill('-') << std::setw(44) << "|" << std::endl;
//     }
//     void truncate(const std::string str)
//     {
//         if (str.length() <= 10)
//             std::cout << std::right << std::setfill(' ') << std::setw(10) << str << "|";
//         else
//         {
//             for(size_t i = 0; i < 9; i++)
//                 std::cout << std::left << std::setw(1) << str[i];
//             std::cout << "." << "|";
//         }
//     }
// };


// #endif

class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
    // std::bool set;
    
public:
    void    add_user(void);
    void    print_user(Contact contact);
    void print_list(Contact contact, int list_num);
    void truncate(const std::string str);
};


#endif