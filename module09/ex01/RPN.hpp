#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <algorithm>



#define NUMBERS_CHECK str[i] > '9' || str[i] < '0'

#define NMBRS_CHECK (str[i] != ' ' && str[i] != '-'\
                    && str[i] != '+' && str[i] != '/' && str[i] != '*')

#define NMBRS_CHECK_PLUS (str[i + 1] != ' ' && str[i + 1] != '-'\
            && str[i + 1] != '+' && str[i + 1] != '/' && str[i + 1] != '*')


#define REMOVE_SPACES str.erase(remove_if(str.begin(),\
                                 str.end(), isspace), str.end())

void RpnExpression(std::string);


#endif