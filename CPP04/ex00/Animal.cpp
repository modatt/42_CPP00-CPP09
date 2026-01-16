#include "Animal.hpp"

// default 
Animal::Animal() : type("Animal")
{
    std::cout << "Animal Constructor Called\n";
}

// para
// copy 
                Animal::Animal(const Animal &copy) : type(copy.type)
                {
                    std::cout << "Animal Copy Constructor Called\n";
                }

                // operator
                Animal &Animal::operator=(const Animal &other)
                {
                    std::cout << "Animal Copy Assigment Operator Called\n";
                    if (this != &other)
                    {
                        type = other.type;
                    }
                    return *this;
                }

// destructor 
Animal::~Animal()
{
    std::cout << "Destructor Called!";
}

// func
void    Animal::makeSound() const
{
    std::cout << "Generic Animal Sound\n";
}

std::string     Animal::getType() const
{
    return type;
}