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
    this->type = copy.type;
    brain = new Brain(*copy.brain);
}

Cat     &Cat::operator=(const Cat &other)
{
    std::cout << "Cat Copy Assigment Constructor Called\n";
     if (this != &other)
    {
        this->type = other.type;
        if (brain)
            delete brain;
        brain = new Brain(*other.brain);
    }
    return (*this);
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


Brain   *Cat::getBrain()
{
    return this->brain;
}

