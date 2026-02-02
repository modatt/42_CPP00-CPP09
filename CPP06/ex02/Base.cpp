#include "Base.hpp"

Base::~Base()
{

}

Base * generate(void)
{
	int x;
	x = (rand() % 100) + 7;

	if (x < 33)
		return (new A);
	else if (x  >= 33 && x < 66)
		return (new B);
	return (new C);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A\n";
	else if (dynamic_cast<B*>(p))
		std::cout << "B\n";
	else if (dynamic_cast<C*>(p))
		std::cout << "C\n";
}

void identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A\n";
		return ;
	}
	catch(...) {}

	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B\n";
		return ;
	}
	catch(...) {}

	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C\n";
		return ;
	}
	catch(...) {}
	
}