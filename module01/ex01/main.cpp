#include "Zombie.hpp"

int main()
{
    Zombie *test = zombieHorde(4, "Othmane");
    for (int i = 0; i < 4; i++)
        test[i].announce();
    delete []test;
}