#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(){

    ClapTrap a("othmane");

    a.attack("titebah");
    a.takeDamage(5);
    a.beRepaired(5);
    a.takeDamage(20);
    a.attack("samurai");
    
    ScavTrap c("rehmani");
    c.attack("sisco");
    c.takeDamage(30);
    c.beRepaired(20);
    c.takeDamage(90);
    c.guardGate();
    c.attack("other");

    FragTrap g("LOFY");
    g.attack("SIMO");
    g.takeDamage(120);
    g.beRepaired(100);
    g.highFivesGuys();

}