
#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    ~WrongCat();

    void makeSound() const;   // looks overridden — but isn’t polymorphic
};

#endif
