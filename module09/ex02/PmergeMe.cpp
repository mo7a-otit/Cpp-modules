#include "PmergeMe.hpp"

void checkArgs(char **av){
    for (int i = 1; av[i]; i++){
        for (int j = 0; av[i][j]; j++){
            if( av[i][j] != '+' && !std::isdigit(av[i][j]))
                throw std::invalid_argument("There is an invalid character!");
        }
    }
}

void sortAlgo(char **av){
    /////vector container/////
    VEC vec;
    int j = 0;
    for (int i = 1; av[i]; i++){
        vec.push_back(std::atof(av[i]));
        j = i;
    }
    std::cout << "vector Before : " << std::endl;
    for (ITERATOR itb = vec.begin(); itb != vec.end(); itb++)
        std::cout << *itb << " ";
    std::cout << std::endl;
        //sorting my vector//
    clock_t start = clock();
    merge_insert(vec);
    clock_t end = clock();
    std::cout << "vector After : " << std::endl;
    for (ITERATOR itb = vec.begin(); itb != vec.end(); itb++)
        std::cout << *itb << " ";
    std::cout << std::endl;
    double timeee = (double)(end - start);
    std::cout << "Time to process a range of " << j 
        << " elements with std::vector : "<< std::fixed << timeee
        << " us" << std::endl; 

    //////deque container///////
    DEQUE deq;
    for (int i = 1; av[i]; i++){
        deq.push_back(std::atof(av[i]));
    }
    // std::cout << "deque Before : " << std::endl;
    // for (ITERATOR_ itb = deq.begin(); itb != deq.end(); itb++)
    //     std::cout << *itb << " ";
    // std::cout << std::endl;
        //sorting my deqtor//
    clock_t startt = clock();
    merge_insert(deq);
    clock_t endd = clock();
    double timee = (double)(endd - startt);
    std::cout << "Time to process a range of " << j 
        << " elements with std::deque : " << std::fixed << timee
        << " us" << std::endl; 
    // std::cout << "deque After : " << std::endl;
    // for (ITERATOR_ itb = deq.begin(); itb != deq.end(); itb++)
    //     std::cout << *itb << " ";
    // std::cout << std::endl;
}
