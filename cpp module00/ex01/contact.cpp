/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 12:41:50 by otitebah          #+#    #+#             */
/*   Updated: 2023/08/14 15:17:49 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void Contact::set_first_name(std::string str)
{
    this->first_name = str;
}

void Contact::set_last_name(std::string str)
{
    this->last_name = str;
}

void Contact::set_nickname(std::string str)
{
    this->nickname = str;
}

void Contact::set_phone_number(std::string str)
{
    this->phone_number = str;
}

void Contact::set_secret(std::string str)
{
    this->secret = str;
}

std::string Contact::get_first_name(void)
{
    return (this->first_name);
}

std::string Contact::get_last_name(void)
{
    return (this->last_name);
}

std::string Contact::get_nickname(void)
{
    return (this->nickname);
}

std::string Contact::get_phone_number(void)
{
    return (this->phone_number);
}

std::string Contact::get_secret(void)
{
    return (this->secret);
}