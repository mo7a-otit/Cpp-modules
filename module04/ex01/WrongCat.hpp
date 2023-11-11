#ifndef WrongCAT_HPP
# define WrongCAT_HPP

# include "WrongAnimal.hpp"


class WrongCat : public WrongAnimal{

    public :
        WrongCat();
        ~WrongCat();
        WrongCat(const WrongCat&);
        WrongCat& operator=(const WrongCat&);
        void makeSound() const ;
        std::string getType() const ;
};



#endif