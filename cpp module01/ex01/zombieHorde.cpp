#include "Zombie.hpp"

    Zombie*    zombieHorde( int N, std::string name )
    {
        int i;
        Zombie *horde = new Zombie[N];
        for (i = 0; i < N; i++)
            horde[i].SetName(name);
        return (horde);
    }