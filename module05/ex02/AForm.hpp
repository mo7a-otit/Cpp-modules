#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"

class AForm{
    private :
        const std::string name_;
        bool isSigned_;
        const int gradeSigned_;
        const int gradeExecute_;
    public :
        AForm();
        AForm(const AForm& other);
        AForm& operator=(const AForm& other);
        virtual ~AForm();

        class GradeTooHighException : public std::exception{
            public :
                virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception{
            public :
                virtual const char *what() const throw();
        };
        //getters
        virtual const std::string getName() const;
        bool getIsSigned() const;
        virtual int getGradeSigned() const;
        virtual int getGradeExecute() const;
        void beSigned(Bureaucrat *bureaucrat);

        virtual void execute(Bureaucrat const& executor) const = 0;
};
std::ostream& operator<<(std::ostream& o,\
    AForm& bureaucrat);
#endif