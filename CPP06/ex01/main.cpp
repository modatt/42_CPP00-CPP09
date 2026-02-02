#include "Serializer.hpp"

int 	main(void)
{
	Data data;
	data.age = 42;
	data.name = "modat";

	Data *orig = &data;

	uintptr_t raw = Serializer::serialize(orig);
	Data *restored =  Serializer::deserialize(raw);

	std::cout << "The original ptr = " << orig << std::endl;
	std::cout << "Restored ptr = " << restored << std::endl;

	if (orig == restored)
		std::cout << "ptrs match: correct work\n";
	else
		std::cout << "ptrs do not match\n";
}
