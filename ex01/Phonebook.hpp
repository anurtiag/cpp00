/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 08:48:09 by anurtiag          #+#    #+#             */
/*   Updated: 2024/05/28 17:48:20 by anurtiag         ###   ########.fr       */
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
            index = 0;
            while(1)
            {
                std::cout << "Please select an option: ADD, SEARCH or EXIT" << std::endl;
                getline(std::cin, input);
                if(input == "ADD")
                    contacts[index].add_user();
                else if(input == "SEARCH")
                    std::cout << "vamos a buscar un contacto" << std::endl;
                else if(input == "EXIT")
                    break ;
                else
                    std::cout << "Wrong input :(" << std::endl;
                index++;
                if (index == 9)
                    index = 0;
            }
        }
        void search_user(Contact contacts[8])
        {
            int i;
        
            i = -1;
            while(++i < 8)
            {
                //printuser
            }
        }
};

#endif