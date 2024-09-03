#include <iostream>
#include <cstring>
#include "iter.hpp"

void print_a_char(char c)
{
    std::cout << c << std::endl;
}

void print_a_int(int i)
{
    std::cout << i << std::endl;
}

int main(void)
{
    char array[] = "abcdefg";
    int int_array[] = {0, 1, 2, 3, 4, 5, 6};

    std::cout << "Testing char array: " << std::endl;
    ::iter(array, std::strlen(array), print_a_char);

    std::cout << "Testing int array: " << std::endl;
    ::iter(int_array, (sizeof(int_array) / sizeof(int_array[0])), print_a_int);

    return 0;
}
