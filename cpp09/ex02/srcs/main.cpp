#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cerr << "Usage: ./ex02 [positive int] [positive int] ..." << std::endl;
		return 1;
	}
	try
	{
		PmergeMe pmm((const char **)argv);
		pmm.sort_vector();
		pmm.sort_deque();
		pmm.print_result();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return 1;
	}

	return 0;
}
