/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 16:24:34 by otitebah          #+#    #+#             */
/*   Updated: 2023/08/17 08:18:51 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int check_alpha(std::string str)
{
    int i;

    for(i = 0;str[i]; i++)
        if (!std::isalpha(str[i]))
            return (1);
    return (0);
}

int check_num(std::string str)
{
    int i;
    // if (str == "")
    //     return (0);
    for(i = 0;str[i]; i++)
        if (!std::isdigit(str[i]))
            return (1);
    return (0);
}

void PhoneBook::add(int i)
{
    std::string str;

    str = "";
    std::cout<<i<<std::endl;
    while (1)
    {
        std::cout<< "Enter a first name : ";
        if (!std::getline(std::cin, str))
            if (std::cin.eof())
                exit(0);
        if (check_alpha(str) == 0 && !str.empty())
        {
            this->_contact[i].set_first_name(str);
            break ;
        }
        else
            std::cout<<"The input contains a "\
                "non-alphabetic characters.\nPlease try again\n"\
                "-----------------\n";
    }
    str = "";
    while (1)
    {
        std::cout<<"Enter a last name : ";
        if (!std::getline(std::cin, str))
            if (std::cin.eof())
                exit(0);
        if (check_alpha(str) == 0 && str != "")
        {
            this->_contact[i].set_last_name(str);
            break ;
        }
        else
            std::cout<<"The input contains a "\
                "non-alphabetic characters.\nPlease try again\n"\
                "-----------------\n";
    }
    str = "";
    while (1)
    {
        std::cout<<"Enter a nickname : ";
        if (!std::getline(std::cin, str))
            if (std::cin.eof())
                exit(0);
        if (check_alpha(str) == 0 && str != "")
        {
            this->_contact[i].set_nickname(str);
            break ;
        }
        else
            std::cout<<"The input contains a "\
                "non-alphabetic characters.\nPlease try again\n"\
                "-----------------\n";
    }
    str = "";
    while (1)
    {
        std::cout<<"Enter the phone number : ";
        if (!std::getline(std::cin, str))
            if (std::cin.eof())
                exit(0);
        if (check_num(str) == 0 && str!= "")
        {
            this->_contact[i].set_phone_number(str);
            break ;
        }
        else
            std::cout<<"The input contains an "\
                "alphabetic characters.\nPlease try again\n"\
                "-----------------\n";
    }
    str = "";
    while (1)
    {
        std::cout<<"Enter a secret : ";
        if (!std::getline(std::cin, str))
            if (std::cin.eof())
                exit(0);
        if (check_alpha(str) == 0 && str != "")
        {
            this->_contact[i].set_secret(str);
            break ;
        }
        else
            std::cout<<"The input contains a "\
                "non-alphabetic characters.\nPlease try again\n"\
                "-----------------\n";
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
		i++;str = "";
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		var = (var * 10) + str[i] - '0';
		i++;
	}
	return (var * sign);
}

void PhoneBook::search(int index)
{
    std::string str;
    int i;
    i = 0;
    std::cout<<" ___________________________________________"<<std::endl;
    std::cout<<"|   index  |first name| last name| nickname |"<<std::endl;
    std::cout<<"|----------|----------|----------|----------|"<<std::endl;
    while (i < index)
    {
        std::cout<<"|";
        std::cout<<std::setw(10)<<i;
        std::cout<<"|";
        if (this->_contact[i].get_first_name().size() > 10)
        {
            std::string resized_name;
            resized_name = this->_contact[i].get_first_name();
            resized_name.resize(10);
            resized_name[9] = '.';
            std::cout<<std::setw(10)<<resized_name;
        }
        else
            std::cout<<std::setw(10)<<this->_contact[i].get_first_name();
        std::cout<<"|";
        
        if (this->_contact[i].get_last_name().size() > 10)
        {
            std::string resized_name;
            resized_name = this->_contact[i].get_last_name();
            resized_name.resize(10);
            resized_name[9] = '.';
            std::cout<<std::setw(10)<<resized_name;
        }
        else
            std::cout<<std::setw(10)<<this->_contact[i].get_last_name();
        std::cout<<"|";

        if (this->_contact[i].get_nickname().size() > 10)
        {
            std::string resized_name;
            resized_name = this->_contact[i].get_nickname();
            resized_name.resize(10);
            resized_name[9] = '.';
            std::cout<<std::setw(10)<<resized_name;
        }    
        else
            std::cout<<std::setw(10)<<this->_contact[i].get_nickname();
        std::cout<<"|"<<std::endl;
        i++;
    }
    std::cout<<"---------------------------------------------"<<std::endl;
    while (1)
    {
        int h;
        std::string hh;
        std::cout<<"Enter an index : ";
        std::getline(std::cin, hh);
        if (index == 0)
            break;
        h = ft_atoi(hh);
        if(h < index)
        {
            std::cout<<"First name     : "<<this->_contact[h].get_first_name()<<std::endl;
            std::cout<<"Last name      : "<<this->_contact[h].get_last_name()<<std::endl;
            std::cout<<"Nickname       : "<<this->_contact[h].get_nickname()<<std::endl;
            std::cout<<"Phone number   : "<<this->_contact[h].get_phone_number()<<std::endl;
            std::cout<<"Darkest secret : "<<this->_contact[h].get_secret()<<std::endl;
            break;
        }
        else 
            std::cout<<"The number is invalid\nPlease try again\n";
    }
        
        
}
