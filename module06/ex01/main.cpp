#include "Serializer.hpp"

int main(){
    
    Data data;

    data.a = 'c'; 
    std::cout << "Before : " << data.a
        << std::endl;
    std::cout << "After : ";
    std::cout << Serializer::deserialize(Serializer::serialize(&data))->a
        << std::endl;
}