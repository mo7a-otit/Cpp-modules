#include "Bureaucrat.hpp"
using namespace std;

int main(){
    Bureaucrat a("othmane", 12);
    Bureaucrat c(a);
    std::cout << a;
    std::cout << c.getGrade() << std::endl;
    std::cout << c.getName() << std::endl;
    c.incrementGrade();
	cout << a.getGrade() << endl;
    std::cout << c.getGrade() << std::endl;
}
