#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Bureaucrat;
 
class AForm 
{
    private:
        const std::string name;
        bool is_signed;
        const int gradeSign;
        const int gradeExe;
    public:
    AForm();
    AForm(const AForm &cpy);
    AForm(const std::string _name, const int _gradeSign, const int _gradeExe);
    AForm& operator=(const AForm &other);
    virtual ~AForm();
    // getters and setters
    const std::string getName() const;
    int getGradeSign() const;
    int getGradeExe() const;
    bool getIsSigned() const;
    void beSigned(const Bureaucrat &bureaucrat);
    void execute(const Bureaucrat& executor) const;
    virtual void executeAction() const = 0;
    // exception classes
    class GradeTooLowException : public std::exception {
        public:
        virtual const char* what() const throw();
    };
    class GradeTooHighException : public std::exception {
        public:
        virtual const char* what() const throw();
    };
    class FormNotSignedException : public std::exception {
        public:
        virtual const char* what() const throw();
    };
};

// stanalone function
std::ostream& operator<<(std::ostream &out, const AForm &form);
#endif 