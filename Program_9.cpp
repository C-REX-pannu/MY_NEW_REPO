// EXAM PURPOSE ONLY.

#include <iostream>
#include "../Libraries/my_lib.h"
#include "../Libraries/my_lib.cpp"
using namespace std;
using namespace std_func;
using namespace math_func;

int main()
{
    float units, amt;
    clrscr();

    cout << "Enter the number of units consumed : ";
    cin >> units;

    if (units < 30)
        amt = units * 3.50;
    else if (units < 50)
        amt = (29 * 3.50) + (units - 29) * 4.25;
    else if (units < 100)
        amt = (29 * 3.50) + (19 * 4.25) + (units - 49) * 5.25;
    else
        amt = (29 * 3.50) + (19 * 4.25) + (49 * 5.25) + (units - 99) * 5.85;

    cout << "The total units consumed : " << units << endl;
    cout << "The final amount is : " << amt;

    return 0;
}