#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <deque>
#include <vector>
#include <ctime>

#define ITERATOR std::vector<int>::iterator
#define ITERATOR_ std::deque<int>::iterator
#define VEC std::vector<int>
#define DEQUE std::deque<int>

template<typename T>
void merge(T left, T right, T& vec){
    int lSize = vec.size()/2;
    int rSize = vec.size() - lSize;
    int i=0, l=0, r=0;

    while (l < lSize && r < rSize){
        if (left[l] < right[r]){
            vec[i] = left[l];
            i++;
            l++;
        }
        else {
            vec[i] = right[r];
            i++;
            r++;
        }
    }
    while (l < lSize){
        vec[i] = left[l];
        i++;
        l++;
    }
    while(r < rSize){
        vec[i] = right[r];
        i++;
        r++;
    }
}

template<typename T>
void merge_insert(T &vec){
    int len = vec.size();
    if (len <= 1)
        return;
    int mid = len/2;
    T left(mid);  
    T right(len - mid);
    for(int i = 0; i < len; i++){
        if (i < mid)
            left[i] = vec[i];
        else
            right[i - mid] = vec[i];
    }
    merge_insert(left);
    merge_insert(right);
    merge(left, right, vec);
}



void checkArgs(char **av);
void beforeSort(char** av);
void sortAlgo(char **av);


#endif