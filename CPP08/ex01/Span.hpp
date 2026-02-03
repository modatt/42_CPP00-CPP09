#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

class Span
{
    std::vector<int> nbr;
    unsigned int maxSize;
    public:
    Span();
    Span(const unsigned int n);
    Span(const Span &cpy);
    Span&operator=(const Span &other);
    ~Span();

    void addNumber(int number);
    unsigned int shortestSpan() const;
    unsigned int longestSpan() const;
};


#endif