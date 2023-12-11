#include "Span.hpp"

Span::Span(unsigned int N_){
    if (N_ <= INT_MAX)
        this->N = N_;
}