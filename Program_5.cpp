#include <iostream>
#include "../Libraries/my_lib.h"
#include "../Libraries/my_lib.cpp"
using namespace std;
using namespace std_func;
using namespace math_func;

int main()
{
    int largest, smallest, sec_largest, a, b, c;
    clrscr();

    cout<<"Enter the three numbers : ";
    cin>>a>>b>>c;

    largest = a;
    smallest = a;

    if(b > largest)
    {
        largest = b;
    }

    if(b < smallest)
    {
        smallest = b;
    }

    if(c > largest)
    {
        largest = c;
    }

    if(c < smallest)
    {
        smallest = c;
    }

    sec_largest = (a + b + c) - (largest + smallest);

    cout<<"Largest number is : "<<largest<<endl;
    cout<<"Second largest number is : "<<sec_largest<<endl;
    cout<<"Smallest number is : "<<smallest;

    return 0;
}