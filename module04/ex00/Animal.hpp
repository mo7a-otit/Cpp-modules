#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

//base class
class Animal{

    protected :
        std::string type;
    public :
        Animal();
        virtual ~Animal();
        Animal(const Animal&);
        Animal& operator=(const Animal&);
        virtual void makeSound() const ;
        virtual std::string getType() const ;
};

#endif
