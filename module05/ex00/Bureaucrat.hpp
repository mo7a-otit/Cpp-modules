#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>


class Bureaucrat : public std::exception{

    private :
        const std::string name;
        int grade;
    
    public :

        Bureaucrat(std::string name_, int grade_);
        std::string getName();
        int getGrade();

        void setGrade(int grade_);
        void incrementGrade();
        void decrementGrade();
        int GradeTooHighException();
        int GradeTooLowException();

};
std::ostream& operator<<(std::ostream& o, Bureaucrat const &beraucrat);



#endif