#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T, typename F> void iter(T *arr, const size_t size, F func)
{
    if (!arr)
        return ;
    for (size_t i = 0; i < size; i++)
        func(arr[i]);
}

#endif