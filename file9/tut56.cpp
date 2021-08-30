#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base;
    virtual void display()
    {
        cout << "Displaying Base Class variable var1: " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "Displaying Base Class variable var1: " << var_base << endl;
        cout << "Displaying Derived Class variable var1: " << var_derived << endl;
    }
};

int main()
{
    cout << "Virtual Functions in C++" << endl;
    BaseClass *base_class_poiner;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_poiner = &obj_derived;
    base_class_poiner->var_base = 10;
    base_class_poiner->display();

    return 0;
}