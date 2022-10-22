#include<iomanip>
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int a, b;
    cout<<"Enter the two numbers: ";
    cin>>a>>b;
    cout<<"Before interchanging: a = "<<a<<"\tb = "<<b<<endl;
   
    a = a + b;
    b = a - b;
    a = a - b;

    cout<<"After interchanging: a = "<<a<<"\tb = "<<b<<endl;    
    return 0;
}