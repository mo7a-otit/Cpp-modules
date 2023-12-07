#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP


#include "AForm.hpp"
#include <ctime>
#include <cstdlib>


class RobotomyRequestForm : public AForm{
    private :
        const std::string target_;
        const int sign_;
        const int exec_;
    public :
        RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm& other);
        RobotomyRequestForm& operator=(const RobotomyRequestForm& 
            other);
        ~RobotomyRequestForm();

        RobotomyRequestForm(std::string target);

        const std::string getName() const;
        int getGradeSigned() const;
        int getGradeExecute() const;

        void execute(Bureaucrat const& executor) const;
};



#endif