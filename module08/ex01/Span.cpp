#include "Span.hpp"

Span::Span() : size(0){
}

Span::Span(const Span& other){
    *this = other;
}

Span& Span::operator=(const Span& other){
    this->size = other.size;
    this->container = other.container;
    return *this;
}

Span::~Span(){
}

Span::Span(unsigned int N) : size(N) {
}

void Span::addNumber(unsigned int nbr){
    if (this->container.size() == this->size)
        throw std::invalid_argument("the Span is full");
    this->container.push_back(nbr);
}

void Span::addNumbers(std::vector<unsigned int>& nbr){
    if (this->size < this->container.size() + nbr.size())
        throw std::invalid_argument("No space left to add numbers");
    this->container.insert(container.end(), nbr.begin(), nbr.end());
}


unsigned int Span::longestSpan(){
    if (this->container.empty() || this->container.size() == 1)
        throw std::invalid_argument("Can't find the longest span");
    std::vector<int> copy = this->container;
    std::sort(copy.begin(), copy.end(), std::greater<int>());
    std::vector<int>::iterator itb = copy.begin();
    std::cout << "The begining : "<< *itb << std::endl;
    std::vector<int>::iterator ite = copy.end();
    ite--;
    std::cout << "The end : " << *ite << std::endl;
    std::cout << *itb << " - " << *ite << " = ";
    return (*itb - *ite);
}

unsigned int Span::shortestSpan(){
    if (this->container.empty() || this->container.size() == 1)
        throw std::invalid_argument("Can't find the shortest span");
    std::sort(this->container.begin(), this->container.end());
    std::vector<int>::iterator itb = this->container.begin();
    std::vector<int>::iterator itSec;
    unsigned int res = UINT_MAX;
    unsigned int distance = 0;
    for (itSec = itb + 1; itSec != this->container.end(); itSec++){
       
        distance = *itSec - *itb;
        if (distance < res)
            res = distance;
        itb++;
    }
    std::cout << "The shortest Span is : ";
    return res;
}

