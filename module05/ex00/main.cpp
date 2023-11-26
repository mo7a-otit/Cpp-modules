#include "Bureaucrat.hpp"


int main(){

    Bureaucrat a;
    // Bureaucrat b(c);
    // std::cout << b.getName() << std::endl;
    Bureaucrat c(a);
    std::cout << c.getGrade() << std::endl;
    std::cout << c.getName() << std::endl;
    c.decrementGrade();
    c.incrementGrade();
    std::cout << c.getGrade() << std::endl;
    // try{
    //     std::cout << a << std::endl;
    // }
}