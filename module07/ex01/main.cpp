#include "iter.hpp"

void add(int &a){
    std::cout << a+1 << " ";
}

template <typename T>
void print(T& x){
    std::cout << x << " ";

}

int main (){
    int arr[] = {1, 2, 3, 4 ,5};
    std::cout << "test 1 : ";
    iter(arr, 5, print<const int>);
    std::cout << std::endl;
    std::cout << "test 2 : ";
    iter(arr, 5, add);
    std::cout << std::endl;
}