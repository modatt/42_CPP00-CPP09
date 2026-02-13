#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <cctype>
#include <cstdlib>
#include <iomanip>
#include <climits>

class ScalarConverter
{
    private:    
        // default
        ScalarConverter();
        //  copy 
        ScalarConverter(const ScalarConverter& cpy);
        // operator
        ScalarConverter&operator=(const ScalarConverter &other);
        // destructor
        ~ScalarConverter();
    public:
        static void convert(const std::string &literal);
};

// helper function
bool    inValidCases(const std::string &literal);
bool    isChar(const std::string &literal);
bool    multiSign(const std::string &literal);
bool    isInt(const std::string &literal);
bool    isDouble(const std::string &literal);
bool    isFloat(const std::string &literal);

void    convertChar(const std::string &literal);
void    convertInt(const std::string &literal);
void    convertFloat(const std::string &literal);
void    convertDouble(const std::string &literal);




#endif