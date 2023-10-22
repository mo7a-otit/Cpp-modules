#include "Zombie.hpp"

int main()
{
    Zombie *test = zombieHorde(3, "Othmane");
    for (int i = 0; i < 3; i++)
        test[i].announce();
    delete []test;
}