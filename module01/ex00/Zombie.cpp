#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout<<"Zombie "<<this->name<<" created\n";
}

Zombie::~Zombie()
{
    std::cout<<"Zombie "<<this->name<<" was destroyed\n";
}

void    Zombie::announce(void)
{
    std::cout<<this->name<<" : BraiiiiiiinnnzzzZ...\n";
}