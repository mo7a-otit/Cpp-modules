#include "ClapTrap.hpp"

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
}