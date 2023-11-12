#include "ice.hpp"

Ice::Ice() : AMateria(){

    this->name = "ice";
}

void Ice::use(ICharacter& target){

    std::cout << "* shoots an ice bolt at " 
        << target.getName() << std::endl;
}

AMateria* Ice::clone() const {

    return new Ice(*this);
}