#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

// void    write_name(std::string name);

class Bureaucrat 
{
    private:
        const std::string name;
        int grade;
    public:
    Bureaucrat();
    Bureaucrat(const Bureaucrat& cpy);
    Bureaucrat& operator=(const Bureaucrat& other);
    Bureaucrat(const std::string& name, int grade);
    ~ Bureaucrat();

    int     getGrade() const;
    void    setGrade(int grade);
    void    incrementGrade();
    void    decrementGrade();
    const std::string getName() const;

    class GradeTooHighException : public std::exception 
    {
        public:
            const char* what() const throw();
    };
    class GradeTooLowException : public std::exception 
    {
        public:
            const char* what() const throw();
    };

};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif 