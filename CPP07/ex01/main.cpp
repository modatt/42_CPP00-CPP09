#include <iostream>
#include <string>
#include "iter.hpp"


#include <iostream>
#include <string>
#include "iter.hpp"

// ==========================
// Functions for testing
// ==========================

// Read-only function
template <typename T>
void print(const T& x)
{
    std::cout << x << " ";
}

// Modify function (for numeric types)
template <typename T>
void increment(T& x)
{
    x += 1;
}

// Special function for std::string
void addExclamation(std::string& s)
{
    s += "!";
}

// ==========================
// MAIN
// ==========================

int main()
{
    std::cout << "===== INT ARRAY TEST =====" << std::endl;

    int arr[] = {1, 2, 3, 4, 5};
    size_t len = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original: ";
    iter(arr, len, print<int>);
    std::cout << std::endl;

    iter(arr, len, increment<int>);

    std::cout << "After increment: ";
    iter(arr, len, print<int>);
    std::cout << "\n\n";


    std::cout << "===== CONST INT ARRAY TEST =====" << std::endl;

    const int carr[] = {10, 20, 30};
    size_t clen = sizeof(carr) / sizeof(carr[0]);

    std::cout << "Const array: ";
    iter(carr, clen, print<int>);
    std::cout << std::endl;

    // This should NOT compile (good test)
    // iter(carr, clen, increment<int>);

    std::cout << "\n";


    std::cout << "===== DOUBLE ARRAY TEST =====" << std::endl;

    double darr[] = {1.5, 2.5, 3.5};
    size_t dlen = sizeof(darr) / sizeof(darr[0]);

    std::cout << "Original: ";
    iter(darr, dlen, print<double>);
    std::cout << std::endl;

    iter(darr, dlen, increment<double>);

    std::cout << "After increment: ";
    iter(darr, dlen, print<double>);
    std::cout << "\n\n";


    std::cout << "===== STRING ARRAY TEST =====" << std::endl;

    std::string sarr[] = {"Hello", "World", "Iter"};
    size_t slen = sizeof(sarr) / sizeof(sarr[0]);

    std::cout << "Original: ";
    iter(sarr, slen, print<std::string>);
    std::cout << std::endl;

    iter(sarr, slen, addExclamation);

    std::cout << "After modification: ";
    iter(sarr, slen, print<std::string>);
    std::cout << "\n\n";

    std::cout << "HHHHHHHHHHHHHHHHHHHHHHHHHH\n";
    std::cout << "===== EMPTY ARRAY TEST =====" << std::endl;

    int empty[0];
    iter(empty, 0, print<int>);

    std::cout << "No crash ✔" << std::endl;

    return 0;
}





























// #include <iostream>

// #include <string>
// #include "iter.hpp"

// // -------------------------------------------------------------------------
// // Helper Functions for Testing
// // -------------------------------------------------------------------------

// // 1. A simple function template (Instantiated function template)
// template <typename T>
// void printElement(const T &elem) {
//     std::cout << elem << " ";
// }

// // 2. A function that modifies the element (Non-const reference)
// void increment(int &n) {
//     n++;
// }

// // 3. A function that works with a specific type (Const reference)
// void printIntEven(const int &n) {
//     if (n % 2 == 0)
//         std::cout << n << " (Even) ";
//     else
//         std::cout << n << " (Odd) ";
// }

// // -------------------------------------------------------------------------
// // Main
// // -------------------------------------------------------------------------

// int main() {
//     std::cout << "=== Test 1: Integer Array (Modification) ===" << std::endl;
//     int intArray[] = {1, 2, 3, 4, 5};
//     size_t intLen = 5;

//     std::cout << "Original: ";
//     // Use the template function instantiated for int
//     iter(intArray, intLen, printElement<int>); 
//     std::cout << std::endl;

//     std::cout << "Incrementing..." << std::endl;
//     iter(intArray, intLen, increment);

//     std::cout << "Modified: ";
//     iter(intArray, intLen, printElement<int>);
//     std::cout << std::endl << std::endl;

//     // ---------------------------------------------------------

//     std::cout << "=== Test 2: Const Correctness (Int array -> Const func) ===" << std::endl;
//     // Here we pass a non-const array, but the function takes a const ref.
//     // This tests if your template handles implicit qualification conversion.
//     iter(intArray, intLen, printIntEven);
//     std::cout << std::endl << std::endl;

//     // ---------------------------------------------------------

//     std::cout << "=== Test 3: String Array ===" << std::endl;
//     std::string strArray[] = {"Hello", "World", "from", "42"};
//     size_t strLen = 4;

//     std::cout << "Strings: ";
//     // Instantiated template for string
//     iter(strArray, strLen, printElement<std::string>); 
//     std::cout << std::endl << std::endl;

//     // ---------------------------------------------------------

//     std::cout << "=== Test 4: Const Array ===" << std::endl;
//     const float floatArray[] = {1.1f, 2.2f, 3.3f};
    
//     std::cout << "Const Float: ";
//     iter(floatArray, 3, printElement<float>);
//     std::cout << std::endl;

//     return 0;
// }