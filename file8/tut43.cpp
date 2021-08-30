#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Kaise ho?" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;
    
public:
    void greet()
    {
        Base1:: greet(); // Ambiguity Resolution
    }
};

int main()
{
    cout << "Ambiguity Resolution in Inheritance in C++" << endl;

    Base1 base1obj;
    Base2 base2obj;
    Derived d;

    base1obj.greet();
    base2obj.greet();
    d.greet();

    return 0;
}