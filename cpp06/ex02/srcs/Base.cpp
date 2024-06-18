#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *Base::generate(void)
{
	static unsigned int seed_index = 0;
	char variable_to_seed_with_address;
	srand((unsigned int)time(0) + (unsigned long)&variable_to_seed_with_address + seed_index++);
	int random_val = rand() % 3 + 1;

	switch (random_val)
	{
	case 1:
		return new A();
	case 2:
		return new B();
	case 3:
		return new C();
	}
	return NULL;
}

void Base::identify(Base *p)
{
	if (!p)
	{
		std::cerr << "Provided NULL to identify." << std::endl;
	}
	if (dynamic_cast<A *>(p) != NULL)
	{
		std::cout << "Class A" << std::endl;
	}
	else if (dynamic_cast<B *>(p) != NULL)
	{
		std::cout << "Class B" << std::endl;
	}
	else if (dynamic_cast<C *>(p) != NULL)
	{
		std::cout << "Class C" << std::endl;
	}
	else
	{
		std::cout << "Weird non-class detected!" << std::endl;
	}
}

void Base::identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "Class A" << std::endl;
	}
	catch (const std::exception &e)
	{
		try
		{
			(void)dynamic_cast<B &>(p);
			std::cout << "Class B" << std::endl;
		}
		catch (const std::exception &e)
		{
			try
			{
				(void)dynamic_cast<C &>(p);
				std::cout << "Class C" << std::endl;
			}
			catch (const std::exception &e)
			{
				std::cerr << "No class recognized." << std::endl;
			}
		}
	}
}

Base::~Base() {}
