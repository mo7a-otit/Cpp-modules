#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>

class Span{
    private:
        unsigned int N;
    public:
        Span(unsigned int N_);
        Span(const Span& other);
        Span& operator=(const Span& other);
        ~Span();

};

#endif