#incllude "Brain.hpp"


int main()
{
    const int size = 10;
    Animal* animals[size];

    for (int i = 0; i < size / 2; i++)
        animals[i] = new Dog();
        
    for (int i = size / 2; i < size; i++)
        animals[i] = new Cat();

    for (int i = 0; i < size; i++)
        delete animals[i];

    Dog dog1;
    Dog dog2 = dog1;   // copy constructor

    Dog dog3;
    dog3 = dog1;      // copy assignment

    return 0;
}
