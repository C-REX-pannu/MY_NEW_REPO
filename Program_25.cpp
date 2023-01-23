#include <iostream>
#include <string.h>
#include "../Libraries/my_lib.h"
#include "../Libraries/my_lib.cpp"
using namespace std;
using namespace std_func;
using namespace math_func;

int main()
{
    char s[100], r[100];
    clrscr();

    cout << "Enter the string : ";
    cin.getline(s, 100);

    strcpy(r, s);
    strrev(r);

    if (strcmpi(s, r) == 0)
        cout << "The string " << s << " is a palindrome.";
    else
        cout << "The string " << s << " is not a palindrome.";

    return 0;
}