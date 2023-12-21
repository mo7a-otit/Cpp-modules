#include "PmergeMe.hpp"

int main(int ac, char **av){
    if (ac > 2){
        try{
            checkArgs(av);
            sortAlgo(av);
        }catch(std::exception& e){
            std::cout << e.what() << std::endl;
        }
    }
    else
        std::cout << "Error" << std::endl;
}