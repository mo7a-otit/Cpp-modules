#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name_, int grade_) : name(name_), grade(grade_) {

    std::cout << "Constructor Bureaucrat is called"
        << std::endl;
}

std::string Bureaucrat::getName(){

    return this->name;
}

int Bureaucrat::getGrade(){

    return this->grade;
}

void Bureaucrat::incrementGrade(){
    if (this->grade > 0)
        this->grade--;
    else
        std::cout << ""
}

int Bureaucrat::GradeTooHighException{


}

int Bureaucrat::GradeTooLowException{

    
}


std::ostream& Bureaucrat::operator<<(std::ostream& o, Bureaucrat const &beraucrat){


}


