/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 08:51:25 by otitebah          #+#    #+#             */
/*   Updated: 2023/08/20 07:15:22 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include<string>

int main(int ac, char **av)
{
    int x(1);
    int y(0);

    if (ac == 1)
    {
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return (0);
    }
    while (av[x])
    {
        y = 0;
        while (av[x][y])
        {
            if (av[x][y] >= 'a' && av[x][y] <= 'z')
                av[x][y] -= 32;
            y++;
        }
        std::cout<<av[x];
        x++;
    }
    std::cout<<"\n";
}