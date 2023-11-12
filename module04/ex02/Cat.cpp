#include "Cat.hpp"

//Cat constructor
Cat::Cat(){

    type = "Cat";
    std::cout << "Constructor " << type 
        << " is called" << std::endl;
    cat = new Brain();
    std::cout << "Cat brain Was created"
        << std::endl;
}

//Cat copy constructor
Cat::Cat(const Cat& other){

    std::cout << "Cat copy constructor with a deep copy, called"
        << std::endl;
    this->type = other.getType();
    this->cat = new Brain(*(other.cat));
}

//copy assignment operator
Cat& Cat::operator=(const Cat& other){

    std::cout << "Copy assignment operator called"
        << std::endl;
    this->type = other.type;
    if (this->cat)
        delete cat;
    this->cat = new Brain(*(other.cat));
    return *this;
}

//Destroctor
Cat::~Cat(){

    std::cout << "Destroctor Cat called"
        << std::endl;
    delete cat;
}

//member functions
void Cat::makeSound() const {

    std::cout << type << " \033[1;35mMEOWING\033[0m"
        << std::endl;
}

std::string Cat::getType() const{

    return type;
}
