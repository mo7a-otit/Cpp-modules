#include "character.hpp"

Character::Character() : name("DEFAULT"){

    std::cout << "A character named " << this->name
        << "is created" << std::endl;
    for (int i = 0; i < 4; i++){
        this->inventory[i] = 0;
    }
    for (int i = 0; i < 4; i++){
        this->inventory[i] = 0;
    }
}

Character::Character(const Character& other) : ICharacter(){

    this->name = other.getName() + "_copy";
    for (int i = 0; i < 4; i++){
        if (other.inventory[i])
             (other.inventory[i])->clone();
    }
    std::cout << "A copy character named " << name 
        << " was created" << std::endl;
}

Character& Character::operator=(const Character& other){

    for (int i = 0; i < 4; i++){
        if(this->inventory[i])
            delete (this->inventory)[i];
        if (other.inventory[i])
            (other.inventory[i])->clone();
    }
    return *this;
}

Character::~Character(){
    
    for (int i = 0; i < 4; i++){
        delete this->inventory[i];
    }
    std::cout << "Character named " << name
        << " was destroyed" << std::endl;
}

Character::Character( std::string name_) : name(name_){

    std::cout << "A character named " << this->name
        << "is created" << std::endl;
    for (int i = 0; i < 4; i++){
        this->inventory[i] = 0;
    }
    for (int i = 0; i < 4; i++){
        this->tmp_inventory[i] = 0;
    }
}

std::string const& Character::getName()const{

    return this->name;
}

void Character::equip(AMateria *m){

    if (!m){
        
        std::cout << this->name << " tried to equip but nothing \
            happened" << std::endl;
    }
    int i = 0;
    while(this->inventory[i] != 0 && i < 4)
        i++;
    if (i >= 4){
        std::cout << "Materia can't equip more than 4"
            << std::endl;
        return ;
    }
    this->inventory[i] = m;
    std::cout << this->name << " equiped Materia " << m->getType()
        << " in slot " << i << std::endl; 
    
}

void Character::unequip(int idx){

    if (idx < 0 || idx >= 4){
        std::cout << "index not found"
            << std::endl;
    }
    else if (this->inventory[idx]){
        this->tmp_inventory[idx] = inventory[idx];
        this->inventory[idx] = 0;
        std::cout << this->name << " is unequiped at slot "
            << idx << std::endl;
        delete tmp_inventory[idx];
    }
    else
        std::cout << this->name << " has nothing in slot "
            << idx << ", So he can't be unequip";
}

void Character::use (int idx, ICharacter& target){

    if (idx < 0 || idx >= 4 || !this->inventory[idx]){
        std::cout << "Nothing found to use at this index "
            << idx << std::endl;
        return;
    }
    this->inventory[idx]->use(target);
}
