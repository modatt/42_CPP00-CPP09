#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <iostream>

template <typename T> class Array
{
    private:
        T *elements;
        unsigned int len;
        
    public:
    Array(): elements(NULL), len(0) {};
    Array(unsigned int n): elements(new T[n]()), len(n) {};
    Array(const Array &cpy): elements(NULL), len(0)
    {
        if (cpy.len > 0)
        {
            elements = new T[cpy.len]();
            len = cpy.len;
            for (unsigned int i = 0; i < len; i++)
                elements[i] = cpy.elements[i];
        }
    }
    Array &operator=(const Array &other)
    {
        if (this != &other)
        {
            if (elements)
                delete[] elements;
            len = other.len;
            if (len > 0)
            {
                elements = new T[len]();
                for (unsigned int i = 0; i < len; i++)
                    elements[i] = other.elements[i];
            }
            else
                elements = NULL;
        }
        return *this;
    }
    ~Array()
    {
        if (elements)
            delete[] elements;
    }

    const T &operator[](unsigned int index) const
    {
        if (index >= len)
            throw OutOfBoundsException();
        return elements[index];
    }

    T &operator[](unsigned int index)
    {
        if (index >= len)
            throw OutOfBoundsException();
        return elements[index];
    }

    unsigned int size() const
    {
        return len;
    }

    class OutOfBoundsException: public std::exception
    {
        public:
            virtual const char *what() const throw()
            {
                return "Index is out of the array bounds";
            }
    };
};

#endif