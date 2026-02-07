#include "AForm.hpp"
#include "Bureaucrat.hpp"

// func - 1
//defaultconstructor

AForm::AForm() : name("Default"), is_signed(false), gradeSign(150), gradeExe(150) {};

// func - 2
// parameter constructor 
AForm::AForm(std::string _name, int _gradeSign, int _gradeExe): name(_name), is_signed(false), gradeSign(_gradeSign), gradeExe(_gradeExe)
{
	if (gradeSign < 1 || gradeExe < 1)
		throw AForm::GradeTooHighException();
	if (gradeSign > 150 || gradeExe > 150)
		throw AForm::GradeTooLowException();
}

// func - 3
// cpy constructor
AForm::AForm(const AForm &cpy) : name(cpy.name), is_signed(cpy.is_signed), gradeSign(cpy.gradeSign), gradeExe(cpy.gradeExe) {};

// func - 4 // operator = constructor 
AForm& AForm::operator=(const AForm &other)
{
	if ( this != &other)
		this->is_signed = other.is_signed;
	return *this;
}

// func - 5 // destructor
AForm::~AForm() {};

// getters and setters

// func - 6
const std::string AForm::getName() const{
	return name;
}

// func - 7
 int AForm::getGradeSign() const {
	return gradeSign;
}

// func - 8
 int AForm::getGradeExe() const {
	return gradeExe;
}

// func - 9
bool AForm::getIsSigned() const {
	return is_signed;
}


// exception what() functions
// func - 10
const  char* AForm::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

// func - 11
const char*  AForm::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

// func - 12
std::ostream& operator<<(std::ostream& out, const AForm& form)
{
	out << "From name: " << form.getName()
		<< "\nis_signed: " << (	form.getIsSigned() ? "true" : "false")
		<< "\ngradeSign: " << form.getGradeSign()
		<< "\ngradeExe: " << form.getGradeExe()
		<< std::endl;
	return out;
}

// func - 13
void AForm::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <= this->gradeSign)
		this->is_signed = true;
	else
		throw AForm::GradeTooLowException();
}

// execute with checks then call concrete action
void AForm::execute(const Bureaucrat& executor) const
{
	if (!this->is_signed)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->gradeExe)
		throw AForm::GradeTooLowException();
	this->executeAction();
}

const char* AForm::FormNotSignedException::what() const throw()
{
	return "Form is not signed";
}