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

class Cat : public Animal{

    public :
        Cat();
        ~Cat();
        Cat(const Cat&);
        Cat& operator=(const Cat&);
        void makeSound() const ;
        std::string getType() const ;
};

class Dog : public Animal{

    public :
        Dog();
        ~Dog();
        Dog(const Dog&);
        Dog& operator=(const Dog&);
        void makeSound() const ;
        std::string getType() const ;
};

#endif
