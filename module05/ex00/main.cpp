#include "Bureaucrat.hpp"


int main(){

    Bureaucrat a;
    Bureaucrat b (a);
    std::cout << b.getName() << std::endl;
}