#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form{
    private :
        const std::string name_;
        bool isSigned_;
        const int gradeSigned_;
        const int gradeExecute_;
    public :
        Form();
        Form(const Form& other);
        Form& operator=(const Form& other);
        ~Form();

        Form(const std::string name, const int gradeSigned,
                const int gradeExecute);

        class GradeTooHighException : public std::exception{
            public :
                virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception{
            public :
                virtual const char *what() const throw();
        };

        //getters
        const std::string getName() const;
        bool getIsSigned();
        int getGradeSigned() const;
        int getGradeExecute() const;
        void beSigned(Bureaucrat *bureaucrat);
};
std::ostream& operator<<(std::ostream& o,\
    Form& bureaucrat);
#endif