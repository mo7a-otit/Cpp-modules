#include "RPN.hpp"

void checkStr(std::string& str){
    for (int i = 0; str[i]; i++){
        if ((NUMBERS_CHECK) && NMBRS_CHECK)
                throw std::invalid_argument INVALID_CHAR;
        else if (str[i + 1] && NMBRS_CHECK && NMBRS_CHECK_PLUS){
            throw std::invalid_argument BIG_NMBR;
        }
    }
    REMOVE_SPACES;
}

int RpnOperation(std::string str){
    std::stack<int> stack;
    int val1, val2, j;
    j = 0;
    for (int i = 0; str[i]; i++){
        if(std::isdigit(str[i])){
            stack.push(str[i] - '0');
        }
        val1 = 0;
        val2 = 0;
        switch (str[i])
        {
            case '+':
                std::cout << "The stack size is : " << stack.size() << std::endl;
                if(stack.size() < 2)
                    throw std::invalid_argument STACK_ERR;
                val2 = stack.top();
                stack.pop();
                val1 = stack.top();
                stack.pop();
                stack.push(val1 + val2);
                j++;
                break;
            
            case '-':
                if(stack.size() < 2)
                    throw std::invalid_argument STACK_ERR;
                val2 = stack.top();
                stack.pop();
                val1 = stack.top();
                stack.pop();
                stack.push(val1 - val2);
                j++;
                break;
            
            case '*':
                if(stack.size() < 2)
                    throw std::invalid_argument STACK_ERR;
                val2 = stack.top();
                stack.pop();
                val1 = stack.top();
                stack.pop();
                stack.push(val1 * val2);
                j++;
                break;
           
            case '/':
                if(stack.size() < 2)
                    throw std::invalid_argument STACK_ERR;
                val2 = stack.top();
                if (val2 <= 0)
                    throw std::invalid_argument DIVISION_ERR;
                stack.pop();
                val1 = stack.top();
                stack.pop();
                stack.push(val1 / val2);
                j++;
                break;
        }
    }
    if (stack.size() != 1)
        throw std::invalid_argument FINAL_ERR;
    if (j == 0)
        throw std::invalid_argument PRGRAM_ERR;
    return stack.top();
}

void RpnExpression(std::string str){
    try{
        checkStr(str);
        std::cout << "After parsing : [" << str << "]\n";
        int i = RpnOperation(str);
        std::cout << "The result is : " << i << std::endl;
    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
}