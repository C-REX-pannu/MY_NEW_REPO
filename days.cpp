#include<iostream>
#include<iomanip>
#include<conio.h>
int main()
{
    int tot_days, days, months, years;
    char ans;
    do{
        system("CLS");
        std::cout<<"Enter the total days: ";
        std::cin>>tot_days;
        years = tot_days/365;
        tot_days = tot_days % 365;
        months = tot_days/30;
        days = tot_days%30;
        std::cout<<"Days = "<<days<<std::endl;
        std::cout<<"Months = "<<months<<std::endl;
        std::cout<<"Years = "<<years<<std::endl;
        std::cout<<"Do you want to run the program again? (y/n): ";
        std::cin>>ans;
    }while(ans == 'y');
    return 0;
}