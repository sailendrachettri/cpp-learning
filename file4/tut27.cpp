
// https://www.youtube.com/watch?v=Tk-4KUoatg8&list=PLu0W_9lII9agpFUAlPFe_VNSlXW5uE0YL&index=27

#include <iostream>
using namespace std;

// Forward declaration
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};

class Complex
{
    int a, b;

    // Individually declaring function as friend
    // friend int Calculator ::sumRealComplex(Complex, Complex);
    // friend int Calculator ::sumCompComplex(Complex, Complex);

    // Declaring entire class as friend
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator ::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);

    Calculator calc, calc_comp;
    int res;
    res = calc.sumRealComplex(o1, o2);
    cout << "The sum of o1 and o2 is " << res << endl;

    res = calc_comp.sumCompComplex(o1, o2);
    cout << "The sum of o1 and o2 is " << res << endl;



    return 0;
}
