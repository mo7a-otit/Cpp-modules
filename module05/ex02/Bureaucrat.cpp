#include "AForm.hpp"

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
    try{

        if (this->grade < 1)
            throw Bureaucrat::GradeTooHighException();
        else if (this->grade > 150)
            throw Bureaucrat::GradeTooLowException();
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
}

const std::string Bureaucrat::getName() const {
    return this->name;
}

int Bureaucrat::getGrade() const {
    return this->grade;
}

void Bureaucrat::incrementGrade(){
    std::cout << "Trying to increment grade of " << this->getName()
        << std::endl;
    try{
        if (this->grade - 1 < 1)
            throw Bureaucrat::GradeTooHighException();
        else if(this->grade - 1 > 150)
            throw Bureaucrat::GradeTooLowException();
        else
            this->grade--;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
}

void Bureaucrat::decrementGrade(){

    std::cout << "Trying to decrement the grade of " << this->getName()
        << std::endl;
    try{
        if (this->grade + 1 > 150)
            throw Bureaucrat::GradeTooLowException();
        else if (this->grade - 1 < 1)
            throw Bureaucrat::GradeTooHighException();
        else
            this->grade++;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
}

const char* Bureaucrat::GradeTooHighException::what()const throw(){
        return("Grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what()const throw(){
        return(" Grade is too low");
}


std::ostream& operator<<(std::ostream& o, Bureaucrat&  bureaucrat){

    o << bureaucrat.getName() << ", bureaucrat grade "
        << bureaucrat.getGrade() << std::endl;
    return (o);
}

void Bureaucrat::signForm(AForm& form){
    
    try{
        form.beSigned(this);
        std::cout << this->getName() << " signed " << form.getName()
            << std::endl;
    }
    catch(std::exception &e){

        std::cout << this->name << " couldn't sign " << form.getName()
            << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const & form) const{

    try{
        form.execute(*this);
        std::cout << this->getName() << " executed "
            << form.getName() << std::endl;
    }
    catch(std::exception &e){
        std::cout << this->getName() << " couldn't execute " 
            << form.getName() << " because " << e.what()
            << std::endl;
    }
}

