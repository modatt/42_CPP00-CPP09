#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "WrongAnimal Default Constructor\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) : type(copy.type)
{
    std::cout << "Animal Copy Constructor Called\n";
}

// operator
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    std::cout << "Animal Copy Assigment Operator Called\n";
    if (this != &other)
    {
        type = other.type;
    }
    return *this;
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
