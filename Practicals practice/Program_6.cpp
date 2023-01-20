// EXAM PURPOSE ONLY.

#include <iostream>
#include "../Libraries/my_lib.h"
#include "../Libraries/my_lib.cpp"
using namespace std;
using namespace std_func;
using namespace math_func;

int main()
{
    float amt, net_amt, net_dis;
    clrscr();

    cout << "Enter the total amout of your purchase : ";
    cin >> amt;

    net_dis = 0;

    if (amt > 1000)
    {
        net_dis = amt * (8.00 / 100.00);
    }

    net_amt = amt - net_dis;

    cout << "The total amount of your purchase is : " << amt << endl;
    cout << "The discount availed is : " << net_dis << endl;
    cout << "The final amount of your purchase is : " << net_amt;

    return 0;
}