#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <stack>



#define NUMBERS_CHECK str[i] > '9' || str[i] < '0'

#define NMBRS_CHECK (str[i] != ' ' && str[i] != '-'\
                    && str[i] != '+' && str[i] != '/' && str[i] != '*')

#define NMBRS_CHECK_PLUS (str[i + 1] != ' ' && str[i + 1] != '-'\
            && str[i + 1] != '+' && str[i + 1] != '/' && str[i + 1] != '*')


#define REMOVE_SPACES str.erase(remove_if(str.begin(),\
                                 str.end(), isspace), str.end())

#define INVALID_CHAR ("Error: invalid character")

#define BIG_NMBR ("Error: Big Number")

#define FINAL_ERR ("Error")

#define STACK_ERR ("Error: stack doesn't have two numbers")

#define DIVISION_ERR ("Error: divisiion can't be done")

#define PRGRAM_ERR ("The program must take an inverted Polish \
mathematical expression as an argument")

void RpnExpression(std::string);


#endif