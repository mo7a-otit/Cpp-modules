#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
    
    public :
    //constructors
        ScavTrap();
        ~ScavTrap();
        ScavTrap(const ScavTrap&);
        ScavTrap(std::string);

    //copy assignment overload
        ScavTrap& operator=(const ScavTrap&);

        // ~ScavTrap() {
       void attack(const std::string&);
        // }
        // ScavTrap(const ScavTrap&);
        // ScavTrap& operator=(const ScavTrap&);
        void guardGate();
        
};


#endif