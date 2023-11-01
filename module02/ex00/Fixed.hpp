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


        //getter and setter
        int getRawBits( void ) const;
        void setRawBits( int const raw );

};

#endif