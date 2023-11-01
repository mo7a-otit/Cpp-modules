#include "Fixed.hpp"

const int Fixed::fractionalBits = 8;

Fixed::Fixed() : fixedPointValue(0) {

    std::cout << "Default constructor called" 
        << std::endl;
}

Fixed::Fixed(const Fixed& other){


    std::cout << "Copy constructor called" 
        << std::endl;
    *this = other;
}

Fixed::~Fixed(){

    std::cout << "Destructor called"
        << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other){

    std::cout << "Copy assignment operator called"
        << std::endl;
    if (this != &other){
        this->fixedPointValue = other.getRawBits();
    }
    return *this;
}

void Fixed::setRawBits(int const raw){

    this->fixedPointValue = raw;
}

int Fixed::getRawBits( void ) const{

    std::cout << "getRawBits member function called"
        << std::endl;
    return this->fixedPointValue;
}