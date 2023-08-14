/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 07:59:53 by othmane           #+#    #+#             */
/*   Updated: 2023/08/14 17:06:47 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main ()
{
    PhoneBook contact;
    std::string str;
    int i;

    i = 0;
    while (str != "EXIT")
    {
        std::cout<<"Enter a command (ADD, SEARCH or EXIT) >\n";
        std::getline(std::cin, str);

        
        if (str == "ADD")
        {
            if (i > 7)
                i = 0;
            contact.add(i);
            i++;
        }
        if (str == "SEARCH\n")
            std::cout<<"SEARCH";
    }
    return (0);
}