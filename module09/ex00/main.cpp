#include "BitcoinExchange.hpp"

// void removeSpaces(std::string& line){
//     line.erase(std::remove(line.begin(), line.end(), ' '), line.end());
// }



int main(int ac, char **av){
    Map map;
    if(ac == 2){
        map.Open_file(av[1]);
    }
}