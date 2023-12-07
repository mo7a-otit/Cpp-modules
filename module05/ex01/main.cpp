#include "Bureaucrat.hpp"
#include "Form.hpp"


int main( void )
{

    try {
        Bureaucrat bureaucrat("OTHMANE",14);
        Form form("TITEbah", 13, 12);
        std::cout << form ;
        bureaucrat.signForm(form);
        form.beSigned(bureaucrat);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}