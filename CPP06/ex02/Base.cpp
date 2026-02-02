#include "Base.hpp"

Base::~Base()
{

}

Base * generate(void)
{
	int x;
	x = rand() %;

	if (x % 2)
		return (new A);
	else if (x % 3)
		return (new B);
	else 
		return (new C);
}
void identify(Base* p);
void identify(Base& p);
