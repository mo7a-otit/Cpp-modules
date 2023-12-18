#include "BitcoinExchange.hpp"

Map::Map(){}

Map::Map(const Map& oldObj){
    this->map = oldObj.map;
    *this = oldObj;
}

Map& Map::operator=(const Map& oldObj){
    (void)oldObj;
    return *this;
}

Map::~Map(){}


/// /////////////////////////////////////////// ///
void firstLine(std::string& line){
    // removeSpaces(line);
    if (std::strcmp(line.c_str(), "date | value") != 0){
        std::cout << "The file doesn't contain the title" 
            << std::endl;
        exit (1);
    }
}

// std::string parse_date(std::string line){}

void checkPipe(size_t pipeFound){
        if (pipeFound == std::string::npos || pipeFound != 11)
            throw std::invalid_argument("Error: invalid input => ");
}

std::string getDate(std::string line, size_t pipeFound){
    int counter = 0;
    if (line[pipeFound - 1] != ' ')
        throw std::invalid_argument("Error: invalid input => ");
    for (size_t i(0); i < pipeFound - 1; i++){
        if (line[i] == '-')
            counter++;
    } 
    if (counter != 2)
        throw std::invalid_argument("Error: invalid input => ");
    return line.substr(0, pipeFound-1);
}

void checkDate(std::string key){
    if (key[4] != '-' || key [7] != '-')
        throw std::invalid_argument("Error: invalid input => ");
    // tm res;
    // if (strptime(key.c_str(), "%Y-%m-%d", &res) == NULL)
    //     throw std::invalid_argument("Error: invalid date => ");
    char year[5];
    char month[3];
    char day[3];
    std::strncpy(year, key.c_str(), 4);      year[4] = '\0';
    std::strncpy(month, key.c_str() + 5, 2); month[2] = '\0';
    std::strncpy(day, key.c_str() + 8, 2);   day[2] = '\0';
   
    int Y = std::atoi(year);
    int M = std::atoi(month);
    int D = std::atoi(day);
    if (Y > 2022 || M > 12 || D > 31)
        throw std::invalid_argument("Error: invalid date => ");
    else if (Y < 2009 || M < 0 || D < 0)
        throw std::invalid_argument("Error: invalid date => ");
}

std::string getAfterPipe(std::string line, size_t pipeFound){
    line.erase(0, pipeFound);
    int count = 0;
    if(line[0]){
        if (line[1] != ' ')
            throw std::invalid_argument("Error: invalid input => ");
        if (!line[2])
            throw std::invalid_argument("Error: no value found => ");
        for (int i = 2; line[i]; i++){
            if(!std::isdigit(line[i]) && line[i] != '.')
                throw std::invalid_argument("Error: invalid input111 => ");
            if(line[i] == '.')
                count++;
        }
        if(count != 1 && count != 0)
            throw std::invalid_argument("Error: invalid value => ");
        line.erase(0, 2);
        return line;
    }
    return NULL;
}

float getValue(std::string value){
    int newValue = std::atoi(value.c_str());
    if (newValue < 0 || newValue > 1000)
        throw std::invalid_argument("Error: invalid range => ");
    return (float)newValue;
}

void Map::checkLine(std::string line){
    size_t pipeFound = line.find('|');
    try{
        checkPipe(pipeFound);
        std::string key = getDate(line, pipeFound);
        checkDate(key);
        std::string value = getAfterPipe(line, pipeFound);
        float valueFloat = getValue(value);
        (void)valueFloat;
        this->map[key] = valueFloat;
        std::map<std::string, float>::iterator it = this->map.begin();
        std::cout << it->first << "=>" << it->second << std::endl;
        it++;
    }catch(std::exception& e){
        std::cout << e.what() << line << std::endl;
    }
}


// std::map<std::string, int> parsing(std::string line){

// }

void Map::Open_file(std::string fileName){
    Map m;
    std::ifstream file;
    file.open(fileName);

    std::string line;
    int i = 0;
    while (std::getline(file, line)){
        if (i == 0){
            firstLine(line);
            i++;
        }
        else {
            checkLine(line);
        }
    }
    // std::map<std::string, float>::iterator itb = this->map.begin();
    // std::map<std::string, float>::iterator ite = this->map.end();
    // while (itb != ite){
    //     std::cout << itb->first << "=>" << itb->second << std::endl;
    //     itb++;
    // }
    
}