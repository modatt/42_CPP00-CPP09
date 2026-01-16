// #include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"


// int main()
// {
//     const int size = 10;
//     Animal* animals[size];

//     for (int i = 0; i < size / 2; i++)
//         animals[i] = new Dog();
        
//     for (int i = size / 2; i < size; i++)
//         animals[i] = new Cat();

//     for (int i = 0; i < size; i++)
//         delete animals[i];

//     Dog dog1;
//     Dog dog2 = dog1;   // copy constructor

//     Dog dog3;
//     dog3 = dog1;      // copy assignment

//     return 0;
// }


int main() {
    // const Animal *a = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    delete j;
    delete i;
    std::cout << "\n--- Array Test ---" << std::endl;
    const int size = 4;
    Animal* animals[size];
    for (int k = 0; k < size; ++k) {
        if (k < size / 2)
            animals[k] = new Dog();
        else
            animals[k] = new Cat();
    }
    std::cout << "\n--- Deep Copy Test ---" << std::endl;
    // Dog *dog1 = dynamic_cast<Dog*>(animals[0]);
    Dog dog1;
    dog1.getBrain()->setIdea(0, "before change");
    Dog D = dog1;
    D.getBrain()->setIdea(0, "I LLLLLLLLLL");
    dog1.getBrain()->displayIdea(0);
    D.getBrain()->displayIdea(0);
    // dog1->makeSound();
    // dog1 = Dog();
    // Dog dog2(dog1);
    // dog2.makeSound();
    for (int k = 0; k < size; ++k)
        delete animals[k];
    return 0;
}
