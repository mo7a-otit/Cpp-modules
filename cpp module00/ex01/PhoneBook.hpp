/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 14:13:37 by otitebah          #+#    #+#             */
/*   Updated: 2023/08/14 15:53:50 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONBOOK_HPP
#define PHONBOOK_HPP

#include "contact.hpp"
#include <iostream>
#include <string>

class PhoneBook{
    
    private :
        Contact _contact[8];
    
    public :
        void add(int i);
};



#endif