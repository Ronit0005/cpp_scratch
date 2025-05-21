// The common element of a class (like any default value) is given same location for all the objects .
#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter()
    {
        counter = 0;
    }
    void setItem()
    {
        cout << "Enter the price of the item " << endl;
        cin >> itemPrice[counter];
        cout << "Enter the id of the item " << endl;
        cin >> itemId[counter];
        counter++;
    }
    void displayItems()
    {
        for (int i = 0; i < counter; i++)
        {
            cout << "Item Id : " << itemId[i] << endl;
            cout << "Item Price : " << itemPrice[i] << endl;
        }
    }
};
int main()
{
    shop dukkan;
    int noOfItems = 3;
    dukkan.initCounter();
    for (int i = 0; i < noOfItems; i++)
    {
        dukkan.setItem();
    }
    dukkan.displayItems();
    return 0;
}