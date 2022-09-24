// Online C++ compiler to run C++ program online
#include<iostream>

int main() 
{
    float nread, oread, min_amt, net_amt, vat, units, amt;
    std::cout << "Enter the minimum amount: ";
    std::cin >> min_amt;
    std::cout << "Enter the current readings: ";
    std::cin >> nread;
    std::cout<<"Enter the previous readings: ";
    std::cin>>oread;
    units = nread - oread;
    if(units<30)
        amt = units * 3.50;
        else
            if(units<100)
                amt = (29 * 3.50) + (units - 29) * 4.25;
    vat = 1.25;
    net_amt = (amt * vat) + min_amt;
    std::cout<<"The Total Electricity Bill is : "<<net_amt;
    return 0;
}
