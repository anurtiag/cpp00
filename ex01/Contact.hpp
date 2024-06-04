/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 08:55:55 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/04 07:41:41 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>
# include <regex>
# include <iomanip>

class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
    
public:
    void    add_user(void)
    {
        std::cout << "Please enter a first name: " << std::endl;
        getline(std::cin, first_name);
        std::cout << "Please enter a last name: " << std::endl;
        getline(std::cin, last_name);
        std::cout << "Please enter a nickname: " << std::endl;
        getline(std::cin, nickname);
        std::cout << "Please enter a phone number: " << std::endl;
        getline(std::cin, phone_number);
        std::cout << "Please enter a darkest secret: " << std::endl;
        getline(std::cin, darkest_secret);
    }
    void    print_user(Contact contact)
    {
        std::cout << "First name: " << contact.first_name << std::endl;
        std::cout << "Last name: " << contact.last_name << std::endl;
        std::cout << "Nickname: " << contact.nickname << std::endl;
        std::cout << "Phone number: " << contact.phone_number << std::endl;
        std::cout << "Darkest secret: " << contact.darkest_secret << std::endl;
    }
    
};



#endif