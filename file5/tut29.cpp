#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(void); // consructure declelaration

    void printNumber(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(void)
{
    a = 10;
    b = 0;
}

int main()
{
    Complex c;
    c.printNumber();

    return 0;
}