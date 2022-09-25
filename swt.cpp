#include <conio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char ans;
    do
    {

        int age;

        cout << "Enter your age: ";
        cin >> age;
        switch (age)
        {
        case 18:
            cout << "You are allowed in the party";
            break;
        case 22:
            cout << "You are allowed in the party";
            break;
        default:
            cout << "No special cases";
            break;
        }
        cout << "Do u want to run the program again? (y/n): "<< endl;
        cin >> ans;
    } while (ans == 'y');
    return 0;
}