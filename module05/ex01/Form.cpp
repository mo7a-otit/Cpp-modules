#include "Form.hpp"

Form::Form() : name_("Default"), isSigned_(false) , gradeSigned_(150),
                gradeExecute_(150){
}

//copy constructor
Form::Form(const Form& other) : name_(other.getName() + "_copy")
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

//copy assignement overload
Form& Form::operator=(const Form& other){

    this->isSigned_ = other.isSigned_;
    return *this;
}

//destructor
Form::~Form(){

}

Form::Form(const std::string name, const int gradeSigned,
            const int gradeExecute) : name_(name), 
            gradeSigned_(gradeSigned), gradeExecute_(gradeExecute){
    try{
        if (this->gradeExecute_ < 1 || this->gradeSigned_ < 1)
            throw Form::GradeTooHighException();
        else if (this->gradeExecute_ > 150 || this->gradeSigned_ > 150)
            throw Form::GradeTooLowException();
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
}

const char* Form::GradeTooHighException::what()const throw(){

        return("Grade is too high");
}

const char* Form::GradeTooLowException::what()const throw(){

        return(" Grade is too low");
}

const std::string Form::getName() const{
    return this->name_;
}

bool Form::getIsSigned(){
    return this->isSigned_;
}

int Form::getGradeSigned() const{
    return this->gradeSigned_;
}

int Form::getGradeExecute() const{
    return this->gradeExecute_;
}

void Form::beSigned(Bureaucrat& bureaucrat){

        if (bureaucrat.getGrade() <= this->gradeSigned_)
            this->isSigned_ = true;
        else
            throw Form::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& o,\
    Form& form){
    
        o << form.getName() << ", form of the signed grade " 
            << form.getGradeSigned() << ", form of the executable grade "
            << form.getGradeExecute() << std::endl;
    return (o);
}



