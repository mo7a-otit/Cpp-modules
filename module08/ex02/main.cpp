#include "MutantStack.hpp"

int main(){
    MuntanStack<int> arr;

    for (int i(0); i < 5; i++)
        arr.push(i+1);

    MuntanStack<int>::iterator itb = arr.begin();
    MuntanStack<int>::iterator ite = arr.end();
    while (itb < ite)
        std::cout << *itb++ << " ";
    std::cout << std::endl;
    
}