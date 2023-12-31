#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include<algorithm>
#include <time.h>


class Map{
    private :
        std::map<std::string, float> map;
        std::map<std::string, float> CSVmap;
        // std::vector<std::pair<std::string, float> > map; 
        // typedef std::vector<std::pair<std::string, float> >::iterator it;
        typedef std::map<std::string, float>::iterator it;
    public :
        Map();
        Map(const Map& oldObj);    
        Map& operator=(const Map& oldObj);
        ~Map();

        // void DateValue(std::string &line);
        void Open_file(std::string fileName);
        void checkLine(std::string line);
        void f_CSVfile(std::string keyInput, float valueFloat);
        void data_CSVfile(std::ifstream& CSVfile);
};

#endif