#include <iostream>
#include <fstream>
#include <string>

void replace(std::string fileName, std::string s1, std::string s2){

    //open the recent file
    std::fstream oldFile;
    oldFile.open(fileName, std::ios::in);

    //in this case we want just to read from this file so
    //std::ios::in indicate that the file will be opened for input operation
    if (!oldFile.is_open()){
        std::cerr<< "Failed to open the file"<< std::endl;
        return ;
    }
    
    //creating the new file
    std::ofstream newFile(fileName + ".replace");
    if (!newFile.is_open()){
        std::cerr<< "Failed to open the new file"<< std::endl;
        return ;
    }

    //now we should search s1 in our file and replace it with s2
    //then write the lines to ".replace file"
    std::string line;
    while (std::getline(oldFile, line)){

        size_t found = line.find(s1);
        while ((found = line.find(s1)) != std::string::npos){
            line = line.substr(0, found) + s2 + line.substr(found + s1.length());
        }

        newFile << line << std::endl;
    }
    oldFile.close();
    newFile.close();
}

int main(int ac, char **av){
    // if (av[1] && av[2] && av[3]){
    //     replace(av[1], av[2], av[3]);
    // }
    // else
    //     std::cerr<< "Failed operation" << std::endl;

    std::string str = "hello world";
    std::string temp = str.substr(str.find("lo"));
    std::cout << temp << std::endl;

}