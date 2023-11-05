#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(){

    ClapTrap a("othmane");
    ClapTrap b(a);

    a.attack("titebah");
    a.takeDamage(5);
    a.beRepaired(5);
    a.takeDamage(20);
    a.attack("samurai");
    for (int i = 0; i < 12; i++)
        b.attack("TITEBAH");
    std::cout << "claptrap " << b << " has " 
        << b.getEnergyPts() << " energy points" << std::endl;
    ScavTrap c("rehmani");
    ScavTrap d (c);
    c.attack("sisco");
    c.takeDamage(30);
    c.beRepaired(20);
    c.takeDamage(90);
    c.guardGate();
    c.attack("other");

}