#include "RPN.hpp"

void checkStr(std::string& str){
    for (int i = 0; str[i]; i++){
        if ((NUMBERS_CHECK) && NMBRS_CHECK){
                std::cout << str[i] << std::endl;
                throw std::invalid_argument("Error: invalid character");   
            }
        else if (str[i + 1] && NMBRS_CHECK && NMBRS_CHECK_PLUS){
            throw std::invalid_argument("Error: Big Number");
        }
    }
    REMOVE_SPACES;
}

// void RpnOperation(std::string str){

// }

void RpnExpression(std::string str){
    try{
        checkStr(str);
        std::cout << "After parsing : [" << str << "]\n";
        // RpnOperation(str);
    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
}