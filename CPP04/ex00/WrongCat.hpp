
#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    WrongCat(const WrongCat &copy);
    WrongCat    &operator=(const WrongCat &other);
    ~WrongCat();

    void makeSound() const;   // looks overridden — but isn’t polymorphic
};

#endif
