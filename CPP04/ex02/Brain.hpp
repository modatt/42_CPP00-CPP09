

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>
// #include "Animal.hpp"
// #include "Cat.hpp"
// #include "Dog.hpp"


class Brain
{
private:
    std::string ideas[100];

public:
    Brain();
    Brain(const Brain& other);
    Brain& operator=(const Brain& other);
    ~Brain();

    // func 
    void setIdea(int index, const std::string& idea);
    void displayIdea(int index) const;
};

#endif

