#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name_, int grade_) : name(name_), grade(grade_) {

    std::cout << "Constructor Bureaucrat is called"
        << std::endl;
    setGrade(grade);
}

std::string Bureaucrat::getName(){

    return this->name;
}

int Bureaucrat::getGrade(){

    return this->grade;
}

void Bureaucrat::setGrade(int grade_){
    
    try{
        GradeTooHighException();
        // GradeTooLowException();
        std::cout << GradeTooHighException << std::endl;
    }
    catch(const char *msg){
        std::cerr << msg << std::endl; 
    }
}

void Bureaucrat::incrementGrade(){
    if (this->grade > 0){
        this->grade--;
    }
}

void Bureaucrat::decrementGrade(){
    if (this->grade < 150){
        this->grade++;
    }
}

int Bureaucrat::GradeTooHighException(){
        throw("Grade is too high");
}

int Bureaucrat::GradeTooLowException(){

    if (this->grade > 150)
        throw("Grade is too low");
    else
        return grade;
}


std::ostream& Bureaucrat::operator<<(std::ostream& o, Bureaucrat const &beraucrat){


}


