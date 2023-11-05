#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

# include <iostream>
# include <string>


class ClapTrap{

    protected :
        std::string name;
        unsigned int hitPts;
        unsigned int energyPts ;
        unsigned int attDamage;

    public :
    //constructors
        ClapTrap();
        ClapTrap ( std::string );
        ClapTrap(const ClapTrap&);

    //destructor
        ~ClapTrap();

    //copy assignment overload
        ClapTrap& operator=(const ClapTrap&);

    //public member functions
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
    
    //getter and setter
        int getEnergyPts ();
        int getHitPts ();
        std::string getName () const;
};
std::ostream& operator<<(std::ostream&, const ClapTrap&);


#endif