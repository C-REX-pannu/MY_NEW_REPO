//EXAM PURPOSE ONLY.

#include <iostream>
#include "../Libraries/my_lib.h"
#include "../Libraries/my_lib.cpp"
using namespace std;
using namespace std_func;
using namespace math_func;

int main(){
    int rem, num, sum;
    clrscr();

    cout<<"Enter the number : ";
    cin>>num;

    sum = 0;

    while(num != 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }

    cout<<"The sum of the digists in the number is : "<<sum;

    return 0;
}