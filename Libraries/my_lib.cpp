#include "my_lib.h"
#include <iostream>
namespace std_func
{
    void clrscr()
    {
        system("CLS");
    }
}
namespace math_func
{
    int factorial(int n)
    {
        if (n <= 1)
        {
            return 1;
        }
        return n * factorial(n - 1);
    }

    int comb(int n, int r)
    {
        int c = factorial(n) / (factorial(r) * factorial(n - r));
        return c;
    }
}