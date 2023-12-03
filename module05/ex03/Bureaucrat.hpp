#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>


class AForm;
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
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();

        //added in this exercice
        void signForm(AForm& form);
        class GradeSigned : public std::exception{
            public :
                virtual const char *what() const throw();
        };

        void executeForm(AForm const & form) const;

};
std::ostream& operator<<(std::ostream& o,\
    Bureaucrat& bureaucrat);



#endif