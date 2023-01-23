#include <iostream>
#include "../Libraries/my_lib.h"
#include "../Libraries/my_lib.cpp"
using namespace std;
using namespace std_func;
using namespace math_func;

int main()
{
    int year;
    clrscr();

    cout<<"Enter the year : ";
    cin>>year;

    if(year % 400 == 0)
        cout<<"The year "<<year<<" is a leap year.";

        else
            cout<<"The year "<<year<<" is not a leap year.";

    return 0;
    
}