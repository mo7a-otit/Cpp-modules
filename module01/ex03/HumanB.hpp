#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB{
    private:
        std::string name;
        Weapon* _weapon;
    
    public:
        HumanB(std::string name);
        void setType(Weapon& weapon);
        void attack();
};

#endif