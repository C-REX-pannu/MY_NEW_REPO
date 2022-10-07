#include<conio.h>
#include<iostream>
#include<iomanip>
using namespace std;

int sum(int, int);
void g();

int main(){
    system("CLS");
    int num_1, num_2;
    cout<<"Enter the first number: ";
    cin>>num_1;
    cout<<"Enter the second number: ";
    cin>>num_2;
    cout<<"The sum of the first and second numbers is "<<sum(num_1, num_2);
    g();
    return 0;
}

int sum(int a, int b){
    int c = a + b;
    return c;
}

void g(){
    cout<<"\nYou successfully executed the program!";
    getch();
}