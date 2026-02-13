#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>

// func - 1
template <typename T> T max(T a, T b)
{
    return (a > b) ? a : b;
}

// func - 2
template <typename T> T min(T a, T b)
{
    return (a < b) ? a : b;
}

// func - 3
template <typename T> void swap(T &a, T &b)
{
    T temp;

    temp = a;
    a = b;
    b = temp;
}

#endif