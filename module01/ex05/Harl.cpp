#include "Harl.hpp"

void Harl::debug (){

    std::cout << "I love having extra bacon!" << std::endl;
}

void Harl::info(){

    std::cout << "I cannot believe adding extra bacon costs more money"
            << std::endl;
}

void Harl::warning(){

    std::cout << "I think I deserve to have some extra bacon for free"
            << std::endl;
}

void Harl::error(){

    std::cout << "This is unacceptable! I want to speak to the manager now"
            << std::endl;
}

void Harl::complain( std::string level ){

    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    myFunc func[] = { &Harl::debug, &Harl::info, &Harl::warning, 
                        &Harl::error};
    int i(0);
    while (i < 4){
        if (level == levels[i]){
            (this->*func[i])();
            return ;
        }
        i++;
    }
    std::cerr << "Error input!! " << std::endl;
}