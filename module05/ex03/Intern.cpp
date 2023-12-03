#include "Intern.hpp"


Intern::Intern(){
    std::cout << "Intern constructor called"
        << std::endl;
}

Intern::Intern(const Intern& other){
    *this = other;
}

Intern& Intern::operator=(const Intern& other){
    (void) other;
    return *this;
}

Intern::~Intern(){
    std::cout << "Intern destructor called"
        << std::endl;
}

AForm* Intern::makeForm(std::string name, std::string target){
    std::string formNames[] = {"RobotomyRequestForm",
                                "PresidentialPardonForm",
                                "ShrubberyCreationForm"};
    AForm* forms[] = {new RobotomyRequestForm(target),
                        new PresidentialPardonForm(target),
                        new ShrubberyCreationForm(target)}; 
    for(int i(0); i<3; i++){
        if(name == formNames[i]){
            std::cout << "Intern creates " << name
                << std::endl;
            return(forms[i]);
        }
    }
    std::cout << "Intern cannot create " << name
        << " form" << std::endl;
    return (nullptr);
}

