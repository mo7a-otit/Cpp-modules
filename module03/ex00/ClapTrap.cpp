#include <ClapTrap.hpp>

//default constructor
ClapTrap::ClapTrap() : name("default"), hitPts(10), 
            energyPts(10),  attDamage(0){
    
    std::cout << "ClapTrap Constructor Called" << std::endl;
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

//destructor
ClapTrap::~ClapTrap(){

    std::cout << "Destructor called" 
        <<  std::endl;
}

//copy assignement overload
ClapTrap& ClapTrap::operator=(const ClapTrap& other){

    std::cout << "ClapTrap Copy constructor called"
        << std::endl ;
    name = other.name;
    hitPts = other.hitPts;
    energyPts = other.energyPts;
    attDamage = other.attDamage;
    return *this;
}

void ClapTrap::attack(const std::string& target){

    if (hitPts > 0 && energyPts > 0){
        std::cout << 
    }
}

