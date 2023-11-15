#include "WrongCat.hpp"

//WrongCat constructor
WrongCat::WrongCat(){

    type = "WrongCat";
    std::cout << "Constructor " << type 
        << " was created" << std::endl;
}

//WrongCat copy constructor
WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(){

    std::cout << "WrongCat copy constructor called"
        << std::endl;
    *this = other;
}

//copy assignment operator
WrongCat& WrongCat::operator=(const WrongCat& other){

    std::cout << "Copy assignment operator called"
        << std::endl;
    type = other.type;
    return *this;
}

//Destroctor
WrongCat::~WrongCat(){

    std::cout << "Destroctor WrongCat called"
        << std::endl;
}

//member functions
void WrongCat::makeSound() const {

    std::cout << type << " \033[1;35mMEOWING\033[0m"
        << std::endl;
}

std::string WrongCat::getType() const{

    return type;
}