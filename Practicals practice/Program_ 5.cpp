#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int main()
{

    float amt, dis, net_amt, net_dis;
    system("CLS");
    cout<<"Enter the total purchase amount: ";
    cin>>amt;
    dis = 0.0;
    if(amt >= 1000)
        dis = (float)8/100;
        net_dis = amt * dis;
        net_amt = amt - net_dis;
    cout<<net_amt;
    return 0;
}