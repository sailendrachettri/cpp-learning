#include <iostream>
using namespace std;

class Simple
{
    int data1, data2, data3;

public:
    Simple(int a, int b = 100, int c = 90)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }

    void printData(void)
    {
        cout << "The value of data1 is " << data1 << ", data2 is " << data2 << " and data3 is " << data3 << endl;
    }
};

int main()
{
    cout << "Constructors With Default Arguments " << endl;

    // Simple s(10);
    // Simple s(10, 20);
    Simple s(10, 20, 30);
    s.printData();

    return 0;
}