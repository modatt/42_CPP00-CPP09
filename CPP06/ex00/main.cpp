#include "ScalarConverter.hpp"




// true main

int     main(int ac, char **av)
{

    if (ac != 2)
    {
        std::cerr << "too many/few args\n";
        return 1;
    }
    ScalarConverter::convert(av[1]);
    return 0;
}






// #include "ScalarConverter.hpp"

// int main(void)
// {
//     /* ========== CHAR (valid) ========== */
//     ScalarConverter::convert("a");
//     // ScalarConverter::convert("Z");
//     // ScalarConverter::convert("0");
//     // ScalarConverter::convert("!");
//     // ScalarConverter::convert("'a'");
//     // ScalarConverter::convert("'Z'");
//     // ScalarConverter::convert("'0'");
//     // ScalarConverter::convert("'!'");

//     // /* ========== CHAR (invalid) ========== */
//     // ScalarConverter::convert("");
//     // ScalarConverter::convert("ab");
//     // ScalarConverter::convert("''");
//     // ScalarConverter::convert("'ab'");
//     // ScalarConverter::convert("\n");

//     /* ========== INT (valid) ========== */
//     ScalarConverter::convert("0");
//     ScalarConverter::convert("1");
//     // ScalarConverter::convert("42");
//     // ScalarConverter::convert("-42");
//     // ScalarConverter::convert("+42");
//     // ScalarConverter::convert("2147483647");
//     // ScalarConverter::convert("-2147483648");
//     // ScalarConverter::convert("01");
//     // ScalarConverter::convert("000123");

//     // /* ========== INT (invalid) ========== */
//     // ScalarConverter::convert("+");
//     // ScalarConverter::convert("-");
//     // ScalarConverter::convert("--42");
//     // ScalarConverter::convert("++42");
//     // ScalarConverter::convert("42a");
//     // ScalarConverter::convert("a42");
//     // ScalarConverter::convert("42.0");
//     // ScalarConverter::convert("42f");
//     // ScalarConverter::convert("2147483648");
//     // ScalarConverter::convert("-2147483649");
//     // ScalarConverter::convert(" 42");
//     // ScalarConverter::convert("42 ");
//     // ScalarConverter::convert("\n42");
//     // ScalarConverter::convert("42\n");

//     // /* ========== FLOAT (valid) ========== */
//     // ScalarConverter::convert("0.0f");
//     // ScalarConverter::convert("1.0f");
//     // ScalarConverter::convert("42.0f");
//     // ScalarConverter::convert("-4.2f");
//     // ScalarConverter::convert("+4.2f");
//     // ScalarConverter::convert("0.0001f");

//     // /* ========== FLOAT (pseudo-literals) ========== */
//     // ScalarConverter::convert("nanf");
//     // ScalarConverter::convert("+inff");
//     // ScalarConverter::convert("-inff");

//     // /* ========== FLOAT (invalid) ========== */
//     // ScalarConverter::convert("4f");
//     // ScalarConverter::convert("4.f");
//     // ScalarConverter::convert(".4f");
//     // ScalarConverter::convert("4.2ff");
//     // ScalarConverter::convert("nan");
//     // ScalarConverter::convert("+inf");
//     // ScalarConverter::convert("-inf");
//     // ScalarConverter::convert("4.2");
//     // ScalarConverter::convert("1e3f");
//     // ScalarConverter::convert(" 4.2f");
//     // ScalarConverter::convert("4.2f ");

//     // /* ========== DOUBLE (valid) ========== */
//     // ScalarConverter::convert("0.0");
//     // ScalarConverter::convert("1.0");
//     // ScalarConverter::convert("42.0");
//     // ScalarConverter::convert("-4.2");
//     // ScalarConverter::convert("+4.2");
//     // ScalarConverter::convert("0.0001");

//     // /* ========== DOUBLE (pseudo-literals) ========== */
//     // ScalarConverter::convert("nan");
//     // ScalarConverter::convert("+inf");
//     // ScalarConverter::convert("-inf");

//     // /* ========== DOUBLE (invalid) ========== */
//     // ScalarConverter::convert("4.");
//     // ScalarConverter::convert(".4");
//     // ScalarConverter::convert("4.2f");
//     // ScalarConverter::convert("nanf");
//     // ScalarConverter::convert("+inff");
//     // ScalarConverter::convert("-inff");
//     // ScalarConverter::convert("1e3");
//     // ScalarConverter::convert(" 4.2");
//     // ScalarConverter::convert("4.2 ");

//     // /* ========== GLOBAL INVALID ========== */
//     // ScalarConverter::convert(" ");
//     // ScalarConverter::convert("\t");
//     // ScalarConverter::convert("\n");
//     // ScalarConverter::convert("4 2");

//     return 0;
// }













