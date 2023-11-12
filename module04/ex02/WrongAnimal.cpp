#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){

    type = "WrongAnimal";
    std::cout << "Constructor " << type 
        << " was created" << std::endl;
}

//WrongAnimal copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal& other){

    std::cout << "WrongAnimal copy constructor called"
        << std::endl;
    *this = other;
}

//copy assignment operator
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other){

    std::cout << "Copy assignment operator called"
        << std::endl;
    type = other.type;
    return *this;
}

//Destroctor
WrongAnimal::~WrongAnimal(){

    std::cout << "Destroctor WrongAnimal called"
        << std::endl;
}

//member functions
void WrongAnimal::makeSound() const {

    std::cout << type << " \033[1;33mMake sound\033[0m"
        << std::endl;
}

std::string WrongAnimal::getType() const{

    return type;
}


