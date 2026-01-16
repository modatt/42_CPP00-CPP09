#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    brain = new Brain();
    std::cout << "Cat Default Constructor Called\n";
}

Cat::Cat(const Cat &copy): Animal(copy)
{
    std::cout << "Cat Copy Constructor Called\n";
}

Cat     &Cat::operator=(const Cat &other)
{
    std::cout << "Cat Copy Assigment Constructor Called\n";
    if (this != &other)
        Animal::operator=(other);
    return *this;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat Destructor Called\n";
}

void    Cat::makeSound() const 
{
    std::cout << "Meaow\n";
}
