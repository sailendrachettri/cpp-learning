#include <iostream>
using namespace std;

// Base class
class Employee
{
public:
    int id;
    float salary;
    Employee() {}

    Employee(int inpId)
    {
        id = inpId;
        salary = 1000.00;
    }
};

// Derived class
/* class {{derived_class_name}} : {{visibility_mode }} {{base_class_name}}
{
    class members/methods/etc...
}
Note:
1. Default visibility mode is private
2. Public Visibility mode: Public members of the base class remains public members of the derived class
3. Private Visibility mode: Public members of the base class becomes private members of the derived class
4. Private members of the base class are never be inherited.
*/

class Programmer : Employee
{
public:
    int languageCode;

    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }

    void getData()
    {
        cout << "Id = " << id << endl;
    }
};

int main()
{
    cout << "\nInheritance Syntax & Visibility Mode in C++\n " << endl;

    Employee sai(101), len(102), dra(103);
    Programmer skillF(104);

    skillF.getData();
    cout<<skillF.languageCode<<endl;

    cout << sai.salary << endl;
    cout << len.salary << endl;
    cout << dra.salary << endl;
    return 0;
}