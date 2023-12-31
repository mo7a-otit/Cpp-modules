#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){

    std::cout << "FragTrap constructor created"
        << std::endl;
    name = "Default ScavTrap";
    hitPts = 100;
    energyPts = 100;
    attDamage = 30;
}

FragTrap::FragTrap(const FragTrap& other){

    std::cout << "FragTrap Copy constructor is called"
        << std::endl;
    *this = other;
}

FragTrap::~FragTrap(){

    std::cout << "FragTrap destroctor called"
        << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other){

    std::cout << "FragTrap Copy asignment operator called"
        << std::endl ;
    name = other.name;
    hitPts = other.hitPts;
    energyPts = other.energyPts;
    attDamage = other.attDamage;
    return *this;
}

FragTrap::FragTrap (std::string name_){

    name = name_;
    hitPts = 100;
    energyPts = 100;
    attDamage = 30;
    std::cout << "FragTrap " << name << " is created "
        << std::endl;
}

void FragTrap::highFivesGuys(){

    std::cout << "Give me a high five, please!!"
        << std::endl;
}
