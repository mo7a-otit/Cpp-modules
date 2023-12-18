#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include<algorithm>


class Map{
    private :
        std::map<std::string, int> map;
    public :
        Map();
        Map(const Map& oldObj);    
        Map& operator=(const Map& oldObj);
        ~Map();

        // void DateValue(std::string &line);
        void Open_file(std::string fileName);
        void checkLine(std::string line);
};

#endif