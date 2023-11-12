#ifndef ICE_HPP
# define ICE_HPP

#include "amateria.hpp"


class Ice : public AMateria{

    public :
        Ice();
        Ice(const Ice& other);
        Ice& operator=(const Ice& other);
        ~Ice();

        AMateria* clone() const;
        void use(ICharacter& target);

};


#endif