#include <iostream>
#include "../Libraries/my_lib.h"
#include "../Libraries/my_lib.cpp"
using namespace std;
using namespace std_func;
using namespace math_func;

int main()
{
    int num, fact;
    clrscr();

    cout << "Enter the number : ";
    cin >> num;

    fact = 1;

    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    cout << "The faactorial of " << num << " is " << fact;

    return 0;
}