#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int main(){
    int tot_days, months, years, days;
    cout<<"Enter the total number of days: ";
    cin>>tot_days;

    years = tot_days / 360;
    months = tot_days / 30;
    tot_days = tot_days % 365;
    days = tot_days % 30;

    cout<<years<<" years "<<months<<" months and "<<days<<" days.";

    return 0;
}