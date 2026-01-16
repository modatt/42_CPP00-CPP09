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
    this->type = copy.type;
    brain = new Brain(*copy.brain);
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog Copy Assigment Operator Called\n";
     if (this != &other)
    {
        this->type = other.type;
        if (brain)
            delete brain;
        brain = new Brain(*other.brain);
    }
    return (*this);
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

Brain   *Dog::getBrain()
{
    return this->brain;
}