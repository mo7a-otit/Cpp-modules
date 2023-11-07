#include "Animal.hpp"

//Animal constructor
Animal::Animal(){

    type = "Animal";
    std::cout << "Constructor " << type 
        << " was created" << std::endl;
}

//Animal copy constructor
Animal::Animal(const Animal& other){

    std::cout << "Animal copy constructor called"
        << std::endl;
    *this = other;
}

//copy assignment operator
Animal& Animal::operator=(const Animal& other){

    std::cout << "Copy assignment operator called"
        << std::endl;
    type = other.type;
    return *this;
}

//Destroctor
Animal::~Animal(){

    std::cout << "Destroctor Animal called"
        << std::endl;
}

//member functions
void Animal::makeSound() const {

    std::cout << type << " \033[1;33mMake sound\033[0m"
        << std::endl;
}

std::string Animal::getType() const{

    return type;
}
