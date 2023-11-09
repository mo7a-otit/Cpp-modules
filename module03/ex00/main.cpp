#include "ClapTrap.hpp"

int main(){

    ClapTrap a("othmane");

    a.attack("titebah");
    a.takeDamage(5);
    a.beRepaired(5);
    a.takeDamage(20);
    a.attack("samurai");
}