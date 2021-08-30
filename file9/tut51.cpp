#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void getData()
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }

    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

int main()
{
    cout << "Pointers to Objects and Arrow Operator in CPP" << endl;
    // Complex c1;
    // Complex *ptr = &c1;
    // OR
    // Complex *ptr = new Complex; // Creating new object

    // brackets are very important here
    // (*ptr).setData(10, 20);
    // (*ptr).getData();

    // arrow operator
    // (*ptr).setData(10, 20); instead of this we can simply use
    // ptr->setData(10,20);
    // ptr->getData();



    // arrays of objects
    // Complex *ptr = new Complex[4];
    // ptr->setData(10, 20);
    // ptr->getData();
    
    return 0;
}