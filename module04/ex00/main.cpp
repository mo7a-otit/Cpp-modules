
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


int main() {
    const Animal* meta = new Animal(); 
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl; 
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    meta->makeSound();
    j->makeSound();
    delete meta;
    delete j;
    delete i;

    std::cout << "\n******WRONG ANIMAL TEST******"
        << std::endl;
    //the wrong animal test to see the job of virual keyword
    const WrongAnimal* animal = new WrongAnimal(); 
    const WrongAnimal* cat = new WrongCat();
    std::cout << cat->getType() << " " << std::endl;
    animal->makeSound();
    cat->makeSound();

    delete animal;
    delete cat;
    return 0; 
}