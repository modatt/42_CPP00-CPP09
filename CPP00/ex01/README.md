**Goal**: Write a program that behaves like a phonebook software.

**Requirments** 

- Having 2 classes:
    1. PhoneBook:
        - Array of contacts of size of 8.
        - Max number of contacts for the phonebook is 8, the 9th replaces the oldest contact.
        - No dynamic allocation is allowed.
    2. Contact:
        - Contact information.

**Program Logic**

Having a phonebook software, once you open it it keeps running and waits for your inputs then takes it to implement it, after finishing it return to waiting mode.

<u>Inside an infinite loop:</u>
1. Waiting mode displaying enter options (ADD, SEARCH, EXIT).
2. Recieve an option, store it in a string then takes to to be processed.
    - if (option == "ADD")
        action: pb.addContact();
    - if (option == "SEARCH")
        action: pb.searchContact();
    - if (option == "EXIT")
        action: break;
    - else 
        action: std::cout << "Invalid Input.\n";
<u>outside the infinite loop:</u> // optional
3. Goodbye message.
    
**Classes Logic**

- It requires 2 classes:
    1. <u>PhoneBook</u>: main one that we would need in main to do actions ADD & SEARCH. 
        since ADD & SEARCH needed outside the class it means they are public functions.
        In addition to, Contacts[8] to store the contacts we add and search in the array for a contact. 
        but since Contact is something mustn't be modified since I will ONLY add "not edit" and search "only look" it goes to private data. 
        helper variales also no need to be used by the user or outside it class, int contactCount to keep tracking the max size allowed of the phonebook contacts which is 8. In addition to, int index which is required from the subject to display in search action and based on it the user chose which contact wants to get its info. 

        In more advance logic, we will need a private/helper function uses inside the phonebook class not needed outside it. columnFormat to help display the table of contacts to seach in it. It ensure that the text does not exceed the required length 10 and if does display it based on the requirments in the subject first 9 + 10th is a dot ".".

        In public class there is a Constructor function and it placed there due to init the variables "int type". Only once at the beginning of the file.
    2. <u>Contact</u>: secondary/ helper class. It is a class to have the contact info each single one and be added to the contact array in the PhoneBook class. 
        Logically, I have a PhoneBook it has contacts, to program it I need to have a contact tab has its own info and share variables "categorey/labels" in excel sense, I do them once then I use then in the database where I query/action like add & search. 

        So, the contact class would have in <u>private</u>:
            needed data of a contact (first, last nick name, phone number,and darkest secret) based on the subject request. 
        In <u>public</u>:
            setter & getters functions. Why? becasue the action add means the user will enter inputs I need to set it to contact data for each object/contact it would be created by the user.

            Setter: for and object created in phonebook it uses a setter function to add the value to set(first, last, nick name, phone number, and darkest secret).

            Getter is for action search, whereas, I need to display the contact infos requested by the subject. Thus, get(first, last, nick name, phone number, and darkest secret). They will be follow the format rules for the contact table. 

**Code/ Functions**


**Contact**:
1. Setter: Assign the parameter to to contact variable/data.
    void    Contact::setXXX(std::string last) // user input
    {
        XXXX = xxxx;
    }
2. Getter: only return the data/variables.
    std::string     Contact::getXXXX() const
    {
        return XXX;
    }


**PhoneBook**:

Here is the logic of the program.
// func - 0 // setup - init class variables
PhoneBook::PhoneBook() : contactCount(0), index(0) {};

// func - 1 // helper function // const >> means read only "can not modify // & means its reference "another name of a variable passed to this function somewhere else" not a copy anything we apply here it applies on it whenever it exist and whatever its name. 

std::string    PhoneBook::columnFormat(const std::string &text) const
{
    if (text.length() > 10)
        return text.substr(0, 9) + ".";
    return text;
}

// func - 2  // add contact
void    PhoneBook::addContact(void)
{
    // for each column variable
       std::string first, last, nick, number, secret;
       1. display the filed to enter.
       2. store input in its variable: std::getline(std::cin, column_variable);

    // check if any filed is empty if so display error & return ;.
    // store contact: using contact class setter functions. 
    // store contact in PhoneBook. 
    // increase index in wrapping way:
        index = (index + 1) %8;
        the idea here is when its from 0-6 it will add 1 make it equals to index++, but the trick here when now index = 7 + 1 the result = 8 mod 8, it will be 0. The rest of dividing 8/8 is zero no rest in it. Which is mean it return to index = 0. like looping/circyling only around the required range.
    // check if it exceeds the max size of contacts for phonebook.
    // if contactCount < 8 // less than max contactCount++.
    // print contact added.
}


// func - 3 // search contact
void    PhoneBook::searchContact(void)
{
    // Check if is PhoneBook is empty
    // Print table header
    // Print Contact table
    // Get index from user
    // Check index validation
        // here print error message then std::cin.clear() to clear its error flag to be used agin.
        Then use std::cin.ignore(10000, '\n);
            Skips up to 10,000 characters or until a newline \n is found, whichever comes first. Effectively clears the rest of the line from the input buffer. In other words, “Ignore (throw away) everything the user typed on this line until you reach the Enter key (newline). Stop after 10,000 characters if the user typed a lot.”
    // clean the cin after taking inputs to avoid \n issue for std::getline(). 
        std::cin.ignore(10000, '\n'); // it removes the leftover \n (or any extra characters the user typed) from the input buffer.
        If you later do another std::getline() (common in your program), it will immediately read that leftover \n as an empty line.

This makes your program skip input prompts unexpectedly.

    // Display full contac info filed by filed divided by \n.
}

Class Initialization in C++ (Summary)
Ways to initialize a class object:

Member initializer list (preferred)

PhoneBook::PhoneBook() : contactCount(0), index(0) {}


Real initialization

Required for const and reference members

More efficient

Assignment in constructor body

PhoneBook::PhoneBook() {
    contactCount = 0;
    index = 0;
}


Not real initialization (assignment after creation)

Less efficient

Cannot be used for const or references

Default member initialization (C++11+)

class PhoneBook {
    int contactCount = 0;
    int index = 0;
};


Constructor can be empty

Clean and modern

Parameterized constructor

PhoneBook::PhoneBook(int c, int i) : contactCount(c), index(i) {}


Copy constructor

PhoneBook::PhoneBook(const PhoneBook& other)
    : contactCount(other.contactCount), index(other.index) {}

Constructor vs Initialization

Constructor: a function called when an object is created

Initialization: giving members their first value

Concept	Meaning
Initializer list	True initialization (before object exists)
Constructor body	Assignment (after object exists)
Key Rules

Initializer list runs before constructor body

Always prefer initializer lists

Mandatory for const and reference members
