#include <iostream>
#include "../Libraries/my_lib.h"
#include "../Libraries/my_lib.cpp"
using namespace std;
using namespace std_func;
using namespace math_func;

int main()
{
    float r, c, a;
    clrscr();

    cout << "Enter the radius of the circle : ";
    cin >> r;

    c = 2 * 3.142 * r;
    a = 3.142 * r * r;

    cout << "The area of the circle is : " << a << endl;
    cout << " The circumference of the circle is : " << c;

    return 0;
}