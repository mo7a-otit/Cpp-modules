/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 16:24:34 by otitebah          #+#    #+#             */
/*   Updated: 2023/08/14 17:06:07 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::add(int i)
{
    std::string str;

    str = "";
    std::cout<<i<<std::endl;
    while (!std::cin.eof() && str == "")
    {
        std::cout<< "Enter a first name : ";
        if (std::getline(std::cin, str) && str != "")
            this->_contact[i].set_first_name(str);
    }
    str = "";
    while (!std::cin.eof() && str == "")
    {
        std::cout<<"Enter a last name : ";
        if (std::getline(std::cin, str) && str != "")
            this->_contact[i].set_last_name(str);
    }
    str = "";
    while (!std::cin.eof() && str == "")
    {
        std::cout<<"Enter a nickname : ";
        if (!std::getline(std::cin, str) && str != "")
            this->_contact[i].set_nickname(str);
    }
    str = "";
    while (!std::cin.eof() && str == "")
    {
        std::cout<<"Enter the phone number : ";
        if (!std::getline(std::cin, str) && str != "")
            this->_contact[i].set_phone_number(str);
    }
    str = "";
    while (!std::cin.eof() && str == "")
    {
        std::cout<<"Enter a secret : ";
        if (!std::getline(std::cin, str) && str != "")
            this->_contact[i].set_secret(str);
    }
}