#include "Zombie.hpp"

int main()
{
    int size;

    size = 16;
    Zombie *horde = zombieHorde(size, "titebah");
    for (int i = 0; i < size; i++)
        horde[i].announce();
    delete [] horde;
}