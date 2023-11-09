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

        // member functions
        void attack(const std::string&);
        void guardGate();
        
};


#endif