#include "AForm.hpp"

AForm::AForm() : name_("Default"), isSigned_(false) , gradeSigned_(150),
                gradeExecute_(150){
}

// copy constructor
AForm::AForm(const AForm& other) : name_(other.getName() + "_copy")
            , isSigned_(false)
            , gradeSigned_(other.getGradeSigned())
            , gradeExecute_(other.getGradeExecute()){
    try{

        if (this->gradeExecute_ < 1 || this->gradeSigned_ < 1)
            throw Bureaucrat::GradeTooHighException();
        else if (this->gradeExecute_ > 150 || this->gradeSigned_ > 150)
            throw Bureaucrat::GradeTooLowException();
    }
    catch(std::exception &e){

        std::cout << e.what() << std::endl;
    }
    *this = other;
}

// //copy assignement overload
AForm& AForm::operator=(const AForm& other){
;
    this->isSigned_ = other.isSigned_;
    return *this;
}

//destructor
AForm::~AForm(){

}

const char* AForm::GradeTooHighException::what()const throw(){

        return("Grade is too high");
}

const char* AForm::GradeTooLowException::what()const throw(){

        return(" Grade is too low");
}

const std::string AForm::getName() const{
    return this->name_;
}

bool AForm::getIsSigned() const{
    return this->isSigned_;
}

int AForm::getGradeSigned() const{
    return this->gradeSigned_;
}

int AForm::getGradeExecute() const{
    return this->gradeExecute_;
}

void AForm::beSigned(Bureaucrat *bureaucrat) {

        if (bureaucrat->getGrade() <= this->gradeSigned_)
            isSigned_ = true;
        else
            throw AForm::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& o,\
    AForm& form){
    
        o << form.getName() << ", form of the signed grade " 
            << form.getGradeSigned() << ", form of the executable grade "
            << form.getGradeExecute() << std::endl;
    return (o);
}



