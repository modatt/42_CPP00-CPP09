#ifndef ARRAY_HPP
#define ARRAY_HPP


template <typename T> class Array
{
    private:
        T *elements;
        unsigned int size;
        
    public:
    Array(): elements(NULL), size(0) {};

    ~Array(unsigned int n)
    {
        if (elements)
            delete[] elements;
    }

    
}

#endif