/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otitebah <otitebah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:00:30 by otitebah          #+#    #+#             */
/*   Updated: 2023/08/16 10:05:04 by otitebah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <iostream>

class Contact{
  
  private:
      std::string first_name;
      std::string last_name;
      std::string nickname;
      std::string phone_number;
      std::string secret;
  public:
  //setters
      void set_first_name(std::string str);
      void set_last_name(std::string str);
      void set_nickname(std::string str);
      void set_phone_number(std::string str);
      void set_secret(std::string str);
  //getters
      std::string get_first_name(void);
      std::string get_last_name(void);
      std::string get_nickname(void);
      std::string get_phone_number(void);
      std::string get_secret(void);
};


#endif
