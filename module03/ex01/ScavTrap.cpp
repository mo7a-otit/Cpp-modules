#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
    std::cout << "ScavTrap constroctor is called"
        << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other){

    std::cout << "ScavTrap copy constructor called"
        << std::endl;
    *this = other;
}

ScavTrap::~ScavTrap(){

    std::cout << "ScavTrap destroctor called"
        << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other){

    std::cout << "ScavTrap Copy asignment operator called"
        << std::endl ;
    name = other.name;
    hitPts = other.hitPts;
    energyPts = other.energyPts;
    attDamage = other.attDamage;
    return *this;
}

ScavTrap::ScavTrap(std::string name_){

    std::cout << "ScavTrap " << name_ << " is created"
        << std::endl;
    name = name_;
    hitPts = 100;
    energyPts = 50;
    attDamage = 20;
}

void ScavTrap::attack(const std::string& target){

    energyPts--; 
    if (hitPts > 0 && energyPts > 0){
        std::cout << "ScravTrap " << name << " attacks "
            << target << ", causing " << attDamage
            << " points of damage!" << std::endl;
    }
    else
       std::cout << "ScravTrap " << name 
            << " can't attack!" << std::endl; 

}
void ScavTrap::guardGate(){

    std::cout << "ScavTrap " << name << " is now in gate keeper mode"
        << std::endl;
}



