#include "BitcoinExchange.hpp"

int main(int ac, char **av){
    Map map;
    if(ac == 2){
        map.Open_file(av[1]);
    }
    else
        std::cout << "Error: could not open file"
            << std::endl;
}