#include "Span.hpp"

int main() {
    Span sp = Span(5);
    // sp.addNumber(6);
    // sp.addNumber(3);
    // sp.addNumber(17);
    // sp.addNumber(9);
    // sp.addNumber(11);
    std::vector<unsigned int> nbrs;
    for (int i(0); i < 5; i++)
        nbrs.push_back(i+1);
    sp.addNumbers(nbrs);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::cout << std::endl;
    Span spp(10000);
    for (int i(0); i < 10000; i++)
        spp.addNumber(i + 1);
    std::cout << spp.shortestSpan() << std::endl;
    std::cout << spp.longestSpan() << std::endl;
    
    return 0; 
}