// EXAM PURPOSE ONLY.

#include <iostream>
#include "../Libraries/my_lib.h"
#include "../Libraries/my_lib.cpp"
using namespace std;
using namespace std_func;
using namespace math_func;

int main() {
    int a[5][5], b[5][5], sum[5][5];
    int r, c, r1, r2, c1, c2;
    clrscr();
    
    
    cout<<"Enter the order of the firt matrix : ";
    cin>>r1>>c1;
    
    cout<<"Enter the order of the second matrix : ";
    cin>>r2>>c2;
    
    
    cout<<"Enter the elements of the first matrix : "<<endl;
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c1; j++)
        {
            cin>>a[i][j];
        }
    }
    
    cout<<"Enter the elements of the second matrix : "<<endl;
    for(int i = 0; i < r2; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            cin>>b[i][j];
        }
    }
    
    
    if((r1 == r2) && (c1 == c2))
    {
        r = r1 = r2;
        c = c1 = c2;
        
        cout<<"The sum of the first and the second matrices is: "<<endl;
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                sum[i][j] = a[i][j] + b[i][j];
                cout<<sum[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
    else
        cout<<"The matrices are not compatible.";

    return 0;
}