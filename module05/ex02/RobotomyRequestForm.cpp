#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : target_("Default"),
    sign_(72), exec_(45){
    
    std::cout << "Make some drilling noises" 
        << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm&
    other) : target_(other.getName() + "_copy"), sign_(72), exec_(45){

    std::cout << "RobotomyRequestForm copy constructor called"
        << std::endl;
    *this = other;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const 
    RobotomyRequestForm& other){

    std::cout << "RobotomyRequestForm copy assignement operator called"
        << std::endl;
    if (this == &other)
        return *this;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){

    std::cout << "RobotomyRequestForm destructor called"
        << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
    target_(target), sign_(72), exec_(45){

    std::cout << "Make some drilling noises" 
        << std::endl;
}

const std::string RobotomyRequestForm::getName() const{
    return this->target_;
}

int RobotomyRequestForm::getGradeExecute() const{
    return this->exec_;
}

int RobotomyRequestForm::getGradeSigned() const{
    return this->sign_;
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const{

    if (executor.getGrade() > this->getGradeExecute()){
        throw AForm::GradeTooLowException();
    }
    else {
        static bool i = true;
        if (i == true){

            std::cout << this->target_ << " has been robotomized"
                << std::endl;
            i = false;
        }
        else{
            i = true;
            std::cout << this->target_ << " has been failed"
                << std::endl;
        }
    }
}

