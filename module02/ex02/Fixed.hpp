#ifndef FIXED_HPP
#define FIXED_HPP


#include <iostream>
#include <string>

class Fixed{

    private:
        int fixedPointValue;
        static const int fractionalBits;

    public:
        Fixed();
        ~Fixed();

        // a copy constructor
        Fixed(const Fixed &); 

        //copy assignment operator overload
        Fixed& operator=(const Fixed &); 

        //Int constructor
        Fixed(const int);

        //Float constuctor
        Fixed(const float);

        //getter and setter
        int getRawBits( void ) const;
        void setRawBits( int const raw );

        //new member functions
        float toFloat( void ) const;
        int toInt( void ) const;

        //overload the operator
        bool operator>(const Fixed);
        bool operator<(const Fixed);
        bool operator<=(const Fixed);
        bool operator>=(const Fixed);
        bool operator==(const Fixed);
        bool operator!=(const Fixed);

        //Arethmetic operator
        float operator+(const Fixed);
        float operator-(const Fixed);
        float operator*(const Fixed);
        float operator/(const Fixed);

        //The 4 increment/decrement operators
        Fixed& operator++();
        Fixed& operator--();
        Fixed operator++(int);
        Fixed operator--(int);

        //static member functions
        static Fixed& min(Fixed&, Fixed&);
        const static Fixed& min(const Fixed&, const Fixed&);
        static Fixed& max(Fixed&, Fixed&);
        const static Fixed& max(const Fixed&, const Fixed&);
        
};
std::ostream& operator<<(std::ostream& o, Fixed const &fixed);
#endif