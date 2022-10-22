#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

void swapReferenceVar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a, b;
    system("CLS");
    cout<<"Enter any two numbers: ";
    cin>>a>>b;
    cout<<"Before interchanging, the value of a is "<<a<<" and that of b is "<<b<<endl;
    swapReferenceVar(a, b);
    cout<<"After interchanging, the value of a is "<<a<<" and that of b is "<<b;    
    return 0;
}