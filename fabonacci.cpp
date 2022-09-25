/*Program to print fabonacci series*/

#include <conio.h>
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int first, second, third, term, n;
    system("cls");
    cout << "Enter the number: ";
    cin >> n;
    first = 0;
    second = 1;
    term = 2;
    cout << first << second;
    third = first + second;
    while (term <= n)
    {
        cout << third;
        first = second;
        second = third;
        third = first + second;
        term = term + 1;
    }
    return 0;
}