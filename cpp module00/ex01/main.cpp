/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 07:59:53 by othmane           #+#    #+#             */
/*   Updated: 2023/08/20 13:03:40 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main ()
{
    PhoneBook contact;
    std::string str;
    int i;
    int count;

    i = 0;
    count = i;
    
    while (str != "EXIT")
    {
        std::cout<<"Enter a command (ADD, SEARCH or EXIT) >\n";
        std::getline(std::cin, str);
        if (std::cin.eof())
            break;
        if (str == "ADD")
        {
            contact.add(i);
            i++;
            if (count < 8)
                count++;
        }
        if (i == 8)
            i = 0;
        if (str == "SEARCH")
        {
            if (count == 8)
            {
                std::cout<<"othmane\n";
                contact.search(count);
            }
                
            else
                contact.search(i);
        }   
    }
    return (0);
}