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

int main (){
    std::cout << "-----first test-----\n";
    int a[] = {1, 2, 3, 4, 5};
    int len = sizeof(a) / sizeof(a[0]);
    ::iter(a, len, add);
    std::cout << std::endl;
    
    std::cout << "-----second test-----\n";
    std::string b[] = {"O", "t", "h", "m", "a", "n", "e"};
    ::iter(b, 7, upper);
    std::cout << std::endl;
}