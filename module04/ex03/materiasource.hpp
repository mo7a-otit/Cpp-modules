#ifndef MATERIA_HPP
#define MATERIA_HPP

#include "imateriasource.hpp"

class MateriaSource : public IMateriaSource{

    private :
        AMateria *(inventory[4]);
    public :
        MateriaSource();
        MateriaSource(const MateriaSource& other);
        MateriaSource& operator=(const MateriaSource& other);
        ~MateriaSource();

        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);

};


#endif