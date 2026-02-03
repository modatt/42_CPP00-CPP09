#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
#include <exception>
#include <algorithm>
#include <iostream>


// define exception 

class NotFound : public std::exception
{
    public:
    const char *what() const throw()
    {
        return "Value not found in container";
    }
};

// template function
template <typename T>
typename T::iterator easyfind(T& container, int value);


#include "easyfind.tpp" // here to enable of using it // up not visible 


#endif 