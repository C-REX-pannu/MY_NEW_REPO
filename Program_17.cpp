#include <iostream>
#include "../Libraries/my_lib.h"
#include "../Libraries/my_lib.cpp"
using namespace std;
using namespace std_func;
using namespace math_func;

int main()
{
    int sum, a[50], n;
    float avg;
    clrscr();

    sum = 0;

    cout<<"Enter the number of the elements in the array : ";
    cin>>n;
    cout<<"Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    for (int j = 0; j < n; j++)
    {
        sum = sum + a[j];
    }

    avg = (float)sum / n;

    cout<<"The sum of the numbers in the array is : "<<sum<<endl;
    cout<<"The avarage of the numbers in the array is : "<<avg;

    return 0;

}