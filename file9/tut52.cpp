#include <iostream>
using namespace std;

class ShopItem
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData(void)
    {
        cout << "Id = " << id << endl;
        cout << "Price = " << price << endl;
    }
};

int main()
{
    cout << "Array of Objects Using Pointers in C++" << endl;
    int size = 2;
    ShopItem *ptr = new ShopItem[size]; // for eg: int *ptr = new int [2]
    ShopItem *ptrTemp = ptr;
    int p, i;
    float q;

    for (i = 0; i < size; i++)
    {
        cout << "Enter Id and price of Item " << i + 1 << endl;
        cin >> p >> q;
        ptr->setData(p, q);
        ptr++;
    }
    cout << "" << endl;

    for (i = 0; i < size; i++)
    {
        cout << "Item number " << i + 1 << endl;
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}