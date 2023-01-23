#include <iostream>
#include <string.h>
#include <ctype.h>
#include "../Libraries/my_lib.h"
#include "../Libraries/my_lib.cpp"
using namespace std;
using namespace std_func;
using namespace math_func;

int main()
{
    char s[100];
    int len, cons = 0, vov = 0;
    clrscr();

    cout << "Enter the string : ";
    cin.getline(s, 100);

    len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        if (isalpha(s[i]))
        {
            switch (toupper(s[i]))
            {
            case 'E':
            case 'A':
            case 'I':
            case 'O':
            case 'U':
                vov++;
                break;

            default:
                cons++;
                break;
            }
        }
    }

    cout << "The number of vowels : " << vov << endl;
    cout << "The number of consonents : " << cons;

    return 0;
}