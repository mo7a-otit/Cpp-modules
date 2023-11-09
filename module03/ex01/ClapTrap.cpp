#include "ClapTrap.hpp"

//default constructor
ClapTrap::ClapTrap() : name("default"), hitPts(10), 
            energyPts(10),  attDamage(0){
    
    std::cout << "ClapTrap Constructor Called" << std::endl;
}

///Destructor
ClapTrap::~ClapTrap(){

    std::cout << "ClapTrap Destructor called"
        <<std::endl;
}

//constructor with parameters
ClapTrap::ClapTrap(std::string name_) : name(name_), hitPts(10), 
            energyPts(10),  attDamage(0){

    std::cout << "ClapTrap constructor " << name << " is called"
        << std::endl;
}

//copy constructor
ClapTrap::ClapTrap(const ClapTrap &other){

    std::cout << "ClapTrap Copy constructor called" 
        << std::endl;
    *this = other;
}

//copy assignement overload
ClapTrap& ClapTrap::operator=(const ClapTrap& other){

    std::cout << "ClapTrap Copy asignment operator called"
        << std::endl ;
    name = other.name;
    hitPts = other.hitPts;
    energyPts = other.energyPts;
    attDamage = other.attDamage;
    return *this;
}

//member functions
void ClapTrap::attack(const std::string& target){

        energyPts--; 
    if (hitPts > 0 && energyPts > 0){
        std::cout << "ClapTrap " << name << " attacks "
            << target << ", causing " << attDamage
            << " points of damage!" << std::endl;
    }
    else
       std::cout << "ClapTrap " << name 
            << " can't attack!" << std::endl; 
}

void ClapTrap::beRepaired(unsigned int amount){

    if (hitPts > 0 && energyPts > 0){
        
        energyPts--;
        hitPts += amount;
        std::cout << "ClapTrap " << name << " repairs its self "
            << "and get " << amount << " hits points back, he now has "
            << hitPts << " hitPts!" << std::endl;
    }
    else 
        std::cout << "ClapTrap " << name << " can't repair itself"
            << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){

    if (hitPts >= amount)
        hitPts = hitPts - amount;
    else if (amount > hitPts){
        hitPts = 0;
        std::cout << "Claptrap " << name << " is already dead"
            <<std::endl;
        return;
    }
    std::cout << "ClapTrap " << name << " was attacked, and lost "
        << amount << " hitPoints" << " he now has " << hitPts
        << " hitPts!" << std::endl;
}


