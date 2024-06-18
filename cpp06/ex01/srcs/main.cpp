#include "Serializer.hpp"
#include <iostream>

int main(void)
{
	Data testing_data = {21, 'R'};

	uintptr_t pointer_to_data = Serializer::serialize(&testing_data);

	Data *data_pointer = Serializer::deserialize(pointer_to_data);

	if (data_pointer == &testing_data)
	{
		std::cout << "Successful" << std::endl;
		return (0);
	}
	return (1);
}
