#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int main( void ){

    Intern  someRandomIntern;
    AForm*   rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    delete rrf;
    try{
        Bureaucrat bureaucrat("othmane", 2);
        ShrubberyCreationForm shrubbery("SHRUBBERY");
        RobotomyRequestForm robot("robot");
        PresidentialPardonForm president("president");


        std::cout << "---------{SHRUBERRY}---------"
            << std::endl;
        bureaucrat.signForm(shrubbery);
        bureaucrat.executeForm(shrubbery);

        std::cout << std::endl << "---------{ROBOT}---------"
            << std::endl;
        bureaucrat.executeForm(robot);
        bureaucrat.executeForm(robot);
        bureaucrat.executeForm(robot);
        bureaucrat.executeForm(robot);
        std::cout << std::endl << "---------{PRESIDENT}---------"
            << std::endl;
        bureaucrat.executeForm(president);
        std::cout << std::endl;

    }
    catch(std::exception &e){
        std::cout << "HELLO " << e.what()
            << std::endl;
    }

    
}