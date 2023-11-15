#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
#include "icharacter.hpp"

class AMateria
{
    protected:
        std::string type_;
    public:
        AMateria();
        AMateria(AMateria const& other);

        virtual ~AMateria();
        AMateria(std::string const & type);
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};


#endif
