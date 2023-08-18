/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 08:50:56 by otitebah          #+#    #+#             */
/*   Updated: 2023/08/18 17:36:20 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout<<"Zombie "<<this->name<<" created.\n";
}

Zombie::~Zombie()
{
    std::cout<<"Zombie "<<this->name<<" destroyed.\n";
}

void Zombie::announce()
{
     std::cout<<this->name<<" : BraiiiiiiinnnzzzZ...\n";
}
