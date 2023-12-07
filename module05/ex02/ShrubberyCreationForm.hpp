#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>
class ShrubberyCreationForm : public AForm{

    private :
        const std::string target_;
        const int sign_;
        const int exec_;
    public :
        ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm& other);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm&
             other);
        ~ShrubberyCreationForm();

        ShrubberyCreationForm(std::string target);

        const std::string getName() const;
        int getGradeSigned() const;
        int getGradeExecute() const;

        class notSigned : public std::exception {
            public :
                virtual const char *what() const throw(); 
        };

        void execute(Bureaucrat const& executor) const;
};

#endif