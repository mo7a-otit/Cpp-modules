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




# module 04

- **Interface :**
    - imagine we’re working on app that build shapes :( Circles, Squares… ), we want each shape to have a method called **abstract( )** an interface can help us to define that common agreement, if we say we implement this interface we guarantee that we have those functions.
- **************************Recap in cpp:**************************
    - think of it like a building with blocks, and we have different types of blocks, called data types, and you can make your own special blocks, called functions, that do specific tasks, those function can be organized into blue prints called classes.
- In this module we gonna learn about subtype polymorphism.
- first of all let’s talk about the difference between the overriding and overloading.
    - Method **overloading** is when two or more method in the same class have the same name but different parameters .
    - Method **overriding** is when a derived class requires a different definition for an inherited method.
- **Subtype polymorphism** is the ability to use derived classes through base class pointers and references, and *is often achieved through a mechanism called virtual function*.
- **Subtype polymorphism** allows object of derived class to be treated as objects of the base class, this means that you can have reference or pointer to a base class .
- **what if we don’t use the virtual keyword?**
    - if we don’t use it we won’t have the  polymorphic behavior. instead the function of the base class gonna always be called.
- *So here we gonna need a virtual function, also known as a virtual method, so what is this virtual? And why we need it?*
- **Virtual** is a keyword used to declare a member function or a class member variable as ‘virtual’ which had in *OOP* a specific implication related to polymorphism and overriding.
- Virtual function is a member function that is declared within a base class and is redefined by a derived class. So when we refer to a derived class object using pointer or reference to the base class, we can call a virtual function for that object and execute the derived class’s version of the method.
- So why we need the virtual functions ?
    - *They ensure that the correct function is called for an object.*
- Virtual functions are declared with a ***virtual*** keyword in a base class, and they’re called in the run time.
- **Rules of a virtual function** :
    - Virtual function can’t be static.
    - Virtual function should be accessed using a pointer or reference of base class type to achieve runtime polymorphism.
    - The prototype should be the same in the base as well as the derived class.
- **VIRTUAL DESTRUCTOR :**
    - When we have an inheritance hierarchy, and we plan to use a pointer to the base class to manage objects of derived class, virtual destructor becomes important.
    - How it’s work?
        - When you delete an object through a pointer to the base class, cpp use the **virtual table** mechanism to determinate the actual type of object.
            - **What is virtual table (VTables) :**
                - first of all each class has a vtable.
                - the vtable is a table of function pointers, where each pointer corresponds to a virtual function declared in the class.
                - when a class has virtual function the compiler create a vtable for that class and it’s typically stored as a static array of functions.
                - when a virtual function is called through a base class pointer or reference, the program uses the **vptr** to locate the correct entry int the base vtable.
- **Abstract class :**
    - an abstract class has at least one pure virtual function ( *that’s mean a function that has no definition* ), the class inheriting the abstract class must provide a definition for the pure virtual function, otherwise the subclass would become an abstract class itself.
- **Difference between shallow copy and deep copy :**
    - *Shallow copy :*
        - creates new object but does not duplicate the objects inside the original object, it copies reference.
    - *Deep copy :*
        - if the copy constructor allocates new memory and copies the content of the pointed-to objects, creating independent copies.
- let’s see what this “***const Animal* dogg = new Dog()***”
    - here we have a base class Animal and a derived one Dog, we allocated memory for a Dog object on the heap, however since we assigning the Dog obj to a pointer of type ‘const Animal’, we’re treating Dog object as if it Animal. the const here means that we cannot modify the the obj pointed to by ‘doog’.
    - **assignment : ‘dogg = new Dog();’** assigns the address of a dynamically created Dog object to the pointer dogg.
    - **Polymorphism :** through polymorphism and the use of virtual functions, you can call functions on the pointer ‘dogg’ as if it were an ‘Animal’ pointer.