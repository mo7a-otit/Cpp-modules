#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>


template<typename T>
void iter(T* addrs, int len, void (*func)(T&));

template<typename T>
void iter(T* addrs, int len, void (*func)(T&)){
    for (int i(0); i < len; i++)
        func(addrs[i]);
}


#endif