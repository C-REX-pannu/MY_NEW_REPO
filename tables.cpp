#include<conio.h>
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
int n,m, p, q;
char ans;
do
{
system("cls");
n = 0;
cout<<"Enter the required table: ";
cin>>m;
cout<<"Enter times: ";
cin>>q;
for(n = 1; n <= q; n++)
{
    p = n * m;
    cout<<m<<" x "<<n<<" = "<<p<<endl;
}
cout<<"Do you want to run the program again? (y/n): ";
cin>>ans;
}while(ans == 'y');
return 0;
}