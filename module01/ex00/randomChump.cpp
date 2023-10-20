#include "Zombie.hpp"

void randomChump( std::string name )
{
    Zombie obj = Zombie(name);
    obj.announce();
}