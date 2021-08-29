#include <iostream>
using namespace std;

class Number
{
    int a = 0;

public:
    Number() {} // default constructor should be there

    Number(int num)
    {
        a = num;
    }

    // when no copy constructor is found, complier supplies its own copy constructor
    Number(Number &obj)
    {
        cout<< "Copy Constructor Invoked!"<<endl;
        a = obj.a;//
    }
    void display()
    {
        cout << "The number for this object is  " << a << endl;
    }
};

int main()
{
    cout<< "\nCopy Constructor in C++\n"<<endl;

    Number x, y, z(10);
    x.display();
    y.display();
    z.display();

    Number z1(z);
    z1.display();

    // Number z2 = x;

    return 0;
}