// OOP AND CLASSES
#include <iostream>
#include "../../C++/Libraries/my_lib.h"
#include "../../C++/Libraries/my_lib.cpp"
using namespace std;
using namespace std_func;
using namespace math_func;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayprice(void);
};

void Shop ::setPrice(void)
{

    cout << "Enter the Id of your item number " << counter + 1 << " : ";
    cin >> itemId[counter];

    cout << "Enter the Price of your item : ";
    cin >> itemPrice[counter];

    counter++;
}

void Shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of the item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    clrscr();
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayprice();
    return 0;
}