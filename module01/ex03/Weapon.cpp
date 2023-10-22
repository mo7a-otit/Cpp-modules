#include "Weapon.hpp"
#include "HumanA.hpp"

void Weapon::setType(std::string _type)
{
    this->type = _type;
}

const std::string& Weapon::getType(void)
{
    return type;
}

Weapon::Weapon(std::string _type)
{
    type = _type;
}