#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    std::vector<int> vec1(arr, arr + sizeof(arr) / sizeof(arr[0]));

    try
    {
        int index = easyfind(vec1, 2);
        std::cout << "found index: " << index << std::endl;
    }
    catch (...)
    {
        std::cout << "exception 1 thrown" << std::endl;
    }
    return 0;
}
