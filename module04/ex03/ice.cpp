#include "ice.hpp"
#include "amateria.hpp"
#include "icharacter.hpp"

Ice::Ice(){

    this->type_ = "ice";
    std::cout << this->type_ << " constructor called"
        << std::endl;
}

Ice::Ice(const Ice& other) : AMateria(){

    type_ = this->getType();
    *this = other;    
}

Ice& Ice::operator=(const Ice& other){

    this->type_ = other.type_;
    return *this;
}

Ice::~Ice(){

    std::cout << type_ << " destructor called"
        << std::endl;
}

void Ice::use(ICharacter& target){

    std::cout << "* shoots an ice bolt at " 
        << target.getName() << std::endl;
}

AMateria* Ice::clone() const {

    return new Ice(*this);
}