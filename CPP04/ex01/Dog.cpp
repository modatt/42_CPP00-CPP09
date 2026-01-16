#include "Dog.hpp"

// default
Dog::Dog()
{
    type = "Dog";
    brain = new Brain();
    std::cout << "Dog Default Constructor Called\n";
}

// copy
Dog::Dog(const Dog &copy) : Animal(copy)
{
    std::cout << "Dog Copy Constructor Called\n";
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog Copy Assigment Operator Called\n";
    if (this != &other)
        Animal::operator=(other);
    return *this;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog Destructor Called\n";
}

void    Dog::makeSound() const 
{
    std::cout << "Woof!\n";
}
