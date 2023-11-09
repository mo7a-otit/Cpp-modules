#include "Dog.hpp"

//Dog constructor
Dog::Dog(){

    type = "Dog";
    std::cout << "Constructor " << type 
        << " was created" << std::endl;
}

//Dog copy constructor
Dog::Dog(const Dog& other){

    std::cout << "Dog copy constructor called"
        << std::endl;
    *this = other;
}

//copy assignment operator
Dog& Dog::operator=(const Dog& other){

    std::cout << "Copy assignment operator called"
        << std::endl;
    type = other.type;
    return *this;
}

//Destroctor
Dog::~Dog(){

    std::cout << "Destroctor Dog called"
        << std::endl;
}

//member functions
void Dog::makeSound() const {

    std::cout << type << " \033[1;34mbark\033[0m"
        << std::endl;
}

std::string Dog::getType() const{

    return type;
}
