#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

// int main()
// {
//     const Animal* meta = new Animal();
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();
//     std::cout << j->getType() << " " << std::endl;
//     std::cout << i->getType() << " " << std::endl;
//     i->makeSound(); //will output the cat sound!
//     j->makeSound();
//     meta->makeSound();

//     return 0;
// }


int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;

    i->makeSound();   // Meow
    j->makeSound();   // Woof
    meta->makeSound(); // Animal sound

    delete meta;
    delete j;
    delete i;

    std::cout << "---- WRONG TEST ----\n";

    const WrongAnimal* wc = new WrongCat();
    wc->makeSound();  
    delete wc;
}
