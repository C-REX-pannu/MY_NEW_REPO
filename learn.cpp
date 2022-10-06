#include <conio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    system("CLS");
    // ARRAYS
    int marks[] = {23, 45, 55};
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout<<"the next run :-"<<endl;
    
    int scores[6], i;
    scores[0] = 56;
    scores[1] = 66;
    scores[2] = 76;
    scores[3] = 86;
    scores[4] = 96;
    scores[5] = 46;
    for (int i = 0; i < 6; i++)
    {
        /* code */
    cout<<scores[i]<<endl;
    }
    

    // STRUCTURES
    struct employee
    {
        /* data */
        char eChar;
        int eId;
        int age;
        long salary;
    };
    struct employee dan;
    dan.eChar = 'A';
    dan.eId = 01;
    dan.age = 25;
    dan.salary = 500000;

    cout<<"The value of Dan's Employee Character is: "<<dan.eChar<<endl;
    cout<<"The value of Dan's employee ID is:"<<dan.eId<<endl;
    cout<<"The value of Dan's age is: "<<dan.age<<endl;
    cout<<"The value of Dan's salary is: "<<dan.salary<<endl;
    
    typedef struct company
    {
        /* data */
    int manpower;
    int minSal;
    char rank;
    } comp;

    comp NaCl;
    NaCl.manpower = 500000;
    NaCl.minSal = 50000;
    NaCl.rank = 'A';

    cout<<"the value is "<<NaCl.manpower<<endl;
    cout<<"the value is "<<NaCl.minSal<<endl;
    cout<<"the value is "<<NaCl.rank<<endl;

    // MY TRY
    float rating[3];
    string car[3];

    cout<<"Enter the name of the car brand that is your first preference: ";
    cin>>car[0];
    cout<<"What ratings would you give to it?: ";
    cin>>rating[0];

    cout<<"Enter the name of the car brand that is your second preference: ";
    cin>>car[1];
    cout<<"What ratings would you give to it?: ";
    cin>>rating[1];

    cout<<"Enter the name of the car brand that is your third preference: ";
    cin>>car[2];
    cout<<"What ratings would you give to it?: ";
    cin>>rating[2];
    
    cout<<"You have given "<<rating[0]<<" rating to "<<car[0]<<endl;
    cout<<"You have given "<<rating[1]<<" rating to "<<car[1]<<endl;
    cout<<"You have given "<<rating[2]<<" rating to "<<car[2]<<endl;
    return 0;
}