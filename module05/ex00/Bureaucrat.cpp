#include "Bureaucrat.hpp"

//default constroctor
Bureaucrat::Bureaucrat() : name("default"), grade(150){

    std::cout << "Default constructor called for " << this->getName()
        << " with grade " << this->getGrade() << std::endl;
}

//copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.getName() + "_copy"){

    std::cout << "Copy constructor called to copy " << other.getName() 
       << " into " << this->getName() << std::endl; 
    *this = other;
}

//copy assignement operator
 Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other){

    std::cout << "Copy assignement operator called" 
        << std::endl;
    if (this == &other)
        return *this;
    this->grade = other.getGrade();
    return *this;
}

Bureaucrat::~Bureaucrat(){

    std::cout << "Destructor called for " << this->getName() 
        << std::endl;
}

Bureaucrat::Bureaucrat(std::string name_, int grade_) : name(name_), grade(grade_) {

    std::cout << "Constructor Bureaucrat is called"
        << std::endl;
    setGrade(grade);
}

Bureaucrat::Bureaucrat(const std::string name_) : name(name_), grade(150){

    std::cout << "Constructor called for " << this->getName() << " with grade of "
        << this->getGrade();
}

Bureaucrat::Bureaucrat(int grade_) : name("default"){

    std::cout << "Constructor called for " << this->name << "with a grade of "
        << grade << std::endl;
    setGrade(grade);
}
const std::string Bureaucrat::getName() const {

    return this->name;
}

int Bureaucrat::getGrade() const {

    return this->grade;
}

void Bureaucrat::setGrade(int grade_){
    
    if (this->grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (this->grade < 0)
        throw Bureaucrat::GradeTooHighException();
    else
        this->grade = grade_;    
}

void Bureaucrat::incrementGrade(){

    std::cout << "Trying to increment grade of " << this->getName()
        << std::endl;
    this->setGrade(this->grade--);
}

void Bureaucrat::decrementGrade(){

    std::cout << "Trying to decrement the grade of " << this->getName()
        << std::endl;
    this->setGrade(this->grade++);
}

Bureaucrat::GradeTooHighException(){

        return("Grade is too high");
}

// int Bureaucrat::GradeTooLowException(){

//     if (this->grade > 150)
//         throw("Grade is too low");
//     else
//         return grade;
// }


// std::ostream& Bureaucrat::operator<<(std::ostream& o, Bureaucrat const &beraucrat){


// }


