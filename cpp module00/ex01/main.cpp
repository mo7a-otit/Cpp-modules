/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 07:59:53 by othmane           #+#    #+#             */
/*   Updated: 2023/08/17 08:20:28 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main ()
{
    PhoneBook contact;
    std::string str;
    int i;
    int count;

    count = 0;
    i = 0;
    
    while (str != "EXIT")
    {
        std::cout<<"Enter a command (ADD, SEARCH or EXIT) >\n";
        std::getline(std::cin, str);
        if (std::cin.eof())
            break;
        if (str == "ADD")
        {
            if (i > 7)
            {
                i = 0;
                count = 1;
            }
            contact.add(i);
            i++;
        }
        if (str == "SEARCH")
        {
            if (count == 1)
                contact.search(7);
            else
                contact.search(i);
        }
            
    }
    return (0);
}