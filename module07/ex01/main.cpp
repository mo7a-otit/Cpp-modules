#include "iter.hpp"

void add(int &a){
    std::cout << a+1 << "  ";
}

void upper(std::string &c){
    for (int i(0); c[i]; i++)
        if (c[i] >= 'a' && c[i] <= 'z')
            std::cout << (c[i] = toupper(c[i]));
        else
            std::cout << c[i];
}

template <typename T>
void print(T& x){
    std::cout << x << std::endl;

}

int main (){
    int arr[] = {1, 2, 3, 4 ,5};
    iter(arr, 5, print<const int>);
}