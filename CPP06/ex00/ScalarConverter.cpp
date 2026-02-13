#include "ScalarConverter.hpp"




// // default
ScalarConverter::ScalarConverter() {};
//  copy 
ScalarConverter::ScalarConverter(const ScalarConverter& cpy)
{
   (void)cpy;
}
// operator
ScalarConverter&    ScalarConverter::operator=(const ScalarConverter &other)
{
    (void)other;
    return *this;
}
// destructor
ScalarConverter::~ScalarConverter() {};



void    convertChar(const std::string &literal)
{
    char c = literal[0];
    if (isprint(c))
        std::cout << "char: '" << c << "'\n";
    else
        std::cout << "char: Non displayable\n";

    int n = static_cast<unsigned int>(c);
    std::cout << "int: " << n << std::endl;
    
    std::cout << std::fixed << std::setprecision(1);
    float f = static_cast<float>(c);
    std::cout << "float: " << f << "f" << std::endl;

    double d = static_cast<double>(c);
    std::cout << "double: " << d <<std::endl;
}

void    convertInt(const std::string &literal)
{
    int n = atoi(literal.c_str());
    char c = static_cast<char>(n);
    float f = static_cast<float>(n);
    double d = static_cast<double>(n);

    if (n < 0 || n > 127)
        std::cout << "char: impossible\n";
    else if (!std::isprint(c))
        std::cout << "char: Non displayable\n";
    else
        std::cout << "char: '" << c << "'\n";
    std::cout << "int: " << n << "\n";
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << f << "f\n";
    std::cout << "double: " << d << "\n";
}

void    convertFloat(const std::string &literal)
{
    float f = strtof(literal.c_str(), NULL);
    char c = static_cast<char>(f);
    int n = static_cast<int>(f);
    double d = static_cast<double>(f);

    if (f < 0 || f > 127 || std::isnan(f) || std::isinf(f))
        std::cout << "char: impossible\n";
    else if (!isprint(c))
        std::cout << "char: Non displayable\n";
    else
        std::cout << "char: '" << c << "'\n";
    
    if (std::isnan(f) || std::isinf(f))
        std::cout << "int: impossible\n";
    else
        std::cout << "int: " << n << std::endl;
    
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << f << "f\n";
    std::cout << "double: " << d << "\n";
        
}

void    convertDouble(const std::string &literal)
{
    double d = strtod(literal.c_str(), NULL);

    char c = static_cast<char>(d);
    int n = static_cast<int>(d);
    float f = static_cast<float>(d);

    if (std::isnan(d) || std::isinf(d) || d < 0 || d > 127)
        std::cout << "char: impossible\n";
    else if (!isprint(c))
        std::cout << "char: Non displayable\n";
    else
        std::cout << "char: '" << c << "'\n";
    
    if (std::isnan(d) || std::isinf(d))
        std::cout << "int: impossible\n";
    else 
        std::cout << "int: " << n << "\n";
    
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << f << "f\n";
    std::cout << "double: " << d << "\n";
}


void ScalarConverter::convert(const std::string &literal)
{
    // if (literal.length() == 1 && std::isprint(static_cast<unsigned char>(literal[0])))
   // 1. determine the type of the literal
   if (inValidCases(literal))
        std::cout << "invalid cases\n";
   else if (isChar(literal))
   {
        // handle char
        // std::cout << "char\n";
        convertChar(literal);
   }
   else if (isInt(literal))
   {
        // std::cout << "int\n";
        convertInt(literal);
   }
   else if (isDouble(literal))
   {
        // std::cout << "double\n";
        convertDouble(literal);
   }
   else if (isFloat(literal))
   {
        // std::cout << "float\n";
        convertFloat(literal);
   }
   else
        std::cout << "invalid input\n";
}

