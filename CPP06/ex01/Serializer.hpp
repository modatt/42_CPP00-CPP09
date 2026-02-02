#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP


#include <iostream>
#include <cstdint>
#include <string>


struct  Data
{
    int age;
    std::string name;
};


class Serializer
{
    private:
    Serializer();
    Serializer(const Serializer &copy);
    Serializer &operator=(const Serializer &other);
    
    public:
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};
















// class Serializer
// {
//     private:
//     Serializer();
//     Serializer(Serializer *copy);
//     Serializer&operator=(Serializer &other);
//     ~Serializer();

//     public:
//     static uintptr_t serialize(Data* ptr); // Convert a pointer into an integer without changing its bits
//     // Convert a pointer into an integer without changing its bits
//     // Data*  ──(cast)──>  uintptr_t
//     static Data* deserialize(uintptr_t raw);
//     // Convert that integer back into the original pointer
//     // uintptr_t  ──(cast)──>  Data*
//     // original_pointer == deserialized_pointer
// };

#endif

/*
GOAL: “What if I temporarily treat a memory address as a number, then turn it back?”
is just a number, written in hexadecimal.
uintptr_t is an unsigned integer type guaranteed to be able to hold a pointer
- Pointer size differs between 32-bit and 64-bit systems
- uintptr_t is portable and safe
- uintptr_t = “an integer big enough to store a memory address”
*/


/* 
ASSIGMENT READING/ ANALYSIS::

- "Implement a class Serializer, which will not be initializable by the user in any way"
MEANS:: Serializer s;   // ❌ NOT allowed - user uses the class is not allowed
HOW??:: - make contructor private
        - use only static methods

*/