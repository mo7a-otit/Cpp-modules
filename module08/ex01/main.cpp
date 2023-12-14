#include "Span.hpp"

int main() {
    Span sp = Span(5);
    std::vector<unsigned int> nbrs;

    for (int i(0); i < 5; i++)
        nbrs.push_back(i+1);
    sp.addNumbers(nbrs);
    std::cout << "The shortest span is : " 
        << sp.shortestSpan() << std::endl;
    std::cout << "The longest span is : " 
        << sp.longestSpan() << std::endl;

    std::cout << std::endl;

    Span spp(10000);
    std::vector<unsigned int> nbrs2;
    for (int i(0); i < 10000; i++)
        nbrs2.push_back(i + 1);
    spp.addNumbers(nbrs2);
    std::cout << "The shortest span is : " 
        << spp.shortestSpan() << std::endl;
    std::cout << "The longest span is : " 
        << spp.longestSpan() << std::endl;
    
   try{ 
    Span sppp;
    sppp.addNumber(1);
    std::cout << sppp.shortestSpan() << std::endl;
    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    return 0; 
}