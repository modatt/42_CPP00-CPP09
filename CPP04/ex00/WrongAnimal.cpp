#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "WrongAnimal Default Constructor\n";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor Called\n";
}

void    WrongAnimal::makeSound() const 
{
    std::cout << "WrongAnimal Sound\n";
}

std::string WrongAnimal::getType() const
{
    return type;
}
