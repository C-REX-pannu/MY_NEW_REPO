#include <iostream>
#include <math.h>
#include "../Libraries/my_lib.h"
#include "../Libraries/my_lib.cpp"
using namespace std;
using namespace std_func;
using namespace math_func;

int main()
{
    float s, s1, s2, s3, area;
    clrscr();

    cout << "Enter the measure of the sides of the triangle : ";
    cin >> s1 >> s2 >> s3;

    s = (s1 + s2 + s3) / 2;
    area = sqrt(s * (s - s1) * (s - s2) * (s - s3));

    cout << "The area of the triangle = " << area;

    return 0;
}