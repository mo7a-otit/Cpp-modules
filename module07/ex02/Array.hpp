#ifndef ARRAY_HPP
#define ARRAY_HPP


#include <iostream>


template<class T>
class Array{

    private:
        T* arr;
        unsigned int size_;
    public:
        Array() : arr(NULL){};
        Array(unsigned int n) : size_(n){
            if (n == 0)
                arr = NULL;
            else{
                arr = new T[this->size_];
                for (unsigned int i(0); i < this->size_; i++)
                    arr[i] = 0;
            }
        }
        Array(const Array& other){
            *this = other;
        }
        Array& operator=(const Array& other){
            // if(other.arr)
            //     delete []other.arr;
            if (other.size_){
                this->size_ = other.size_;
                this->arr = new T[this->size_];
                for (unsigned int i(0); i < this->size_; i++)
                    this->arr[i] = other.arr[i];
            }
            return *this; 
        }
        ~Array(){
            if (this->size_)
                delete []this->arr;
        }
        class OutofBounds: public std::exception
		{
			virtual const char * what() const throw(){
				return "INDEX out of range";
			}
		};
        T& operator[](unsigned int n){
            if (n >= this->size_)
                throw Array::OutofBounds();
            return this->arr[n];
        }
        unsigned int size(){return this->size_;};
};



#endif