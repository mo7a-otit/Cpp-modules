#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm{
    private :
        const std::string target_;
        const int sign_;
        const int exec_;
    public :
        PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm& other);
        PresidentialPardonForm& operator=(const PresidentialPardonForm&
            other);
        ~PresidentialPardonForm();
    
        PresidentialPardonForm(std::string target);

        const std::string getName() const;
        int getGradeSigned() const;
        int getGradeExecute() const;

        void execute(Bureaucrat const& executor) const;
};

#endif