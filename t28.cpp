#include <iostream>
using namespace std;

class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initialcounter(void) { counter = 0; }
    void setprice(void);
    void showprice(void);
};

void shop::setprice(void)
{
    cout << "enter the id of the item " <<counter+1<< endl;
    cin >> itemid[counter];
    cout << "enter the price of the item" << endl;
    cin >> itemprice[counter];
    counter++;
}

void shop::showprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item " << itemid[i] << " is " << itemprice[i] << endl;
    }
}

int main()
{
    shop s;
    s.initialcounter();
    s.setprice();
    s.setprice();
    s.setprice();
    s.showprice();

    return 0;
}