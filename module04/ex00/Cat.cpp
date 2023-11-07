#include "Animal.hpp"

//Cat constructor
Cat::Cat(){

    type = "Cat";
    std::cout << "Constructor " << type 
        << " was created" << std::endl;
}

//Cat copy constructor
Cat::Cat(const Cat& other){

    std::cout << "Cat copy constructor called"
        << std::endl;
    *this = other;
}

//copy assignment operator
Cat& Cat::operator=(const Cat& other){

    std::cout << "Copy assignment operator called"
        << std::endl;
    type = other.type;
    return *this;
}

//Destroctor
Cat::~Cat(){

    std::cout << "Destroctor Cat called"
        << std::endl;
}

//member functions
void Cat::makeSound() const {

    std::cout << type << " \033[1;35mMEOWING\033[0m"
        << std::endl;
}

std::string Cat::getType() const{

    return type;
}
