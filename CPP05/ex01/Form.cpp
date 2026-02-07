#include "Form.hpp"

// func - 1
//defaultconstructor

Form::Form() : name("Default"), is_signed(false), gradeSign(150), gradeExe(150) {};

// func - 2
// parameter constructor 
Form::Form(std::string _name, int _gradeSign, int _gradeExe): name(_name), is_signed(false), gradeSign(_gradeSign), gradeExe(_gradeExe)
{
	if (gradeSign < 1 || gradeExe < 1)
		throw Form::GradeTooHighException();
	if (gradeSign > 150 || gradeExe > 150)
		throw Form::GradeTooLowException();
}

// func - 3
// cpy constructor
Form::Form(const Form &cpy) : name(cpy.name), is_signed(cpy.is_signed), gradeSign(cpy.gradeSign), gradeExe(cpy.gradeExe) {};

// func - 4 // operator = constructor 
Form& Form::operator=(const Form &other)
{
	if ( this != &other)
		this->is_signed = other.is_signed;
	return *this;
}

// func - 5 // destructor
Form::~Form() {};

// getters and setters

// func - 6
const std::string Form::getName() const{
	return name;
}

// func - 7
 int Form::getGradeSign() const {
	return gradeSign;
}

// func - 8
 int Form::getGradeExe() const {
	return gradeExe;
}

// func - 9
bool Form::getIsSigned() const {
	return is_signed;
}


// exception what() functions
// func - 10
const  char* Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

// func - 11
const char*  Form::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

// func - 12
std::ostream& operator<<(std::ostream& out, const Form& form)
{
	out << "From name: " << form.getName()
		<< "\nis_signed: " << (	form.getIsSigned() ? "true" : "false")
		<< "\ngradeSign: " << form.getGradeSign()
		<< "\ngradeExe: " << form.getGradeExe()
		<< std::endl;
	return out;
}

// func - 13
void Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <= this->gradeSign)
		this->is_signed = true;
	else
		throw Form::GradeTooLowException();
}