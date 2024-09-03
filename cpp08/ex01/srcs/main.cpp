#include "Span.hpp"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

void test1()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << "Subject test: " << std::endl;
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}

void test2(int test_amount)
{
    srand(std::time(0));

    Span sp(test_amount);
    std::set<int> numbers;
    for (int i = 0; i < test_amount; ++i)
    {
        int num = std::rand() % 1000000;
        numbers.insert(num);
    }
    sp.addRange(numbers.begin(), numbers.end());

    int shortest = sp.shortestSpan();
    int longest = sp.longestSpan();

    std::cout << numbers.size() << " random numbers test:" << std::endl;
    std::cout << "Shortest span: " << shortest << std::endl;
    std::cout << "Longest span: " << longest << std::endl;
}

void test3()
{
    Span sp(2);

    try
    {
        sp.addNumber(1);
        sp.addNumber(2);
        sp.addNumber(3);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
}

int main()
{
    test1();
    test2(100000);
    test3();

    return 0;
}
