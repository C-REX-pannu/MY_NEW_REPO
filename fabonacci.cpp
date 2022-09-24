#include <conio.h>
#include <iostream>
#include <iomanip>

int main()
{
    int first, second, third, term, n;
    std::cout << "Enter the number: ";
    std::cin >> n;
    first = 0;
    second = 1;
    term = 2;
    std::cout << first << second;
    third = first + second;
    while (term <= n)
    {
        std::cout << third;
        first = second;
        second = third;
        third = first + second;
        term = term + 1;
    }
    return 0;
}