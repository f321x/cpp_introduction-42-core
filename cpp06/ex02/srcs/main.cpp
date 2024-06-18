#include "Base.hpp"

int main(void)
{
	Base *base1 = Base::generate();
	Base *base2 = Base::generate();
	Base *base3 = Base::generate();

	Base::identify(base1);
	Base::identify(&(*base1));

	std::cout << std::endl
			  << std::endl;

	Base::identify(base2);
	Base::identify(&(*base2));

	std::cout << std::endl
			  << std::endl;

	Base::identify(base3);
	Base::identify(&(*base3));
}
