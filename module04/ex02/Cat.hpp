#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
#include "Brain.hpp"


class Cat : public Animal, public Brain{

    private :
        Brain *cat;
    public :
        Cat();
        Cat(const Cat&);
        Cat& operator=(const Cat&);
        ~Cat();
        void makeSound() const ;
        std::string getType() const ;
};



#endif