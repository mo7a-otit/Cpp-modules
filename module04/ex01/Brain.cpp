#include "Brain.hpp"
#include "Dog.hpp"

Brain::Brain(){

    std::cout << "Brain constructor called"
        << std::endl;
}

Brain::Brain(const Brain& other){

    std::cout << "Copy constructor Brain called"
        << std::endl;
    *this = other;
}

Brain& Brain::operator=(const Brain& other){

    std::cout << "copy asignement overload Brain called"
        << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = other.ideas[i];
    return *this;
}

Brain::~Brain(){

    std::cout << "Brain Destructor called"
        << std::endl;
}