#include "Fixed.hpp"

const int Fixed::fractionalBits = 8;

 //CONSTRUCTORS :
Fixed::Fixed() : fixedPointValue(0) {

    std::cout << "Default constructor called" 
        << std::endl;
}

Fixed::Fixed(const int input){

    std::cout << "Int constructor called"
        << std::endl;
    this->fixedPointValue = input << this->fractionalBits;
}

Fixed::Fixed(const float input){

    std::cout << "Float constructor called"
        << std::endl;
    this->fixedPointValue = roundf(input * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed& other){

    std::cout << "Copy constructor called" 
        << std::endl;
    *this = other;
}

std::ostream& (std::ostream& output, Fixed const &fixed){

    output << fixed.toFloat();
    return output;
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

//MEMBER FUNCTIONS
float Fixed::toFloat( void )const{

    return ((float)this->fixedPointValue / (1 << this->fractionalBits));
}

int Fixed::toInt( void ) const{

    return (this->fixedPointValue >> this->fractionalBits);
}