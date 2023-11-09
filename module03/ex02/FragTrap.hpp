#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap{

    public :
        FragTrap();
        FragTrap( std::string );
        FragTrap(const FragTrap&);
        ~FragTrap();
        FragTrap& operator=(const FragTrap&);
        void highFivesGuys(void);
};


#endif
