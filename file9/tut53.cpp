#include <iostream>
using namespace std;

class A
{
    int a;

public:
    void setData(int a);
    void getData(void);
};

void A::setData(int a){
    this->a = a;
}

void A::getData(void)
{
    cout << "The value of a is " << a << endl;
}

int main()
{
    cout << "\nthis Pointer in C++\n"
         << endl;

    A a;
    a.setData(20);
    a.getData();


    return 0;
}