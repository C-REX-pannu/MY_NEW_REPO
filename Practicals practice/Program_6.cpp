#include<iomanip>
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main(){
    double s, s1, s2, s3, a;
    cout<<"Enter the lengths of the sides of the triangle: ";
    cin>>s1>>s2>>s3;
    s = (s1 + s2 + s3)/2;
    a = sqrt(s *(s - s1)*(s - s2)*(s - s3));
    cout<<"The are of the triangle is: "<<a;
    return 0;
}