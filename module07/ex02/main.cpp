#include "Array.hpp"

void test(){
    std::cout << "Creating an array of size 5" << std::endl;
    Array<int> arr(5);
    Array<int> arr_copy(arr);


    std::cout << "arr = [ ";
    for (int i(0); i < 5; i++)
        std::cout << arr[i] << " ";
    std::cout << "]" << std::endl;
    
    std::cout << "arr_copy = [ ";
    for (int i(0); i < 5; i++)
        std::cout << arr_copy[i] << " ";
    std::cout << "]" << std::endl;

    std::cout << "Change something..." << std::endl;
    arr[1] = 1;
    std::cout << "arr = [ ";
    for (int i(0); i < 5; i++)
        std::cout << arr[i] << " ";
    std::cout << "]" << std::endl;

    std::cout << "arr_copy = [ ";
    for (int i(0); i < 5; i++)
        std::cout << arr_copy[i] << " ";
    std::cout << "]" << std::endl;

    std::cout << "Trying to accessing an element out of Bounds"
        << std::endl;
    try{
        std::cout << "the arr size is = " << arr.size()
            << std::endl;
        std::cout << arr[8] << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }

}


int main(){
    
    test();
    system("leaks Array");
}