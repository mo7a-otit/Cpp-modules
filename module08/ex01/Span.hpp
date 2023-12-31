#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>


class Span{
    private:
        std::vector<int> container;
        unsigned int size;
    public:
        Span();
        Span(const Span& other);
        Span& operator=(const Span& other);
        ~Span();

        Span(unsigned int N);

        void addNumber(unsigned int nbr);
        void addNumbers(std::vector<unsigned int>& nbr);
        unsigned int shortestSpan();
        unsigned int longestSpan();
};

#endif