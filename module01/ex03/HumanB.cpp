#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string _name) : name(_name)
{
}

void HumanB::setType(Weapon& weapon)
{
    this->_weapon = &weapon;
}

void HumanB::attack()
{
    std::cout<<this->name
        <<" attack with their "
        <<(*_weapon).getType()
        <<std::endl;
}