#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(void) // default constructor
    {
        a = 0;
        b = 0;
    }
    Complex(int x) // one parameterize
    {
        a = x;
        b = 0;
    }
    Complex(int x, int y) // two parameterize
    {
        a = x;
        b = y;
    }

    void printNumber(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    cout << "Constructor Overloading" << endl;

    Complex c0;
    c0.printNumber();

    Complex c1(4, 5);
    c1.printNumber();

    Complex c2(5);
    c2.printNumber();

    return 0;
}