#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

//base class
class WrongAnimal{

    protected :
        std::string type;
    public :
        WrongAnimal();
        ~WrongAnimal();
        WrongAnimal(const WrongAnimal&);
        WrongAnimal& operator=(const WrongAnimal&);
        void makeSound() const ;
        std::string getType() const ;
};

#endif