// OOP AND CLASSES

#include <iostream>
#include<fstream>
#include "../../C++/Libraries/my_lib.h"
#include "../../C++/Libraries/my_lib.cpp"
using namespace std;
using namespace std_func;
using namespace math_func;

class Secret
{
    private:
        string username = "SneakyMinds";
        string password = "Sneaky@123";

    public:
        int credCheck();
};



int Secret ::credCheck()
{
    string user, pass, result;

    cout<<"Enter the username : ";
    cin>>user;
    cout<<"Enter the password : ";
    cin>>pass;

    ifstream in("test.txt");
    getline(in, result);

    if(user == username && pass == password)
        cout<<result;
        else
        {
            cout<<"ACCESS DENIED!!!";
        }
    
}

int main()
{
    clrscr();

    Secret myTry;

    myTry.credCheck();

    return 0;
}