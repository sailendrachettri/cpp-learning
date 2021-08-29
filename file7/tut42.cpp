#include <iostream>
using namespace std;

class Base1
{
protected:
    int base1Int;

public:
    void set_base1Int(int a)
    {
        base1Int = a;
    }
};

class Base2
{
protected:
    int base2Int;

public:
    void set_base2Int(int a)
    {
        base2Int = a;
    }
};

class Derived: public Base1, public Base2{
    public:
    void show(){
        cout<< "The value of Base1 is "<<base1Int<<endl;
        cout<< "The value of Base2 is "<<base2Int<<endl;
        cout<< "The sum of Base1 and Base2 is "<<base1Int + base2Int<<endl;
    }
};

int main()
{
    cout << "Multiple Inheritance Deep Dive with Code Example in C++" << endl;

    Derived d;
    d.set_base1Int(100);
    d.set_base2Int(200);
    d.show();

    return 0;
}