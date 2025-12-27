**C++**

#OOP: Logic thinking.

Before writing a program, I must ask these questions:
1. What is the program doing?
2. What are the components/elements of the program? what are the things in the program?

For the program after having answer for those questions, I go to the second question for each object listed I return the circle and ask the two questions again. 

At the end you will have classes and its attributes & methods/functions + variables/parameters. 

# Composion vs Inheritance 
- Composion: .
    ask: is XXX has XXX ? "is Human has a Weapon? yes. Is Car has Vehicle ? no. if yes, Use Composion."
- Inheritance: .
    ask: is XXX a XXX? "is Car a Vehicle? yes, use inheritance. 

# Reference (&) vs Pointer (*)
- Reference is using same var in different name, therefore, it can not be NULL. It must point to a vaild memeory.

A **Pointer** (type*) is a variable that stores a memory address. It is its own distinct entity in memory. You can think of it as a "GPS coordinate" written on a piece of paper. You can erase the paper and write a new coordinate later.

A **Reference** (type&) is an alias. It is just another name for an existing variable. You can think of it as a "nickname." Once you decide that "Bob" is the nickname for "Robert," you can't decide later that "Bob" actually refers to "Charlie."

In class a reference in Constructor handled like a class variable/attribute. But pointers need to be in pointer <u>**function**</u>


In functions/methods:
references be init in constructor. Pointers does not, it set to NULL in constructor and set a setter function to add it "the function parameter" like this:
void HumanB::setWeapon(Weapon& _newWeapon)
{
    this->weapon = &_newWeapon;
}

also be init like this: HumanB::HumanB(std::string _name): name(_name), weaponType(NULL) {}
in class: HumanB(str::string name);
PS: std::string *ptr = &str;
also is used -> in pointer to access the class member. "std::cout << name << " attacks with their " << weapon->getType() << std::endl;"

In reference uses "." dot weapon.getType();

#Summary 

Why the syntax changes for pointers
It can be confusing that we use . for references and -> for pointers. Here is the logic:

Reference (.): A reference is just an alias. The compiler treats weapon.getType() as if you were talking directly to the object.

Pointer (->): A pointer is a memory address.1 To get to the object, the compiler has to dereference the pointer first. weapon->getType() is actually a shortcut for (*weapon).getType().


#Use a Reference (&) when:
You are passing large objects to functions (to avoid copying).
The object must exist (it can't be null).
You want a cleaner syntax (no * or -> everywhere).
Example: Your HumanA class, because he always has a weapon.
Use a Pointer (*) when:
The object is optional (it could be NULL).
You need to change what you are pointing to halfway through the code.
You are dealing with dynamic memory (using new and delete).
Example: Your HumanB class, because he can start unarmed and pick up a weapon later.