#include "Span.hpp"

int main() {
    // Span sp = Span(5);
    // sp.addNumber(8);
    // sp.addNumber(1);
    // sp.addNumber(19);
    // sp.addNumber(15);
    // sp.addNumber(200);
    // std::cout << sp.longestSpan() << std::endl;
    // std::cout << sp.shortestSpan() << std::endl;
    // return 0;
    std::cout << "------Test 1------" << std::endl;
    Span sp = Span(5);
    std::vector<unsigned int> nbrs;

    for (int i(0); i < 5; i++)
        nbrs.push_back(i+1);
    sp.addNumbers(nbrs);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::cout << std::endl;
    std::cout << "------Test 2------" << std::endl;
    try {
        Span spp(9999);
        std::vector<unsigned int> nbrs2;
        for (int i(0); i < 10000; i++)
            nbrs2.push_back(i + 1);
        spp.addNumbers(nbrs2);
        std::cout << spp.shortestSpan() << std::endl;
        std::cout << spp.longestSpan() << std::endl;

    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    
    std::cout << "------Test 3------" << std::endl;
   try{ 
    Span sppp;
    sppp.addNumber(1);
    std::cout << sppp.shortestSpan() << std::endl;
    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    return 0; 
}