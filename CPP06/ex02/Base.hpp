#ifndef BASE_HPP
#define BASE_HPP

#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>

class A;
class B;
class C;

class Base
{
	public:
	virtual	~Base();
};


// standalone 
Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif