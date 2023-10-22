#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string _name) : name(_name)
{
}

void HumanB::setType(Weapon* weapon)
{
    this->_weapon = NULL;
    this->_weapon = weapon;
}

void HumanB::attack()
{
    if (this->_weapon == NULL){
        std::cout << "HumanB does not have a weapon!! "
            << std::endl;
        return;
    }
    std::cout<<this->name
        <<" attack with their "
        <<(*_weapon).getType()
        <<std::endl;
}