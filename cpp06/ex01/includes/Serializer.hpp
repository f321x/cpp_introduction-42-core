#pragma once
#include <stdint.h>

struct Data
{
	int index_number;
	char encoding_type;
};

class Serializer
{
public:
	static uintptr_t serialize(Data *ptr);
	static Data *deserialize(uintptr_t raw);

private:
	Serializer();
	Serializer(const Serializer &);
	Serializer &operator=(const Serializer &);
};
