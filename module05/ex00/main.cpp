#include "Bureaucrat.hpp"


int main(){

    Bureaucrat c;
    Bureaucrat b(c);
    std::cout << b.getName() << std::endl;
}