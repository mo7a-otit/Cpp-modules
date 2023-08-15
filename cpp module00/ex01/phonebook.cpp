/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 16:24:34 by otitebah          #+#    #+#             */
/*   Updated: 2023/08/15 14:17:05 by otitebah         ###   ########.fr       */
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

int	ft_atoi(std::string str)
{
	int				i;
	unsigned long	var;
	int				sign;

	i = 0;
	sign = 1;
	var = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		var = (var * 10) + str[i] - '0';
		i++;
	}
	return (var * sign);
}

std::string put_name(std::string str, int max)
{
    
}

void PhoneBook::search(int index)
{
    std::string str;
    int i;
    i = 0;
    str = "";

    while (i < index)
    {
        std::cout<<" ___________________________________________"<<std::endl;
        std::cout<<"|   index  |first name| last name| nickname |"<<std::endl;
        std::cout<<"|----------|----------|----------|----------|"<<std::endl;
       
        // std::cout<<std::setw(10);
        std::cout<<"|";
        std::cout<<std::setw(10)<<i;
        std::cout<<"|";
        
        std::cout<<std::setw(10)<<this->_contact[i].get_first_name();
        std::cout<<"|";
        
        std::cout<<std::setw(10)<<this->_contact[i].get_last_name();
        std::cout<<"|";
        
        std::cout<<std::setw(10)<<this->_contact[i].get_nickname();
        std::cout<<"|"<<std::endl;
        i++;
    }
    std::cout<<"---------------------------------------------"<<std::endl;
}