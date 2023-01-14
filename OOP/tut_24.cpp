// OOP AND CLASSES

#include <iostream>
#include "../../C++/Libraries/my_lib.h"
#include "../../C++/Libraries/my_lib.cpp"
using namespace std;
using namespace std_func;
using namespace math_func;

class Employee{
    int id;
    static int count;

    public:
        void setData(void){
            cout<<"Enter the Id : ";
            cin>>id;
            count++;
        }
        void getData(void){
            cout<<"The Id of the Employee is : "<<id<<" and this is1 Employee number "<<count<<endl;
        }
};

int Employee :: count;

int main()
{
    Employee C_REX, Harry, Mosh;

    C_REX.setData();
    C_REX.getData();

    Harry.setData();
    Harry.getData();

    Mosh.setData();
    Mosh.getData();

    return 0;
}