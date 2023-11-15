#include "Dog.hpp"
#include "Brain.hpp"

//Dog constructor
Dog::Dog(){

    type = "Dog";
    std::cout << "Constructor " << type 
        << " is called" << std::endl;
    dog = new Brain();
    std::cout << "Dog brain was created"
        << std::endl;
}

//Dog copy constructor
Dog::Dog(const Dog& other) : Animal(){

    std::cout << "Dog copy constructor with a deep copy, called"
        << std::endl;
    this->type = other.getType();
    this->dog = new Brain(*(other.dog));
}
//////////////////////////////////////////////////////////last change
//copy assignment operator
Dog& Dog::operator=(const Dog& other){

    std::cout << "Copy assignment operator called"
        << std::endl;
    this->type = other.type;
    if (this->dog)
        delete this->dog;
    this->dog = new Brain(*(other.dog));
    return *this;
}

//Destroctor
Dog::~Dog(){

    std::cout << "Destructor Dog called"
        << std::endl;
    delete dog;
}

//member functions
void Dog::makeSound() const {

    std::cout << type << " \033[1;34mbark\033[0m"
        << std::endl;
}

std::string Dog::getType() const{

    return type;
}
