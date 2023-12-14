#include "Span.hpp"

Span::Span() : size(0){
}

Span::Span(const Span& other) : size(other.size){
    *this = other;
}

Span& Span::operator=(const Span& other){
    this->size = other.size;
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

unsigned int Span::shortestSpan(){
    if (this->container.empty() || this->container.size() == 1)
        throw std::invalid_argument("Can't find the shortest span");
    std::vector<int> copy = this->container;
    std::sort(copy.begin(), copy.end(), std::less<int>());
    return *(copy.begin());
}

unsigned int Span::longestSpan(){
    if (this->container.empty() || this->container.size() == 1)
        throw std::invalid_argument("Can't find the longest span");
    std::vector<int> copy = this->container;
    std::sort(copy.begin(), copy.end(), std::greater<int>());
    return *(copy.begin());
}

