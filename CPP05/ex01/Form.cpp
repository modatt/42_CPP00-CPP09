#include "Form.hpp"

// constructor
Form::Form() {};

// parameter constructor 
Form:Form(std::string _name, int _gradeSign, int _gradeExe): name(_name), is_signed(false), gradeSign(_gradeSign), gradeExe(_gradeExe) {};

// cpy constructor
Form::Form(const Form &cpy) : name(cpy.name), gradeSign(cpy.gradeSign), gradeExe(cpy.gradeExe) {};

// operator = constructor 
