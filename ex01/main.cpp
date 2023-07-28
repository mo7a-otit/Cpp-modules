/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 07:59:53 by othmane           #+#    #+#             */
/*   Updated: 2023/07/25 08:51:15 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main ()
{
    std::string Name;
    std::cout<< "Hello User!!\n"<<"What's your name\n";
    std::cin>>Name;
    std::cout<<"pleased to meet you <3\n"<<"How old are you?\n";
    int age(0);
    std::cin>>age;
    std::cout<<"The new user "<< Name << " Was successfully created\n";
}