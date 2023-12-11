#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <list>
#include <vector>
#include <deque>
#include <forward_list>
#include <array>

template<typename T>
int easyfind(T& container, int b){
    typename T::iterator it;
    int idx = 0;
    for (it = container.begin(); it != container.end(); it++){
        if (*it == b)
            return idx;
        idx++;
    }
    throw std::invalid_argument("the index not found");
}


#endif