#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon& weapon) : type(weapon)
{
    name = _name;
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
    std::cout<<this->name
        <<" attacks with their "
        <<this->type.getType()
        <<std::endl;
}
