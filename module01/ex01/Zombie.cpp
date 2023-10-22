#include "Zombie.hpp"


void Zombie::SetName(std::string name)
{
    this->name = name;
}

void Zombie::announce(void)
{
    std::cout<<"Zombie "<<this->name<<" was created\n";
}

Zombie::~Zombie(){

    std::cout << "Zombie " << this->name 
        << " was destroyed" << std::endl;
}

Zombie::Zombie(){
    
}