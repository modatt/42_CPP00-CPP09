#include "Serializer.hpp"

uintptr_t Serializer::serialize(Data* ptr)
{
	// convert a pointer into uintptr_t
	return (reinterpret_cast<uintptr_t>(ptr));
}


Data* Serializer::deserialize(uintptr_t raw)
{
	// re-covert it back to its original state
	// uintptr_t to ptr *
	return (reinterpret_cast<Data*>(raw));
}

Serializer::~Serializer() {}
Serializer::Serializer() {}
Serializer::Serializer(const Serializer &copy)
{
	(void)copy;
}
Serializer &Serializer::operator=(const Serializer &other)
{
	(void)other;
	return *this;
}

