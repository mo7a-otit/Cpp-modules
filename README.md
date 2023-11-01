# Cpp
Module 02

- In this module we design our classes in the Orthodox Canonical Form it means that my class must have those member functions :
    -      Default constructor 
    -       Copy constructor
    -       Copy assignment operator 
    -       Destructor
- And we gonna know what is a fixed point and float point, and how they’re stored in memory.


COPY CONSTRUCTOR  :

- A copy constructor is a special member function that is used to create a new object as a copy of an exiting object of the same class.
- Here is how it should be prototyped :   
		ClassName( const ClassName& source)
- A copy constructor copy the data members of the source object into the new object. This means that the new object is independent.

COPY ASSIGNMENT OPERATOR  :

- When we need to assign an object to another in cpp we should create an copy assignment operator that allows us to make a copy of one object to another, it’s just like the copy constructor but it’s invoked when we use the ‘=‘ between two objects.
- Syntax : ClassName& operator=( const ClassName& source ). 

FLOATING-POINT NUMBERS  :

- Float has 4bytes that equals to 32bits
- A floating-point number have three components :
    - S / Sign bit : determine if the number is positive or negative, 0 represents positive, and 1 represent negative.
    - Exponent : has 8 bits, and it’s like a power that tells you where to place the decimal point in a number.
    - Mantissa : the mantissa includes all digits of number.
		
		let’s give an example :
			let’s convert 6.25 to binary :
			-the integer 6 in binary is 110.
			-the fractional part (0.25) in binary is  0.01
			-the mantissa is 11001

FIXED-POINT NUMBERS  :

 	what is fixed-point  :
- Fixed point is a real number represented with an integer and fractional bits, this means that the position of the decimal point is fixed and does not change.

	Precision  :
- The precision is determinate by the number of fractional bits, more fractional bits provide higher precision, but this cost a smaller range.

	fixed-point and memory  :
- Fixed-point numbers are stored in memory just like integers, but with a predefined position for the binary point.
		let’s give a basic example :
		-suppose we want to represent the number 5.75 in fixed point format.
		-int part 5 = 0101.
		-Fractional part 0.75 = .11.
			so 5.75 will be represented as :
			[ 0	1	0	1	.	1	1	0	0 ]


	HOW TO STORE A FIXED-POINT  :
- Let’s say the fractional part is 8.
- To scale the fixed point number, we shift the integer part 8 bits to the left to make room for the fractional part.
- The fractional var is declared as a static const int because, the fractional is variable once is initialized its value  persists across the programs lifetime this is for the static keyword. The const keyword stand for that’s the value cannot be modified after it’s intialized.
