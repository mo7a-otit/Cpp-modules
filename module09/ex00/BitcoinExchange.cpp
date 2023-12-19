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
            if((!std::isdigit(line[i]) && line[i] != '.') || line[2] == '.')
                throw std::invalid_argument("Error: invalid input => ");
            if(line[i] == '.')
                count++;
            if(line[i] == '.' && !line[i + 1])
                throw std::invalid_argument("Error: invalid value => ");
        }
        if(count != 1 && count != 0)
            throw std::invalid_argument("Error: invalid value => ");
        line.erase(0, 2);
        return line;
    }
    return NULL;
}

float getValue(std::string value){
    float newValue = std::atof(value.c_str());
    if (newValue < 0 || newValue > 1000)
        throw std::invalid_argument("Error: invalid range => ");
    return (float)newValue;
}

void Map::f_CSVfile(std::string keyInput, float valueFloat){
    it lower = CSVmap.lower_bound(keyInput);
    it itb = this->CSVmap.begin();
    it ite = this->CSVmap.end();
    while (itb != ite){
        if (itb->first == keyInput){
            std::cout << itb->first << " => " << valueFloat << " = "
            << valueFloat * lower->second << std::endl;
            return ;
        }
        itb++;
    }
    if (lower != CSVmap.begin()){
        lower--;
        std::cout << lower->first << " => " << valueFloat << " = "
            << valueFloat * lower->second << std::endl;
    }
}

void Map::checkLine(std::string line){
    size_t pipeFound = line.find('|');
    try{
        checkPipe(pipeFound);
        std::string keyInput = getDate(line, pipeFound);
        checkDate(keyInput);
        std::string value = getAfterPipe(line, pipeFound);
        float valueFloat = getValue(value);
        this->map[keyInput] = valueFloat;
        f_CSVfile(keyInput, valueFloat);
    }catch(std::exception& e){
        std::cout << e.what() << line << std::endl;
    }
}

void Map::data_CSVfile(std::ifstream& CSVfile){
    std::string line;
    std::getline(CSVfile, line);
    while (std::getline(CSVfile, line)){
        size_t found = line.find(',');
        std::string key = line.substr(0, found);
        line.erase(0, found+1);
        float valueFloat = std::atof(line.c_str());
        this->CSVmap[key] = valueFloat;
    }
}

void Map::Open_file(std::string fileName){
    Map m;
    std::ifstream InputFile;
    std::ifstream CSVfile;
    InputFile.open(fileName);
    CSVfile.open("data.csv");

    if (!InputFile.is_open()){
        std::cout << "Error: file" << std::endl;
        exit(1);
    }
    if (!CSVfile.is_open()){
        std::cout << "Error: file" << std::endl;
        exit(1);
    }
    std::string line;
    int i = 0;
    data_CSVfile(CSVfile);
    while (std::getline(InputFile, line)){
        if (i == 0){
            firstLine(line);
            i++;
        }
        else 
            checkLine(line);
    }
}