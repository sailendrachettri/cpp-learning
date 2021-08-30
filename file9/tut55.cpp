#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base;
    void display()
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
    cout << "Pointers to Derived Classes in C++" << endl;
    BaseClass *base_class_poiner;
    BaseClass obj_base;
    DerivedClass obj_derived;

    // base_class_poiner = &obj_derived;
    // base_class_poiner->var_base = 34;
    // base_class_poiner->display();

    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 100;
    derived_class_pointer->var_derived = 90;
    derived_class_pointer->display();

    return 0;
}