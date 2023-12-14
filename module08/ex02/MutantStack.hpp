#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP


#include <iostream>
#include <stack>

template <typename T, typename container = std::vector<T> >
class MuntanStack : public std::stack<T, container> {
    public :
    MuntanStack() : std::stack<T, container>(){};
    MuntanStack(const MuntanStack& other) : std::stack<T, container>(other) {
        *this = other;
    }
    MuntanStack& operator=(const MuntanStack& other){
        std::stack<T, container>::operator=(other);
        return *this;
    }
    ~MuntanStack(){};

    typedef typename container::iterator iterator;
    iterator begin(){
        return this->c.begin();
    }

    iterator end(){
        return this->c.end();
    }

};





#endif