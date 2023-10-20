#include "Zombie.hpp"

int main()
{
    Zombie *obj = newZombie("Othmane");
    obj->announce();
    randomChump("Titebah");
    delete obj;
}