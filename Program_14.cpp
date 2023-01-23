#include <iostream>
#include "../Libraries/my_lib.h"
#include "../Libraries/my_lib.cpp"
using namespace std;
using namespace std_func;
using namespace math_func;

int main()
{
    int temp, sum, rem, num;
    clrscr();

    cout<<"Enter the number : ";
    cin>>num;

    temp = num;
    sum = 0;

    do
    {
        rem = temp % 10;
        sum = sum + rem * rem * rem;
        temp = temp/10;

    } while (temp != 0);

    if (sum == num)
        cout<<"The number is an Armstrong number.";

        else
            cout<<"The number is not an armstrong number.";
    
    return 0;
}