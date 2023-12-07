#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>


class Bureaucrat{

    private :
        const std::string name;
        int grade;
    
    public :

        Bureaucrat();
        Bureaucrat(const Bureaucrat& other);
        Bureaucrat& operator=(const Bureaucrat& other);
        ~Bureaucrat();
        
        Bureaucrat(std::string name_, int grade_);
        //getters
        const std::string getName() const;
        int getGrade() const;

        void incrementGrade();
        void decrementGrade();

        class GradeTooHighException : public std::exception{
            public :
                virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception{
            public :
                virtual const char *what() const throw();
        };

};
std::ostream& operator<<(std::ostream& o,\
    Bureaucrat& bureaucrat);


#endif