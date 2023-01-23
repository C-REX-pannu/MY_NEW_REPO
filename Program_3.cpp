#include <iostream>
#include "../Libraries/my_lib.h"
#include "../Libraries/my_lib.cpp"
using namespace std;
using namespace std_func;
using namespace math_func;

int main()
{
    int daysTotal, days, months, years;
    clrscr();

    cout << "Enter the number of days : ";
    cin >> daysTotal;

    years = daysTotal / 365;
    daysTotal = daysTotal % 365;
    months = daysTotal / 30;
    days = daysTotal % 30;

    cout << "Years = " << years << endl
         << "Months  = " << months << endl
         << "Days = " << days;

    return 0;
}