/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 08:24:55 by otitebah          #+#    #+#             */
/*   Updated: 2023/08/17 13:27:04 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie{
    private:
        std::string name;
    public:
        Zombie(std::string name);
        ~Zombie();
        void announce();
};

Zombie* newZombie( std::string name );
void randomChump(std::string name);

#endif