#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Form 
{
    private:
        const std::string name;
        bool is_signed;
        const int gradeSign;
        const int gradeExe;
    public:
    Form();
    Form(const std::string _name, const int _gradeSign, const int _gradeExe);
    Form(const Form &cpy);
};

#endif 