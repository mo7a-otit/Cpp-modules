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

std::ostream& operator<<(std::ostream& output, Fixed const &fixed){

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

//Comparaison overload
bool Fixed::operator>(const Fixed other){

    return this->toFloat() > other.toFloat();
}

bool Fixed::operator<(const Fixed other){

    return this->toFloat() < other.toFloat();
}

bool Fixed::operator>=(const Fixed other){

    return this->toFloat() >= other.toFloat();
}

bool Fixed::operator<=(const Fixed other){

    return this->toFloat() <= other.toFloat();
}

bool Fixed::operator==(const Fixed other){

    return this->toFloat() == other.toFloat();
}

bool Fixed::operator!=(const Fixed other){

    return this->toFloat() != other.toFloat();
}

//Arethmetic overload
float Fixed::operator+(const Fixed other){

    return this->toFloat() + other.toFloat();
}

float Fixed::operator-(const Fixed other){

    return this->toFloat() - other.toFloat();
}

float Fixed::operator*(const Fixed other){

    return this->toFloat() * other.toFloat();
}

float Fixed::operator/(const Fixed other){

    return this->toFloat() / this->toFloat();
}

//The 4 increment/decrement operators
Fixed& Fixed::operator++(){
    //the pre-increment
    ++fixedPointValue;
    return *this;
}

Fixed& Fixed::operator--(){
//the pre-decrement
    --fixedPointValue;
    return *this;
}

Fixed Fixed::operator++(int other){
//the post-incrementation
    Fixed temp(*this);
    fixedPointValue++;
    return temp;
}

Fixed Fixed::operator--(int){
    //the post-decrement
    Fixed temp(*this);
    fixedPointValue--;
    return temp; 
}

//overload static member functions
Fixed& Fixed::min(Fixed& a, Fixed& b){

    if (a.toFloat() < b.toFloat())
        return a;
    else
        return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b){

    if (a.toFloat() < b.toFloat())
        return a;
    else
        return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b){

    if (a.toFloat() > b.toFloat())
        return a;
    else
        return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b){

    if (a.toFloat() > b.toFloat())
        return a;
    else
        return b;
}
