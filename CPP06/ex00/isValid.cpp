#include "ScalarConverter.hpp"


// func - 1
bool    isChar(const std::string &literal)
{
    if (literal.length() == 3 && (literal[0] == '\'' && literal[2] == '\''))
    {
        return std::isprint(static_cast<unsigned char>(literal[1]));
    }
    else if (literal.size() == 1 && std::isprint(static_cast<unsigned char>(literal[0])))
    {
        if (isdigit(literal[0]))
            return false;
        return true;
    }
    return false;
}


// func - 2
bool    multiSign(const std::string &literal)
{
    int i = 0;
    int sign = 0;
    while (literal[i])
    {
        if (literal[i] == '+' || literal[i] == '-')
        {
            sign++;
        }
        i++;
    }
    if (sign > 1)
        return true;
    return false;
}

// func - 3
bool    inValidCases(const std::string &literal)
{
    if (literal.empty() || multiSign(literal))
        return true;
    int i = 0;
    while (literal[i])
    {
        if (!std::isprint(literal[i]))
            return true;
        else if (literal.length() == 3 && (literal[0] == '\'' && literal[2] == '\''))
                return false;
        if (literal.length() == 1 && (literal[0] == '+' || literal[0] == '-' ))
            return true;
        if (isspace(literal[i]))
            return true;
        if (ispunct(literal[i]))
        {
            if (literal[i] == '+' || literal[i] == '-' || literal[i] == '.'
                || literal[i] == 'f' || literal[i] == '\'')
            {
                i++;
                continue;
            }
            return true;
        }
        i++;    
    }
    return false;
}

// func - 4
bool    isInt(const std::string &literal)
{
    int n;
    int i = 0;
    if (literal[0] == '+' || literal[0] == '-')
    {
        i++;
        if (literal.size() == 1)
            return false;
    }
    while (literal[i])
    {
        // other char
        if (!isdigit(literal[i]))
            return false;
        i++;
    }
    long value = std::strtol(literal.c_str(), NULL, 10);
    if (value < INT_MIN || value > INT_MAX)
        return false;
    return true;
}


// func  - 5
// bool    isPesudo(const std::string &literal)
// {

// }


// func - 6
bool    isDouble(const std::string &literal)
{
    if ((literal == "nan") || (literal == "+inf") || (literal == "-inf") || literal == "inf")
        return true;
    if (literal.empty())
        return false;
    
    bool    dot = false;
    bool    digit = false;

    size_t i = 0;
    // sign 
    if (literal[i] == '+' || literal[i] == '-')
        i++;
    if (i >= literal.size())
        return false;
    for (; i < literal.size(); i++)
    {
        if (isdigit(literal[i]))
            digit = true;
        else if (literal[i] == '.')
        {
            if (dot)
                return false;
            dot = true;
        }
        else
            return false;
    }
    return dot && digit;
}


// func - 7
bool    isFloat(const std::string &literal)
{
    if (literal == "nanf" || literal == "+inff" || literal == "-inff")
        return  true;
    if (literal[literal.size() - 1] != 'f' || literal.empty())
        return false;
    bool    dot = false;
    bool    digit = false;

    size_t i = 0;
    if (literal[i] == '+' || literal[i] == '-')
        i++;
    if (i >= literal.size() - 1)
        return false;
    for (; i < literal.size() - 1; i++)
    {
        if (isdigit(literal[i]))
            digit = true;
        else if (literal[i] == '.')
        {
            if (dot)
                return false;
            dot = true;
        }
        else
            return false;  
    }
    return dot && digit;
}




// bool    mixCharInt(const std::string &literal)
// {
//     for (int i = 0; literal[i]; i++)
//     {
//         // if (literal[i] >= '0' && literal[i] <= '9')
//         if (isdigit(literal[i]))
//         {
//             if (isChar(std::string(1, literal[i+1])))
//             {
//                 return true;
//             }
//         }
//         i++;
//     }
//     return false;
// }
