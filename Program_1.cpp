#include <iostream>
#include <iomanip>
#include <conio.h>
#include "../../C++/Libraries/my_lib.h"
#include "../../C++/Libraries/my_lib.cpp"
using namespace std;
using namespace std_func;
using namespace math_func;

int largest(int a, int b, int c)
{
    int big;

    big = a > b? (a > c? a : c) : (b > c? b : c);

    return big;
}

int main()
{
    int a, b, c;
    clrscr();

    cout << "Enter any three numbers: ";
    cin >> a >> b >> c;

    cout << largest(a, b, c);

    return 0;
}