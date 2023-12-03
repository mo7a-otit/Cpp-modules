#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : target_("Default"),
    sign_(25), exec_(5){
    // std::cout << target_ << " has been pardoned by Zaphod Beeblebrox"
    //     << std::endl ;
}

PresidentialPardonForm::PresidentialPardonForm(const 
    PresidentialPardonForm& other) : target_(other.getName() + "_copy"),
    sign_(25), exec_(5){
        // std::cout << "PresidentialPardonForm copy constructor called"
        //     << std::endl;
        *this = other;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const
    PresidentialPardonForm& other){
        std::cout << "PresidentialPardonForm copy assignement\
            operator called" << std::endl;
    (void) other;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout << "PresidentialPardonForm destructor called"
        << std::endl;
    
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
    target_(target), sign_(25), exec_(5){
    // std::cout << this->target_ << " has been pardoned by Zaphod Beeblebrox"
    //     << std::endl ;
}

const std::string PresidentialPardonForm::getName() const{
    return this->target_;
}

int PresidentialPardonForm::getGradeSigned() const{
    return this->sign_;
}

int PresidentialPardonForm::getGradeExecute() const{
    return this->exec_;
}

void PresidentialPardonForm::execute(Bureaucrat const& executor) const{
    if (executor.getGrade() > this->getGradeExecute()){
        throw AForm::GradeTooLowException();
    }
    else
        std::cout << this->target_ 
            << " has been pardoned by Zaphod Beeblebrox" 
            << std::endl;
}

