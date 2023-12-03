#include "Bureaucrat.hpp"
#include "Form.hpp"


int main( void )
{

    try {
        Bureaucrat bureaucrat("OTHMANE",11);
        Form form("TITEbah", 13, 12);

        bureaucrat.signForm(form);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}