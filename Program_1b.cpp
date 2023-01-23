#include <iostream>
#include "../Libraries/my_lib.h"
#include "../Libraries/my_lib.cpp"
using namespace std;
using namespace std_func;
using namespace math_func;

int main()
{
    int a, b, temp;
    clrscr();

    cout<<"Enter the two numbers : ";
    cin>>a>>b;

    cout<<"Before interchanging : "<<endl;
    cout<<"a = "<<a<<"\t"<<"and b = "<<b<<endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout<<"After interchanging : "<<endl;
    cout<<"a = "<<a<<"\t"<<"and b = "<<b<<endl;

    return 0;

}