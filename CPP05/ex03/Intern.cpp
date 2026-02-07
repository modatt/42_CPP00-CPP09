#include "Intern.hpp"

Intern::Intern() {};

Intern::Intern(const Intern& cpy) { (void)cpy; };

Intern& Intern::operator=(const Intern& other) 
{
	(void)other;
	return *this;
}

Intern::~Intern() {};

const char* Intern::FormNotFoundException::what() const throw()
{
	return "Form not found";
}


static AForm* makeShrubbery(const std::string &target)
{
    return new ShrubberyCreationForm(target);
}

static AForm* makeRobotomy(const std::string &target)
{
    return new RobotomyRequestForm(target);
}

static AForm* makePardon(const std::string &target)
{
    return new PresidentialPardonForm(target);
}


AForm* Intern::makeForm(const std::string& formName, const std::string& target) const
{
    std::string formNames[] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };

    AForm* (*funcPtrs[])(const std::string &) = {
        &makeShrubbery,
        &makeRobotomy,
        &makePardon
    };

    for (int i = 0; i < 3; i++) {
        if (formName == formNames[i]) {
            std::cout << "Intern creates " << formName << std::endl;
            return (funcPtrs[i](target));
        }
    }
    throw Intern::FormNotFoundException();
}