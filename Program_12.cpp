//EXAM PURPOSE ONLY.

#include <iostream>
#include "../Libraries/my_lib.h"
#include "../Libraries/my_lib.cpp"
using namespace std;
using namespace std_func;
using namespace math_func;

int main()
{
    float pri, princ_amt, amt, rate, ci;
    int time, year;
    clrscr();

    cout<<"Enter the Principle amount, rate and the time : ";
    cin>>pri>>rate>>time;
    cout<<endl;

    year = 1;
    princ_amt = pri;

    while(year <= time)
    {
        amt = pri * (1+rate/100);
        pri = amt;
        year++;
    }

    ci = amt - princ_amt;
    cout<<"The compound interest is : "<<ci<<endl;
    cout<<"The Net amount is : "<<amt;

    return 0;
}