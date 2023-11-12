#include "amateria.hpp"

AMateria::AMateria(){
    std::cout << "abstarct amateria created"
        << std::endl;
}

AMateria::AMateria(std::string const & type) : type_(type){

    std::cout << "abstrat amateria constructed"
        << std::endl;
}

AMateria::AMateria(AMateria const& other) : type_(other.type_){

    std::cout << "abstract amateria constructed from a copy"
        << std::endl;
}

std::string const & AMateria::getType() const {

    return this->type_;
}

void AMateria::use (ICharacter& target){

    std::cout << "* shoots an ice bolt at "
        << target.getName() << std::endl; 
}
