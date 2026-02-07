#include "Bureaucrat.hpp"

// Constructors and Destructor
Bureaucrat::Bureaucrat() : name("default"), grade(150) {}

Bureaucrat::Bureaucrat(const Bureaucrat& cpy) : name(cpy.name), grade(cpy.grade) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) 
{
    if (this != &other) 
    {
        this->grade = other.grade;
    }
    return *this;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name) 
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
    this->grade = grade;
}

Bureaucrat::~Bureaucrat() {}


// gettsers and setters
int Bureaucrat::getGrade() const 
{
    return grade;
}

const std::string Bureaucrat::getName() const 
{
    return name;
}

void Bureaucrat::setGrade(int theGrade) 
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
    this->grade = theGrade;
}

void Bureaucrat::incrementGrade() 
{
    if (grade - 1 < 1)
        throw GradeTooHighException();
    grade--;
}

void Bureaucrat::decrementGrade() 
{
    if (grade + 1 > 150)
        throw GradeTooLowException();
    grade++;
}


// 
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low!";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) 
{
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << "." << std::endl;
    return os;
}