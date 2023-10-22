#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie{
    private :
        std::string name;
    public :
        void    announce(void);
        void    SetName(std::string name);
        Zombie();
        ~Zombie();
};
Zombie*    zombieHorde(int N, std::string name);

#endif