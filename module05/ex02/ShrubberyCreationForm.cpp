#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : target_("Default_shrubbery"),
    sign_(145), exec_(137){

        std::cout << "Shrubbery constructor is called"
            << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
    : target_(other.getName() + "_copy"), sign_(other.getGradeSigned()), 
    exec_(other.getGradeExecute()){

    *this = other;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    (void)other;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){

    std::cout << "Shrubbery destructor called" 
        << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : target_(target), 
    sign_(145), exec_(137){

}

const std::string ShrubberyCreationForm::getName() const{
    return this->target_;
}

int ShrubberyCreationForm::getGradeExecute() const{
    return this->exec_;
}

const char* ShrubberyCreationForm::notSigned::what()const throw(){
    return ("Form not signed");
}

int ShrubberyCreationForm::getGradeSigned() const{
    return this->sign_;
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const{
    if (this->getIsSigned() == false)
        throw ShrubberyCreationForm::notSigned();
    else if (executor.getGrade() > this->getGradeExecute())
        throw AForm::GradeTooLowException();
    
    std::ofstream myFile(this->getName() + "_shrubbery");
    if (myFile.is_open()){
        myFile << "      *\n";
        myFile << "     ***\n";
        myFile << "    *****\n";
        myFile << "   *******\n";
        myFile << "  *********\n";
        myFile << " ***********\n";
        myFile << "*************\n";
        myFile << "     |||\n";
        myFile << "     |||\n";
        myFile << "     |||\n";
        myFile << "--------------\n";
    }
}
