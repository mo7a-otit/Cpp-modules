#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>


template<typename T, typename W>
void iter(T* addrs, int len, void (*func)(W&)){
    for (int i(0); i < len; i++)
        func(addrs[i]);
}


#endif