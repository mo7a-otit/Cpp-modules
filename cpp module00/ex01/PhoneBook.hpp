/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 14:13:37 by otitebah          #+#    #+#             */
/*   Updated: 2023/08/12 16:51:22 by otitebah         ###   ########.fr       */
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
        int index;
    
    public :
        void add(void);
};



#endif