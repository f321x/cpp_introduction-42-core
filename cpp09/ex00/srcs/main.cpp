#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc != 2 || strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0)
	{
		std::cerr << "Usage: ./btc [input.csv]" << std::endl;
		return 1;
	};

	BitcoinExchange exchange(argv[1], "data.csv");
	exchange.run();
	return 0;
}
