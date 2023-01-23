#include <iostream>
#include "../Libraries/my_lib.h"
#include "../Libraries/my_lib.cpp"
using namespace std;
using namespace std_func;
using namespace math_func;

int main()
{
    char a;
    clrscr();

    cout << "Enter the character : ";
    cin >> a;

    if ('a' <= a && a <= 'z')
        cout << "The character " << a << " is a lower case alphabet.";
    else if ('A' <= a && a <= 'Z')
        cout << "The character " << a << " is an upper case alphabet.";
    else
        cout << "The character " << a << " is not an alphabet.";

    return 0;
}