#include "Zombie.hpp"

int main()
{
    int size;

    size = 5;
    Zombie *horde = zombieHorde(5, "othmane");
    for (int i = 0; i < size; i++)
        horde[i].announce();
    delete [] horde;
}