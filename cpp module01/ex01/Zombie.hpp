/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 18:52:53 by otitebah          #+#    #+#             */
/*   Updated: 2023/08/18 20:15:54 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie{
    private:
        std::string name;
    public:
        void announce();
        void SetName(std::string name);

};
Zombie*    zombieHorde( int N, std::string name );

#endif