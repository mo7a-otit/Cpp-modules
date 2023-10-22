#include "Harl.hpp"

void Harl::debug (){

    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon!" << std::endl;
}

void Harl::info(){

    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money"
            << std::endl;
}

void Harl::warning(){

    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free"
            << std::endl;
}

void Harl::error(){

    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now"
            << std::endl;
}

void Harl::complain( std::string level ){

    int i(0);
    std::string levels[] ={
    "DEBUG",
    "INFO",
    "WARNING",
    "ERROR",
    };

    while (i < 4 && level.compare(levels[i]))
        i++;
    switch (i){
        case 0:
            this->debug();
        case 1:
            this->info();
        case 2:
            this->warning();
        case 3:
            this->error();
            break;
        default :
            std::cout << "[ Probably complaining about nsignificant problems ]"
                << std::endl;
    }
}
