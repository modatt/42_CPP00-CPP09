#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class   Animal
{
    protected:
    std::string type;

    public:
    Animal();
    Animal(const Animal &copy);
    Animal &operator=(const Animal &other);
    virtual ~Animal(); // virtual why? 
    // Because you delete derived objects (Dog, Cat) through Animal*
    //Without it → undefined behavior (and instant fail in evaluation)

    virtual void makeSound() const; // why virtual
    //Enables runtime polymorphism
    // Without this → Dog/Cat sounds will NOT be called
    std::string getType() const;
};

#endif