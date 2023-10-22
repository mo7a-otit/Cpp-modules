#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
    {
        Weapon  club = Weapon("sla7");
        HumanA bob("othmane", club);
        bob.attack();
        club.setType("scar");
        bob.attack();
    } 
    {
        Weapon  club = Weapon("AK");
        HumanB jim("titebah");
        jim.setType(&club);
        jim.attack();
        club.setType("shootgun");
        jim.attack();
    }
return 0; 
}