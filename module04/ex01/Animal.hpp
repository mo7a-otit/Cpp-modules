#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

//base class
class Animal{

    protected :
        std::string type;
        Animal();
    public :
        virtual ~Animal();
        Animal(const Animal&);
        Animal& operator=(const Animal&);
        virtual void makeSound() const = 0;
        virtual std::string getType() const = 0;
};

#endif
