**Goal**: re-write the missing file guided by a header & log file to reverse engineering coding. 

**Logic**

Looking into the heaer:

public:
    typedef Account t; // mean another name for the class.
    static functions
        //getter functions here is a static.
    //static mean global accessable out of the function scope.


private: 
    // static variables work as global variables, also it init out of a function scope and used by all of them. 


**Code Implementation**

// first: setup - init static variables // it is a must like in global vars
// no need to use static keyword
int     Account::_nbAccounts = 0;
int	    Account::_totalAmount = 0;
int	    Account::_totalNbDeposits = 0;
int     Account::_totalNbWithdrawals = 0;

// static functions 
The getters are static, only return the XXX var related to the getXXX() func.
int     Account::getXXX(void)
{
    return XXXX;
}

// Constructor since it exist/enforced to be used
// init all private/normal non-static variables.
// also it mentioned in private
// its primary job is to initialize an object to a valid state the moment it is created.
// like in building a struct we need to initialize it. 
// Constructor inside private means its only used inside the class meaning who wrote the class and its used through the class function. If you inharet/ or not it would not be able to access it. 


// Destructor
// 1. What is a Destructor in General?
A destructor is a special member function that is called automatically when an object is about to be destroyed. This happens when:
An object goes out of scope (e.g., a function ends, and its local variables are removed).
The program ends (for global/static objects).
You manually use delete on an object created with new.

// 2. Key Characteristics
Unique Name: It has the exact same name as the class, but with a tilde (~) in front (e.g., ~Account()).
No Arguments/Returns: It cannot take any parameters and cannot return any value.
Only One: Unlike constructors, you cannot have multiple destructors (no "overloading"). There is only one way to destroy an object.
Automatic: You almost never call it yourself; the C++ compiler handles it.


// normal/public functions 

// To check this exercise output:
# Redirect your output to a file, then compare while ignoring the first 19 chars
./account | cut -c 18- > my_log.txt
cat 19920104_091532.log | cut -c 18- > original_log.txt
diff my_log.txt original_log.txt 