#include "easyfind.hpp"
#include <list>
#include <vector>
#include <deque>
#include <forward_list>

int main(){

    std::list<int> a;
    for (int i(0); i < 5; i++)
        a.push_back(i + 1);
    std::cout << "[list] occurrence found at index : ";
    std::cout << easyfind(a, 3) << std::endl;
    std::cout << std::endl;

    std::cout << "[vector] occurrence found at index : ";
    std::vector<int> b;
    for (int i(0); i < 5; i++)
        b.push_back(i+1);
    std::cout << easyfind(b, 3) << std::endl;
    std::cout << std::endl;

    std::deque<int> c;
    for (int i(0); i < 5; i++)
        a.push_back(i + 1);
    std::cout << "[dequeue] occurrence found at index : ";
    std::cout << easyfind(c, 3) << std::endl;
    std::cout << std::endl;

    std::forward_list<int> d;
    for (int i(0); i < 5; i++)
        a.push_back(i + 1);
    std::cout << "[forward_list] occurrence found at index : ";
    std::cout << std::endl;


    try{
        std::cout << "Trying to find 9 : ";
        std::cout << easyfind(b , 9) << std::endl;
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }

}
