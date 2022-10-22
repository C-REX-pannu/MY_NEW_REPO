#include<iomanip>
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    float r, c, a;
    cout<<"Enter the radius of the circle: ";
    cin>>r;
    c = 2 * 3.142 * r;
    a = 3.142 * r * r;
    cout<<"The circumference of the circle is: "<<c<<endl;
    cout<<"The area of the circle is: "<<a<<endl;
    return 0;
}