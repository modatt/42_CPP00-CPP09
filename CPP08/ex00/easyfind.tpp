#include "EasyFind.hpp"

template <typename T>


typename T::iterator easyfind(T& container, int value)
{
    typename T::iterator looping = std::find(container.begin(), container.end(), value);
    if (looping == container.end())
        throw NotFound();
    return looping;
}