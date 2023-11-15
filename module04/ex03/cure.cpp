#include "cure.hpp"
#include "amateria.hpp"
#include "icharacter.hpp"

Cure::Cure(){

    this->type_ = "cure";
    std::cout << this->type_ << " constructor called"
        << std::endl;
}

Cure::Cure(const Cure& other) : AMateria(){

    type_ = this->getType();
    *this = other;    
}

Cure& Cure::operator=(const Cure& other){

    this->type_ = other.type_;
    return *this;
}

Cure::~Cure(){

    std::cout << type_ << " destructor called"
        << std::endl;
}

void Cure::use(ICharacter& target){

    std::cout << "heals " << target.getName() 
        << "'s wounds *" << std::endl;
}

AMateria* Cure::clone() const {

    return new Cure(*this);
}