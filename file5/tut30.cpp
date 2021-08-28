#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int); // consructure declelaration - parameterize
    // Complex(void); // consructure declelaration - default 

    void printNumber(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x, int y) // parameterize constructore
{
    a = x;
    b = y;
}

int main()
{
    cout<< "Parameterized and Default Constructors"<<endl;

    // Inmplxit call 
    Complex a(0, 1);

    // Explicit call
    Complex b = Complex(5, 7);
    a.printNumber();
    b.printNumber();

    return 0;
}