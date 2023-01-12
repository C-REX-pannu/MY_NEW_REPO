// OOP
#include <iostream>
#include <string>
#include "../../C++/Libraries/my_lib.h"
#include "../../C++/Libraries/my_lib.cpp"
using namespace std;
using namespace std_func;
using namespace math_func;

class binary
{

    string s;

    public:
        void read(void);
        void chk_bin(void);

};

void binary :: read(void)
{
    cout<<"Enter any binary number : ";
    cin>>s;
}

void binary :: chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout<<"Incorrect binary format."<<endl;
            exit(0);
        }
    }
    
}

int main()
{
    binary b;
    b.read();
}