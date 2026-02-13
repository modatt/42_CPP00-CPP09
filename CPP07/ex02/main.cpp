#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}










// #include <iostream>
// #include <string>
// #include <cstdlib>
// #include <ctime>
// #include "Array.hpp"

// #define SEP std::cout << "\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n";

// static void testException(Array<int>& arr, int index)
// {
//     try
//     {
//         std::cout << "Trying index " << index << "...\n";
//         std::cout << arr[index] << std::endl;
//         std::cout << "❌ ERROR: No exception thrown!\n";
//     }
//     catch (std::exception &e)
//     {
//         std::cout << "✅ Exception correctly thrown\n";
//     }
// }

// int main()
// {
//     std::cout << "\n╔════════════════════════════════════════════════╗\n";
//     std::cout << "║    COMPREHENSIVE ARRAY TEMPLATE TEST SUITE    ║\n";
//     std::cout << "╚════════════════════════════════════════════════╝\n";
    
//     std::srand(std::time(0));

//     SEP
//     std::cout << "1️⃣ TEST: Empty Array\n";
//     Array<int> empty;
//     std::cout << "Size: " << empty.size() << std::endl;

//     testException(empty, 0);
//     testException(empty, 5);

//     SEP
//     std::cout << "2️⃣ TEST: Size Constructor + Default Init\n";
//     Array<int> a(5);

//     for (unsigned int i = 0; i < a.size(); i++)
//         std::cout << "a[" << i << "] = " << a[i] << std::endl;

//     SEP
//     std::cout << "3️⃣ TEST: Negative index (forced cast)\n";
//     testException(a, -1);

//     SEP
//     std::cout << "4️⃣ TEST: Boundary Conditions\n";
//     std::cout << "Valid access at last index: ";
//     try
//     {
//         std::cout << a[4] << " ✅\n";
//     }
//     catch (...)
//     {
//         std::cout << "❌ Should not throw\n";
//     }
//     testException(a, 5);   // invalid (out of bounds)
//     testException(a, 100); // invalid (way out of bounds)

//     SEP
//     std::cout << "5️⃣ TEST: Deep Copy (Copy Constructor)\n";
//     for (unsigned int i = 0; i < a.size(); i++)
//         a[i] = i * 10;

//     Array<int> copy(a);

//     copy[0] = 999;

//     std::cout << "Original[0]: " << a[0] << std::endl;
//     std::cout << "Copy[0]:     " << copy[0] << std::endl;

//     if (a[0] != copy[0])
//         std::cout << "✅ Deep copy works\n";
//     else
//         std::cout << "❌ Deep copy FAILED\n";

//     SEP
//     std::cout << "6️⃣ TEST: Assignment Operator (Different Sizes)\n";
//     Array<int> assign(3);
//     std::cout << "Before assignment - assign.size(): " << assign.size() << std::endl;
//     assign = a;
//     std::cout << "After assignment - assign.size(): " << assign.size() << std::endl;

//     assign[1] = 888;

//     std::cout << "Original[1]: " << a[1] << std::endl;
//     std::cout << "Assigned[1]: " << assign[1] << std::endl;

//     if (a[1] != assign[1] && assign.size() == a.size())
//         std::cout << "✅ Assignment deep copy works (with size change)\n";
//     else
//         std::cout << "❌ Assignment FAILED\n";

//     SEP
//     std::cout << "7️⃣ TEST: Chained Assignment\n";
//     Array<int> chain1(2);
//     Array<int> chain2(3);
//     Array<int> chain3(4);
    
//     chain3[0] = 111;
//     chain3[1] = 222;
//     chain3[2] = 333;
//     chain3[3] = 444;
    
//     chain1 = chain2 = chain3;
    
//     if (chain1.size() == 4 && chain2.size() == 4 && 
//         chain1[0] == 111 && chain2[0] == 111)
//         std::cout << "✅ Chained assignment works\n";
//     else
//         std::cout << "❌ Chained assignment FAILED\n";

//     SEP
//     std::cout << "8️⃣ TEST: Self Assignment\n";
//     assign = assign;
//     std::cout << "Size after self-assignment: " << assign.size() << std::endl;
//     if (assign.size() == a.size())
//         std::cout << "✅ No crash on self-assignment\n";
//     else
//         std::cout << "❌ Self-assignment broke the array\n";

//     SEP
//     std::cout << "8️⃣ TEST: Self Assignment\n";
//     assign = assign;
//     std::cout << "Size after self-assignment: " << assign.size() << std::endl;
//     if (assign.size() == a.size())
//         std::cout << "✅ No crash on self-assignment\n";
//     else
//         std::cout << "❌ Self-assignment broke the array\n";

//     SEP
//     std::cout << "9️⃣ TEST: Verify ALL Elements Are Copied\n";
//     Array<int> allElems(100);
//     for (unsigned int i = 0; i < allElems.size(); i++)
//         allElems[i] = i * 7;
    
//     Array<int> allCopy(allElems);
    
//     bool allMatch = true;
//     for (unsigned int i = 0; i < allElems.size(); i++)
//     {
//         if (allElems[i] != allCopy[i])
//         {
//             allMatch = false;
//             std::cout << "❌ Mismatch at index " << i << std::endl;
//             break;
//         }
//     }
    
//     if (allMatch)
//         std::cout << "✅ All 100 elements copied correctly\n";

//     SEP
//     std::cout << "🔟 TEST: Size 1 Array (Edge Case)\n";
//     Array<int> single(1);
//     single[0] = 42;
//     std::cout << "single[0] = " << single[0] << std::endl;
    
//     testException(single, 1);
    
//     Array<int> singleCopy(single);
//     singleCopy[0] = 99;
//     if (single[0] == 42 && singleCopy[0] == 99)
//         std::cout << "✅ Size 1 array works correctly\n";
//     else
//         std::cout << "❌ Size 1 array FAILED\n";

//     SEP
//     std::cout << "1️⃣1️⃣ TEST: Const Access\n";
//     const Array<int> constArr(a);

//     try
//     {
//         std::cout << constArr[2] << std::endl;
//         std::cout << "✅ Const operator[] works\n";
//     }
//     catch (...)
//     {
//         std::cout << "❌ Const operator[] FAILED\n";
//     }

//     SEP
//     std::cout << "1️⃣1️⃣ TEST: Const Access\n";
//     const Array<int> constArr(a);

//     try
//     {
//         std::cout << "constArr[2] = " << constArr[2] << std::endl;
//         std::cout << "✅ Const operator[] works\n";
//     }
//     catch (...)
//     {
//         std::cout << "❌ Const operator[] FAILED\n";
//     }
    
//     // Verify const throws on out of bounds
//     try
//     {
//         std::cout << constArr[100] << std::endl;
//         std::cout << "❌ Const operator[] should throw\n";
//     }
//     catch (...)
//     {
//         std::cout << "✅ Const operator[] throws on invalid index\n";
//     }

//     SEP
//     std::cout << "1️⃣2️⃣ TEST: Large Allocation + Random Values\n";
//     Array<int> big(10000);

//     for (unsigned int i = 0; i < big.size(); i++)
//         big[i] = std::rand();

//     bool ok = true;
//     for (unsigned int i = 0; i < big.size(); i++)
//     {
//         if (big[i] < 0) // impossible check just to access
//         {
//             ok = false;
//             break;
//         }
//     }

//     if (ok)
//         std::cout << "✅ Large array works\n";
//     else
//         std::cout << "❌ Large array FAILED\n";

//     SEP
//     std::cout << "1️⃣2️⃣ TEST: Large Allocation + Random Values\n";
//     Array<int> big(10000);

//     for (unsigned int i = 0; i < big.size(); i++)
//         big[i] = std::rand();

//     bool ok = true;
//     for (unsigned int i = 0; i < big.size(); i++)
//     {
//         if (big[i] < 0) // impossible check just to access
//         {
//             ok = false;
//             break;
//         }
//     }

//     if (ok)
//         std::cout << "✅ Large array (10000 elements) works\n";
//     else
//         std::cout << "❌ Large array FAILED\n";

//     SEP
//     std::cout << "1️⃣3️⃣ TEST: Different Template Type (std::string)\n";
//     Array<std::string> words(3);
//     words[0] = "Hello";
//     words[1] = "C++";
//     words[2] = "World";

//     std::cout << words[0] << " " << words[1] << " " << words[2] << std::endl;
    
//     Array<std::string> wordsCopy(words);
//     wordsCopy[1] = "Templates";
    
//     if (words[1] == "C++" && wordsCopy[1] == "Templates")
//         std::cout << "✅ String array deep copy works\n";
//     else
//         std::cout << "❌ String array FAILED\n";

//     SEP
//     std::cout << "1️⃣4️⃣ TEST: Different Template Type (char)\n";
//     Array<char> chars(5);
//     chars[0] = 'A';
//     chars[1] = 'r';
//     chars[2] = 'r';
//     chars[3] = 'a';
//     chars[4] = 'y';
    
//     for (unsigned int i = 0; i < chars.size(); i++)
//         std::cout << chars[i];
//     std::cout << " ✅\n";

//     SEP
//     std::cout << "1️⃣5️⃣ TEST: Different Template Type (float)\n";
//     Array<float> floats(3);
//     floats[0] = 3.14f;
//     floats[1] = 2.71f;
//     floats[2] = 1.41f;
    
//     std::cout << "floats[0] = " << floats[0] << " ✅\n";
//     std::cout << "floats[1] = " << floats[1] << " ✅\n";
//     std::cout << "floats[2] = " << floats[2] << " ✅\n";

//     SEP
//     std::cout << "1️⃣6️⃣ TEST: Exception After Copy\n";
//     SEP
//     std::cout << "1️⃣6️⃣ TEST: Exception After Copy\n";
//     try
//     {
//         copy[500];
//         std::cout << "❌ No exception thrown\n";
//     }
//     catch (...)
//     {
//         std::cout << "✅ Exception still works after copy\n";
//     }

//     SEP
//     std::cout << "1️⃣7️⃣ TEST: Multiple Assignments\n";
//     Array<int> multi1(5);
//     Array<int> multi2(10);
//     Array<int> multi3(3);
    
//     for (unsigned int i = 0; i < multi1.size(); i++)
//         multi1[i] = i;
    
//     multi2 = multi1;
//     multi3 = multi2;
    
//     bool multiOk = true;
//     if (multi1.size() != 5 || multi2.size() != 5 || multi3.size() != 5)
//         multiOk = false;
    
//     for (unsigned int i = 0; i < 5 && multiOk; i++)
//     {
//         if (multi1[i] != i || multi2[i] != i || multi3[i] != i)
//             multiOk = false;
//     }
    
//     if (multiOk)
//         std::cout << "✅ Multiple sequential assignments work\n";
//     else
//         std::cout << "❌ Multiple assignments FAILED\n";

//     SEP
//     std::cout << "1️⃣8️⃣ TEST: Empty to Non-Empty Assignment\n";
//     Array<int> emptyArr;
//     Array<int> fullArr(10);
    
//     for (unsigned int i = 0; i < fullArr.size(); i++)
//         fullArr[i] = i * 2;
    
//     emptyArr = fullArr;
    
//     if (emptyArr.size() == 10 && emptyArr[5] == 10)
//         std::cout << "✅ Empty to non-empty assignment works\n";
//     else
//         std::cout << "❌ Empty to non-empty FAILED\n";

//     SEP
//     std::cout << "1️⃣9️⃣ TEST: Non-Empty to Empty Assignment\n";
//     Array<int> full2(7);
//     Array<int> empty2;
    
//     full2 = empty2;
    
//     if (full2.size() == 0)
//         std::cout << "✅ Non-empty to empty assignment works\n";
//     else
//         std::cout << "❌ Non-empty to empty FAILED\n";

//     SEP
//     std::cout << "🏁 ALL EDGE TESTS COMPLETED 🏁\n";
//     std::cout << "Total: 19 comprehensive test suites\n";
// }
