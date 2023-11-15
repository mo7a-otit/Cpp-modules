#include "materiasource.hpp"

MateriaSource::MateriaSource(){

    std::cout << "MateriaSource was created"
        << std::endl;
    for (int i = 0; i < 4; i++){
        this->inventory[i] = 0;
    }
}

MateriaSource::MateriaSource(const MateriaSource& other){

    for (int i = 0; i < 4; i++){
        if (other.inventory[i])
            this->inventory[i] = (other.inventory[i])->clone();
    }
    std::cout << "MateriaSource was created from a copy"
        << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other){

    for (int i = 0; i < 4; i++){
        if (this->inventory[i])
            delete this->inventory[i];
        if (other.inventory[i])
            this->inventory[i] = (other.inventory[i])->clone();
    }
    return *this;

}

MateriaSource::~MateriaSource(){
    for (int i = 0; i < 4; i++){
        if (this->inventory[i])
            delete this->inventory[i];
    }
    std::cout << "MateriaSource was destroyed"
        << std::endl;
}

void MateriaSource::learnMateria(AMateria* m){

    int i = 0;
    while (this->inventory[i] != 0 && i < 4)
        i++;
    if (i >= 4){
        std::cout << "cant learn more than 4 materia"
            << std::endl;
        return;
    }
    this->inventory[i] = m;
    std::cout << "Materia " << m->getType() << " learned"
        << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type){

    int i = 0;
    while (this->inventory[i] && (this->inventory[i])->getType() != type)
        i++;
    if (i >= 4 && !(this->inventory[i])){
        std::cout << type << "materia does not exist !"
            << std::endl;
        return 0;
    }
    std::cout << "Materia " << type << " created"
        << std::endl;
    return ((this->inventory[i])->clone());
}


