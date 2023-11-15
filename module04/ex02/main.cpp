
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


int main() {
    // const Animal* meta = new Animal(); 
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    // delete meta;
    i->makeSound();
    j->makeSound();
    delete j;
    delete i;
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "*****Proof to deep copy*****"
        << std::endl;
    Dog bobiz;
    Cat eva;
    Dog bobiz_ref = bobiz;
    Cat eva_ref(eva);
    std::cout << "Comparing Cats addresses :" << std::endl;
    std::cout << "  " << &eva_ref << std::endl;
    std::cout << "  " << &eva << std::endl;
    std::cout << "Comparing Dogs addresses :" << std::endl;
    std::cout <<  "  " << &bobiz_ref << std::endl;
    std::cout <<  "  " << &bobiz << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;


    std::cout << "******FILL THE ARRAY******"
        << std::endl;
    const Animal *arr[4];
    for (int i = 0; i < 2; i++)
        arr[i] = new Dog();
    for (int i = 2; i < 4; i++)
        arr[i] = new Cat();
    for (int i = 0; i < 4; i++)
        delete arr[i];
    
    return 0; 
}