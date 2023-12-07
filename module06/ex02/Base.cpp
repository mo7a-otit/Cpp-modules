#include "Base.hpp"

Base::~Base(){
}

Base* generate(void){
    std::srand(time(NULL));
    int random = std::rand() % 3;

    switch (random)
    {
        case 0:
            return new A();
        case 1:
            return new B();
        case 2:
            return new C();
        default :
            return NULL;
    }
    return NULL;
}

void identify(Base* p){
    if (dynamic_cast<A*>(p)){
        std::cout << "A is the actual type "
            << std::endl;
    }
    else if (dynamic_cast<B*>(p)){
        std::cout << "B is the actual type"
            << std::endl;
    }
    else if (dynamic_cast<C*>(p)){
        std::cout << "C is the actual type"
            << std::endl;
    }
    else
        std::cout << "Unknown type" << std::endl;
}

void identify(Base& p){
    try{
        p = dynamic_cast<A&>(p);
        std::cout <<"A" << std::endl;
    }
    catch(std::exception &e){
    }

    try{
        p = dynamic_cast<B&>(p);
        std::cout <<"B" << std::endl;
    }
    catch(std::exception &e){
    }

    try{
        p = dynamic_cast<C&>(p);
        std::cout <<"C" << std::endl;
    }
    catch(std::exception &e){
    }
}

int main(){

    Base *a =  generate();
    
    std::cout << "POINTERS" << std::endl;
    identify(a);
    std::cout << std::endl;

    std::cout << "REFERENCE" << std::endl;
    identify(*a);
    delete a;
}

